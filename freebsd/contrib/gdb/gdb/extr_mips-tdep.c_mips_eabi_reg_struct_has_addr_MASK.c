
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch_tdep {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct type*) ;
 int VAR_2 ;
 struct gdbarch_tdep* FUNC_3 (int ) ;
 int FUNC_4 (struct gdbarch_tdep*) ;

__attribute__((used)) static int
FUNC_5 (int VAR_3, struct type *VAR_4)
{
  enum type_code VAR_5 = FUNC_0 (FUNC_2 (VAR_4));
  int VAR_6 = FUNC_1 (FUNC_2 (VAR_4));
  struct gdbarch_tdep *VAR_7 = FUNC_3 (VAR_2);

  if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
    return (VAR_6 > FUNC_4 (VAR_7));

  return 0;
}
