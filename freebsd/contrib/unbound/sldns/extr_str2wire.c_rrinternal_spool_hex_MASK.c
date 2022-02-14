
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static int
FUNC_4(char* VAR_3, uint8_t* VAR_4, size_t VAR_5,
 size_t VAR_6, size_t* VAR_7, size_t VAR_8)
{
 char* VAR_9 = VAR_3;
 while(*VAR_9) {
  if(FUNC_1((unsigned char)*VAR_9)) {
   VAR_9++;
   continue;
  }
  if(!FUNC_2((unsigned char)*VAR_9))
   return FUNC_0(VAR_2,
    VAR_9-VAR_3);
  if(*VAR_7 >= VAR_8)
   return FUNC_0(VAR_2,
    VAR_9-VAR_3);

  if(VAR_6+(*VAR_7)/2 >= VAR_5)
   return FUNC_0(VAR_0,
    VAR_9-VAR_3);

  if( ((*VAR_7)&1) == 0) {
   VAR_4[VAR_6+(*VAR_7)/2] =
    (uint8_t)FUNC_3(*VAR_9)*16;
  } else {
   VAR_4[VAR_6+(*VAR_7)/2] +=
    (uint8_t)FUNC_3(*VAR_9);
  }
  VAR_9++;
  (*VAR_7)++;
 }
 return VAR_1;
}
