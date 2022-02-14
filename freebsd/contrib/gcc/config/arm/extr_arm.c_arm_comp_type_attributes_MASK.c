
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3 (tree VAR_1, tree VAR_2)
{
  int VAR_3, VAR_4, VAR_5, VAR_6;


  if (FUNC_0 (VAR_1) != VAR_0)
    return 1;


  VAR_3 = FUNC_2 ("long_call", FUNC_1 (VAR_1)) != ((void*)0);
  VAR_4 = FUNC_2 ("long_call", FUNC_1 (VAR_2)) != ((void*)0);
  VAR_5 = FUNC_2 ("short_call", FUNC_1 (VAR_1)) != ((void*)0);
  VAR_6 = FUNC_2 ("short_call", FUNC_1 (VAR_2)) != ((void*)0);


  if (VAR_3 | VAR_4 | VAR_5 | VAR_6)
    {

      if ((VAR_3 != VAR_4) || (VAR_5 != VAR_6))
 return 0;


      if ((VAR_3 & VAR_6) || (VAR_4 & VAR_5))
 return 0;
    }


  VAR_3 = FUNC_2 ("isr", FUNC_1 (VAR_1)) != ((void*)0);
  if (! VAR_3)
    VAR_3 = FUNC_2 ("interrupt", FUNC_1 (VAR_1)) != ((void*)0);
  VAR_4 = FUNC_2 ("isr", FUNC_1 (VAR_2)) != ((void*)0);
  if (! VAR_4)
    VAR_3 = FUNC_2 ("interrupt", FUNC_1 (VAR_2)) != ((void*)0);
  if (VAR_3 != VAR_4)
    return 0;

  return 1;
}
