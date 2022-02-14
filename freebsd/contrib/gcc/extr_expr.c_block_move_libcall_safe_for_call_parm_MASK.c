
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {scalar_t__ (* arg_partial_bytes ) (int *,int,int *,int) ;} ;
struct TYPE_4__ {TYPE_1__ calls; } ;
typedef int CUMULATIVE_ARGS ;


 int FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 (int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int *,int,int *,int) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool
FUNC_12 (void)
{

  if (VAR_2)
    return 1;
  {
    CUMULATIVE_ARGS VAR_5;
    tree VAR_6, VAR_7;

    VAR_6 = FUNC_10 (0);
    FUNC_2 (VAR_5, FUNC_6 (VAR_6), VAR_0, 0, 3);

    VAR_7 = FUNC_8 (FUNC_6 (VAR_6));
    for ( ; VAR_7 != VAR_4 ; VAR_7 = FUNC_5 (VAR_7))
      {
 enum machine_mode VAR_8 = FUNC_9 (FUNC_7 (VAR_7));
 rtx VAR_9 = FUNC_0 (VAR_5, VAR_8, VAR_1, 1);
 if (!VAR_9 || !FUNC_3 (VAR_9))
   return 0;
 if (VAR_3.calls.arg_partial_bytes (&VAR_5, VAR_8, ((void*)0), 1))
   return 0;
 FUNC_1 (VAR_5, VAR_8, VAR_1, 1);
      }
  }
  return 1;
}
