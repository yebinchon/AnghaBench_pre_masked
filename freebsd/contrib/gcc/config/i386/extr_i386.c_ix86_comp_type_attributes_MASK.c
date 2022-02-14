
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (char const* const,int ) ;

__attribute__((used)) static int
FUNC_4 (tree VAR_2, tree VAR_3)
{

  const char *const VAR_4 = VAR_1 ? "cdecl" : "stdcall";

  if (FUNC_0 (VAR_2) != VAR_0)
    return 1;


  if ((!FUNC_3 ("fastcall", FUNC_1 (VAR_2))
       != !FUNC_3 ("fastcall", FUNC_1 (VAR_3)))
      || (FUNC_2 (VAR_2, ((void*)0))
   != FUNC_2 (VAR_3, ((void*)0))))
    return 0;


  if (!FUNC_3 ("sseregparm", FUNC_1 (VAR_2))
      != !FUNC_3 ("sseregparm", FUNC_1 (VAR_3)))
    return 0;


  if (!FUNC_3 (VAR_4, FUNC_1 (VAR_2))
      != !FUNC_3 (VAR_4, FUNC_1 (VAR_3)))
    return 0;

  return 1;
}
