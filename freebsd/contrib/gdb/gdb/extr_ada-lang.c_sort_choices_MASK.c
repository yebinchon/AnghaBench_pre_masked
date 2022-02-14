
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct block {int dummy; } ;


 int FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2 (struct symbol *VAR_0[], struct block *VAR_1[], int VAR_2)
{
  int VAR_3, VAR_4;
  for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3 += 1)
    {
      struct symbol *VAR_5 = VAR_0[VAR_3];
      struct block *VAR_6 = VAR_1[VAR_3];
      int VAR_7;

      for (VAR_7 = VAR_3 - 1; VAR_7 >= 0; VAR_7 -= 1)
 {
   if (FUNC_1 (FUNC_0 (VAR_0[VAR_7]),
          FUNC_0 (VAR_5)))
     break;
   VAR_0[VAR_7 + 1] = VAR_0[VAR_7];
   VAR_1[VAR_7 + 1] = VAR_1[VAR_7];
 }
      VAR_0[VAR_7 + 1] = VAR_5;
      VAR_1[VAR_7 + 1] = VAR_6;
    }
}
