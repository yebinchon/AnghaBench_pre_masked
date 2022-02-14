
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;




 int FUNC_0 (int **,int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int,int *,int *) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(uint8_t *VAR_0, uint8_t *VAR_1)
{
 uint64_t VAR_2, VAR_3;

 while (VAR_0 < VAR_1) {
  VAR_2 = FUNC_0(&VAR_0, VAR_1);
  switch (VAR_2) {
  case 129:
   VAR_3 = FUNC_0(&VAR_0, VAR_1);
   FUNC_5("  Tag_GNU_Power_ABI_FP: %s\n", FUNC_3(VAR_3));
   break;
  case 128:
   VAR_3 = FUNC_0(&VAR_0, VAR_1);
   FUNC_5("  Tag_GNU_Power_ABI_Vector: %s\n",
       FUNC_4(VAR_3));
   break;
  case 32:
   VAR_0 = FUNC_1(VAR_0, VAR_1);
   break;
  default:
   VAR_0 = FUNC_2(VAR_2, VAR_0, VAR_1);
   break;
  }
 }
}
