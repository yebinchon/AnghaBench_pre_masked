
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (char**,size_t*,int *,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char**,size_t*,char*,...) ;

int FUNC_3(char** VAR_0, size_t* VAR_1, uint8_t* VAR_2,
 size_t VAR_3)
{
 uint32_t VAR_4;
 int VAR_5 = 0;
 if(VAR_3 != 4) {
  VAR_5 += FUNC_2(VAR_0, VAR_1, "malformed UL ");
  VAR_5 += FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  return VAR_5;
 }
 VAR_4 = FUNC_1(VAR_2);
 VAR_5 += FUNC_2(VAR_0, VAR_1, "lease %lu", (unsigned long)VAR_4);
 return VAR_5;
}
