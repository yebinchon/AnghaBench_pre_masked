
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (char*,int **,size_t*,char**,size_t*) ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int **,size_t*,char**,size_t*) ;
 int FUNC_3 (char**,size_t*,char*,...) ;
 scalar_t__ FUNC_4 (int **,size_t*,char**,size_t*,int *,size_t) ;
 scalar_t__ FUNC_5 (int **,size_t*,char**,size_t*) ;

int FUNC_6(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2,
 size_t* VAR_3, uint8_t* VAR_4, size_t VAR_5)
{
 size_t VAR_6, VAR_7;
 int VAR_8 = 0;
 VAR_8 += FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_8 += FUNC_3(VAR_2, VAR_3, "\t");
 VAR_8 += FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_8 += FUNC_3(VAR_2, VAR_3, "\t");
 if(*VAR_1 < 2) {
  if(*VAR_1 == 0)
   return VAR_8 + FUNC_3(VAR_2, VAR_3, ";Error missing rdatalen\n");
  VAR_8 += FUNC_0(";Error missing rdatalen 0x",
   VAR_0, VAR_1, VAR_2, VAR_3);
  return VAR_8 + FUNC_3(VAR_2, VAR_3, "\n");
 }
 VAR_6 = FUNC_1(*VAR_0);
 VAR_7 = VAR_6;
 (*VAR_0) += 2;
 (*VAR_1) -= 2;
 if(*VAR_1 < VAR_6) {
  VAR_8 += FUNC_3(VAR_2, VAR_3, "\\# %u ", (unsigned)VAR_6);
  if(*VAR_1 == 0)
   return VAR_8 + FUNC_3(VAR_2, VAR_3, ";Error missing rdata\n");
  VAR_8 += FUNC_0(";Error partial rdata 0x", VAR_0, VAR_1, VAR_2, VAR_3);
  return VAR_8 + FUNC_3(VAR_2, VAR_3, "\n");
 }
 VAR_8 += FUNC_5(VAR_0, &VAR_6, VAR_2, VAR_3);
 (*VAR_1) -= (VAR_7-VAR_6);
 VAR_8 += FUNC_3(VAR_2, VAR_3, "\n");
 return VAR_8;
}
