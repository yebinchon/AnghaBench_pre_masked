
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ FUNC_0 (char**,size_t*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (char**,size_t*,char*,...) ;
 scalar_t__ FUNC_3 (scalar_t__**,size_t*,char**,size_t*,scalar_t__) ;

int FUNC_4(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{
 int VAR_4;
 uint8_t VAR_5, VAR_6;
 uint16_t VAR_7;


 if(*VAR_1 < 4)
  return -1;
 VAR_6 = (*VAR_0)[0];
 VAR_5 = (*VAR_0)[1];
 VAR_7 = FUNC_1((*VAR_0)+2);
 if(*VAR_1 < (size_t)4 + (size_t)VAR_6 + (size_t)VAR_7)
  return -1;


 VAR_4 = FUNC_2(VAR_2, VAR_3, "%u ", (unsigned)VAR_5);
 VAR_4 += FUNC_0(VAR_2, VAR_3, (*VAR_0)+4, VAR_6);
 VAR_4 += FUNC_2(VAR_2, VAR_3, " ");
 (*VAR_0)+=4+VAR_6;
 (*VAR_1)-= (4+VAR_6);
 VAR_4 += FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7);
 return VAR_4;
}
