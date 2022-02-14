
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (char*,int **,size_t*,char**,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char**,size_t*,char*) ;
 scalar_t__ FUNC_3 (char**,size_t*,int ) ;
 scalar_t__ FUNC_4 (int **,size_t*,char**,size_t*,int *,size_t) ;
 scalar_t__ FUNC_5 (char**,size_t*,int ) ;

int FUNC_6(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2,
 size_t* VAR_3, uint8_t* VAR_4, size_t VAR_5)
{
 int VAR_6 = 0;
 uint16_t VAR_7, VAR_8;
 VAR_6 += FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_6 += FUNC_2(VAR_2, VAR_3, "\t");
 if(*VAR_1 < 4) {
  if(*VAR_1 == 0)
   return VAR_6 + FUNC_2(VAR_2, VAR_3, "Error malformed\n");
  VAR_6 += FUNC_0("Error malformed 0x", VAR_0, VAR_1, VAR_2, VAR_3);
  return VAR_6 + FUNC_2(VAR_2, VAR_3, "\n");
 }
 VAR_7 = FUNC_1(*VAR_0);
 VAR_8 = FUNC_1((*VAR_0)+2);
 (*VAR_0)+=4;
 (*VAR_1)-=4;
 VAR_6 += FUNC_3(VAR_2, VAR_3, VAR_8);
 VAR_6 += FUNC_2(VAR_2, VAR_3, "\t");
 VAR_6 += FUNC_5(VAR_2, VAR_3, VAR_7);
 VAR_6 += FUNC_2(VAR_2, VAR_3, "\n");
 return VAR_6;
}
