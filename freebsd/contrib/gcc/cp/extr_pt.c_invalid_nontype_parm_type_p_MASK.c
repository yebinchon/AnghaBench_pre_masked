
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsubst_flags_t ;
typedef int tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5 (tree VAR_3, tsubst_flags_t VAR_4)
{
  if (FUNC_0 (VAR_3))
    return 0;
  else if (FUNC_1 (VAR_3))
    return 0;
  else if (FUNC_3 (VAR_3))
    return 0;
  else if (FUNC_2 (VAR_3) == VAR_0)
    return 0;
  else if (FUNC_2 (VAR_3) == VAR_1)
    return 0;

  if (VAR_4 & VAR_2)
    FUNC_4 ("%q#T is not a valid type for a template constant parameter", VAR_3);
  return 1;
}
