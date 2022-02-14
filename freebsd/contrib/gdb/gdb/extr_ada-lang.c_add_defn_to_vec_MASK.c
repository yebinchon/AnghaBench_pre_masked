
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
typedef struct symbol block ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct symbol**,size_t,int) ;
 int * FUNC_2 (struct symbol*) ;
 struct symbol** VAR_0 ;
 struct symbol** VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_3 (struct symbol*,struct symbol*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4 (struct symbol *VAR_4, struct block *VAR_5)
{
  int VAR_6;
  size_t VAR_7;

  if (FUNC_2 (VAR_4) != ((void*)0))
    FUNC_0 (FUNC_2 (VAR_4));
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += 1)
    {
      if (FUNC_3 (VAR_4, VAR_1[VAR_6]))
 return;
      else if (FUNC_3 (VAR_1[VAR_6], VAR_4))
 {
   VAR_1[VAR_6] = VAR_4;
   VAR_0[VAR_6] = VAR_5;
   return;
 }
    }

  VAR_7 = VAR_2;
  FUNC_1 (VAR_1, VAR_7, VAR_3 + 2);
  FUNC_1 (VAR_0, VAR_2, VAR_3 + 2);

  VAR_1[VAR_3] = VAR_4;
  VAR_0[VAR_3] = VAR_5;
  VAR_3 += 1;
}
