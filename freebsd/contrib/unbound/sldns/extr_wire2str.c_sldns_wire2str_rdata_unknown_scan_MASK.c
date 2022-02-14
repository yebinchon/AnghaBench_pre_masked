
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (char**,size_t*,int *,size_t) ;
 scalar_t__ FUNC_1 (char**,size_t*,char*,...) ;

int FUNC_2(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2,
 size_t* VAR_3)
{
 int VAR_4 = 0;


 VAR_4 += FUNC_1(VAR_2, VAR_3, "\\# %u", (unsigned)*VAR_1);


 if(*VAR_1 != 0)
  VAR_4 += FUNC_1(VAR_2, VAR_3, " ");
 VAR_4 += FUNC_0(VAR_2, VAR_3, *VAR_0, *VAR_1);
 (*VAR_0) += *VAR_1;
 (*VAR_1) = 0;
 return VAR_4;
}
