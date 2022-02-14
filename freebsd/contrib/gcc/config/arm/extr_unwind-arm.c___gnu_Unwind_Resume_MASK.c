
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * r; } ;
struct TYPE_6__ {TYPE_4__ core; } ;
typedef TYPE_1__ phase2_vrs ;
typedef int (* personality_routine ) (int ,int *,int *) ;
typedef int _Unwind_Reason_Code ;
typedef int _Unwind_Control_Block ;
typedef int _Unwind_Context ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;


 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*,int) ;

_Unwind_Reason_Code
FUNC_8 (_Unwind_Control_Block * VAR_2, phase2_vrs * VAR_3)
{
  _Unwind_Reason_Code VAR_4;


  VAR_3->core.r[VAR_0] = FUNC_2 (VAR_2);

  if (FUNC_0 (VAR_2))
    {
      FUNC_7 (VAR_2, VAR_3, 1);


      FUNC_3 ();
    }


  VAR_4 = ((personality_routine) FUNC_1 (VAR_2))
 (VAR_1, VAR_2, (_Unwind_Context *) VAR_3);

  switch (VAR_4)
    {
    case 128:

      FUNC_4 (&VAR_3->core);

    case 129:

      FUNC_6 (VAR_2, VAR_3);

    default:
      FUNC_3 ();
    }
}
