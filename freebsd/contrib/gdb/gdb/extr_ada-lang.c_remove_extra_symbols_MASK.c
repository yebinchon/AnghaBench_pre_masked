
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct block {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 (struct symbol*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct symbol*) ;
 int FUNC_3 (struct symbol*) ;
 scalar_t__ FUNC_4 (struct symbol*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6 (struct symbol **VAR_1, struct block **VAR_2, int VAR_3)
{
  int VAR_4, VAR_5;

  VAR_4 = 0;
  while (VAR_4 < VAR_3)
    {
      if (FUNC_1 (VAR_1[VAR_4]) != ((void*)0)
   && FUNC_2 (VAR_1[VAR_4]) == VAR_0
   && FUNC_5 (FUNC_3 (VAR_1[VAR_4])))
 {
   for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += 1)
     {
       if (VAR_4 != VAR_5
    && FUNC_1 (VAR_1[VAR_5]) != ((void*)0)
    && FUNC_0 (FUNC_1 (VAR_1[VAR_4]), FUNC_1 (VAR_1[VAR_5]))
    && FUNC_2 (VAR_1[VAR_4]) == FUNC_2 (VAR_1[VAR_5])
    && FUNC_4 (VAR_1[VAR_4])
    == FUNC_4 (VAR_1[VAR_5]))
  {
    int VAR_6;
    for (VAR_6 = VAR_4 + 1; VAR_6 < VAR_3; VAR_6 += 1)
      {
        VAR_1[VAR_6 - 1] = VAR_1[VAR_6];
        VAR_2[VAR_6 - 1] = VAR_2[VAR_6];
      }
    VAR_3 -= 1;
    goto NextSymbol;
  }
     }
 }
      VAR_4 += 1;
    NextSymbol:
      ;
    }
  return VAR_3;
}
