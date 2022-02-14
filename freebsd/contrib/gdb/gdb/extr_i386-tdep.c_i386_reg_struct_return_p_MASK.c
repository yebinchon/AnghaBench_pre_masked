
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch_tdep {scalar_t__ struct_return; } ;
struct gdbarch {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct type*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 struct gdbarch_tdep* FUNC_3 (struct gdbarch*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_4 (struct gdbarch *VAR_6, struct type *VAR_7)
{
  struct gdbarch_tdep *VAR_8 = FUNC_3 (VAR_6);
  enum type_code VAR_9 = FUNC_0 (VAR_7);
  int VAR_10 = FUNC_1 (VAR_7);

  FUNC_2 (VAR_9 == VAR_0 || VAR_9 == VAR_1);

  if (VAR_5 == VAR_3
      || (VAR_5 == VAR_2
   && VAR_8->struct_return == VAR_4))
    return 0;

  return (VAR_10 == 1 || VAR_10 == 2 || VAR_10 == 4 || VAR_10 == 8);
}
