
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_2(char* VAR_0, char** VAR_1, uint8_t* VAR_2, uint8_t* VAR_3)
{
 uint32_t VAR_4 = 0, VAR_5 = 0, VAR_6;
 while (FUNC_0((unsigned char)*VAR_0)) {
  VAR_0++;
 }
 VAR_4 = (uint32_t)FUNC_1(VAR_0, &VAR_0, 10);
 if (*VAR_0 == '.') {
  VAR_0++;
  VAR_5 = (uint32_t)FUNC_1(VAR_0, &VAR_0, 10);
 }
 if (VAR_4 >= 1) {
  *VAR_3 = 2;
  VAR_6 = VAR_4;
 } else {
  *VAR_3 = 0;
  VAR_6 = VAR_5;
 }
 while(VAR_6 >= 10) {
  (*VAR_3)++;
  VAR_6 /= 10;
 }
 *VAR_2 = (uint8_t)VAR_6;

 if (*VAR_3 > 9)
  return 0;
 if (*VAR_0 == 'm' || *VAR_0 == 'M') {
  VAR_0++;
 }
 *VAR_1 = VAR_0;
 return 1;
}
