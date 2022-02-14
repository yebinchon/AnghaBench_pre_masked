
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,int ) ;

__attribute__((used)) static bool
FUNC_6 (tree VAR_2)
{
  if (FUNC_1 (VAR_2) != VAR_1
       && FUNC_1 (VAR_2) != VAR_0)
    return 0;

  if (FUNC_5 ("dllexport", FUNC_0 (VAR_2)))
    return 1;


  if (FUNC_3 (VAR_2)
      && FUNC_5 ("dllexport",
       FUNC_2 (FUNC_3 (VAR_2))))
    return FUNC_4 (VAR_2);

  return 0;
}
