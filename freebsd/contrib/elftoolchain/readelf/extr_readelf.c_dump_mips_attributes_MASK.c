
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct readelf {int dummy; } ;



 int FUNC_0 (int **,int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int,int *,int *) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(struct readelf *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2)
{
 uint64_t VAR_3, VAR_4;

 (void) VAR_0;

 while (VAR_1 < VAR_2) {
  VAR_3 = FUNC_0(&VAR_1, VAR_2);
  switch (VAR_3) {
  case 128:
   VAR_4 = FUNC_0(&VAR_1, VAR_2);
   FUNC_4("  Tag_GNU_MIPS_ABI_FP: %s\n", FUNC_3(VAR_4));
   break;
  case 32:
   VAR_1 = FUNC_1(VAR_1, VAR_2);
   break;
  default:
   VAR_1 = FUNC_2(VAR_3, VAR_1, VAR_2);
   break;
  }
 }
}
