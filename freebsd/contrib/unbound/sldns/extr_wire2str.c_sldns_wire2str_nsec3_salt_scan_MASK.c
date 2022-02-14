
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (char**,size_t*,scalar_t__*,size_t) ;
 int FUNC_1 (char**,size_t*,char*) ;

int FUNC_2(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{
 size_t VAR_4;
 int VAR_5;
 if(*VAR_1 < 1) return -1;
 VAR_4 = (size_t)(*VAR_0)[0];
 if(*VAR_1 < 1+VAR_4) return -1;
 (*VAR_0)++;
 (*VAR_1)--;
 if(VAR_4 == 0) {
  return FUNC_1(VAR_2, VAR_3, "-");
 }
 VAR_5 = FUNC_0(VAR_2, VAR_3, *VAR_0, VAR_4);
 (*VAR_1)-=VAR_4;
 (*VAR_0)+=VAR_4;
 return VAR_5;
}
