
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static bool
FUNC_8 (tree VAR_1, bool VAR_2)
{
  if (FUNC_2 (VAR_1) != VAR_0)
    {
      FUNC_4 ("expected an SSA_NAME object");
      return 1;
    }

  if (FUNC_3 (VAR_1) != FUNC_3 (FUNC_1 (VAR_1)))
    {
      FUNC_4 ("type mismatch between an SSA_NAME and its symbol");
      return 1;
    }

  if (FUNC_0 (VAR_1))
    {
      FUNC_4 ("found an SSA_NAME that had been released into the free pool");
      return 1;
    }

  if (VAR_2 && FUNC_6 (VAR_1))
    {
      FUNC_4 ("found a virtual definition for a GIMPLE register");
      return 1;
    }

  if (!VAR_2 && !FUNC_6 (VAR_1))
    {
      FUNC_4 ("found a real definition for a non-register");
      return 1;
    }

  if (VAR_2 && FUNC_7 (FUNC_1 (VAR_1))
      && FUNC_5 (FUNC_1 (VAR_1)) != ((void*)0))
    {
      FUNC_4 ("found real variable when subvariables should have appeared");
      return 1;
    }

  return 0;
}
