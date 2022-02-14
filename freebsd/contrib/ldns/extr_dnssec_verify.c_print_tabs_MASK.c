
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_0, size_t VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_4 == VAR_1 - 1) {
   FUNC_0(VAR_0, "|---");
  } else if (VAR_2 && VAR_4 < VAR_3 && VAR_2[VAR_4] == 1) {
   FUNC_0(VAR_0, "|   ");
  } else {
   FUNC_0(VAR_0, "    ");
  }
 }
}
