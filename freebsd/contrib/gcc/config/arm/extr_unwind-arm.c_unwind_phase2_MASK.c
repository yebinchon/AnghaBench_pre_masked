
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * r; } ;
struct TYPE_4__ {TYPE_3__ core; } ;
typedef TYPE_1__ phase2_vrs ;
typedef scalar_t__ (* personality_routine ) (int ,int ,int *) ;
typedef scalar_t__ _Unwind_Reason_Code ;
typedef int _Unwind_Control_Block ;
typedef int _Unwind_Context ;
typedef int UCB_SAVED_CALLSITE_ADDR ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static void __attribute__((noreturn))
FUNC_5 (_Unwind_Control_Block * VAR_5, phase2_vrs * VAR_6)
{
  _Unwind_Reason_Code VAR_7;

  do
    {

      if (FUNC_2 (VAR_5, VAR_6->core.r[VAR_0]) != VAR_3)
 FUNC_1 ();

      UCB_SAVED_CALLSITE_ADDR (VAR_8) = VAR_6->core.r[VAR_0];


      VAR_7 = ((personality_routine) FUNC_0 (VAR_8))
 (VAR_4, VAR_8, (_Unwind_Context *) VAR_6);
    }
  while (VAR_7 == VAR_1);

  if (VAR_7 != VAR_2)
    FUNC_1();

  FUNC_3 (&VAR_6->core);
}
