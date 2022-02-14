
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char**,size_t*,char*,...) ;
 scalar_t__ FUNC_2 (int **,size_t*,char**,size_t*,scalar_t__) ;

int FUNC_3(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{
 int VAR_4;
 uint16_t VAR_5;
 if(*VAR_1 < 2)
  return -1;
 VAR_5 = FUNC_0(*VAR_0);
 if(*VAR_1 < 2+(size_t)VAR_5)
  return -1;
 (*VAR_0)+=2;
 (*VAR_1)-=2;
 if(VAR_5 == 0) {
  return FUNC_1(VAR_2, VAR_3, "0");
 }
 VAR_4 = FUNC_1(VAR_2, VAR_3, "%u ", (unsigned)VAR_5);
 VAR_4 += FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
 return VAR_4;
}
