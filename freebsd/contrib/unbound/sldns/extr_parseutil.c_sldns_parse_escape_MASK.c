
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (unsigned char) ;

int
FUNC_1(uint8_t *VAR_0, const char** VAR_1)
{
 uint16_t VAR_2;

 if ((*VAR_1)[0] && FUNC_0((unsigned char)(*VAR_1)[0]) &&
     (*VAR_1)[1] && FUNC_0((unsigned char)(*VAR_1)[1]) &&
     (*VAR_1)[2] && FUNC_0((unsigned char)(*VAR_1)[2])) {

  VAR_2 = (uint16_t)(((*VAR_1)[0] - '0') * 100 +
     ((*VAR_1)[1] - '0') * 10 +
     ((*VAR_1)[2] - '0'));

  if (VAR_2 > 255) {
   goto error;
  }
  *VAR_0 = (uint8_t)VAR_2;
  *VAR_1 += 3;
  return 1;

 } else if ((*VAR_1)[0] && !FUNC_0((unsigned char)(*VAR_1)[0])) {

  *VAR_0 = (uint8_t)*(*VAR_1)++;
  return 1;
 }
error:
 *VAR_1 = ((void*)0);
 return 0;
}
