
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
typedef enum arm_float_model { ____Placeholder_arm_float_model } arm_float_model ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct gdbarch*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct gdbarch*) ;
 int FUNC_2 (struct gdbarch*,int *) ;
 int FUNC_3 (struct gdbarch*,int *) ;

__attribute__((used)) static void
FUNC_4 (struct gdbarch *VAR_5)
{
  enum arm_float_model VAR_6 = FUNC_0 (VAR_5);

  if (FUNC_1 (VAR_5) == VAR_2
      && (VAR_6 == VAR_1 || VAR_6 == VAR_0))
    {
      FUNC_2 (VAR_5,
     &VAR_4);
      FUNC_3
 (VAR_5, &VAR_4);
    }
  else
    {
      FUNC_2 (VAR_5, &VAR_3);
      FUNC_3 (VAR_5,
          &VAR_3);
    }
}
