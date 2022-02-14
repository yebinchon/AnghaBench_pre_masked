
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {scalar_t__ (* promote_function_return ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ calls; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int,int ,int) ;
 int VAR_1 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,int*,int) ;
 scalar_t__ FUNC_12 (int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_13 (rtx VAR_3)
{



  rtx VAR_4 = FUNC_2 (FUNC_1 (VAR_1));
  if (VAR_4 != VAR_3)
    {
      tree VAR_5 = FUNC_4 (FUNC_1 (VAR_1));
      if (VAR_2.calls.promote_function_return (FUNC_4 (VAR_1)))
      {
 int VAR_6 = FUNC_5 (VAR_5);
 enum machine_mode VAR_7
   = FUNC_0 (FUNC_1 (VAR_1));
 enum machine_mode VAR_8
   = FUNC_11 (VAR_5, VAR_7, &VAR_6, 1);

 if (VAR_8 != VAR_7)
   VAR_3 = FUNC_6 (VAR_8, VAR_7, VAR_3, VAR_6);
      }
      if (FUNC_3 (VAR_4) == VAR_0)
 FUNC_7 (VAR_4, VAR_3, VAR_5, FUNC_10 (VAR_5));
      else
 FUNC_8 (VAR_4, VAR_3);
    }

  FUNC_9 ();
}
