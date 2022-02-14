
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct stdarg_info {int va_list_vars; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct stdarg_info*,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static bool
FUNC_7 (struct stdarg_info *VAR_6, tree VAR_7, tree VAR_8,
      bool VAR_9)
{
  tree VAR_10;

  if (FUNC_2 (VAR_7) != VAR_0
      || FUNC_2 (FUNC_3 (VAR_7, 1)) != VAR_1)
    return 0;

  if (FUNC_2 (VAR_8) != VAR_2
      || FUNC_4 (VAR_6->va_list_vars, FUNC_0 (FUNC_1 (VAR_8))))
    return 0;

  VAR_10 = FUNC_5 (VAR_7);
  if (FUNC_2 (VAR_10) != VAR_3
      || !FUNC_4 (VAR_6->va_list_vars, FUNC_0 (VAR_10)))
    return 0;

  if (FUNC_3 (VAR_7, 1) == VAR_5)
    FUNC_6 (VAR_6, VAR_7, VAR_8, 1, VAR_9);
  else if (FUNC_3 (VAR_7, 1) == VAR_4)
    FUNC_6 (VAR_6, VAR_7, VAR_8, 0, VAR_9);

  return 1;
}
