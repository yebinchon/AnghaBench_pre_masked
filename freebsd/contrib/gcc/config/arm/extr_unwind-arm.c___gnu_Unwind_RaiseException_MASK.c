
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * r; } ;
struct TYPE_8__ {TYPE_1__ core; } ;
typedef TYPE_2__ phase2_vrs ;
struct TYPE_9__ {TYPE_1__ core; int demand_save_flags; } ;
typedef TYPE_3__ phase1_vrs ;
typedef scalar_t__ (* personality_routine ) (int ,int *,void*) ;
typedef int _uw ;
typedef scalar_t__ _Unwind_Reason_Code ;
typedef int _Unwind_Control_Block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int *,void*) ;
 int FUNC_4 (int *,TYPE_2__*) ;

_Unwind_Reason_Code
FUNC_5 (_Unwind_Control_Block * VAR_7,
        phase2_vrs * VAR_8)
{
  phase1_vrs VAR_9;
  _Unwind_Reason_Code VAR_10;


  VAR_8->core.r[VAR_1] = VAR_8->core.r[VAR_0];


  VAR_9.core = VAR_8->core;

  VAR_9.demand_save_flags = ~(_uw) 0;


  do
    {

      if ((VAR_10 = FUNC_1 (VAR_7, VAR_9.core.r[VAR_1])) != VAR_5)
 return VAR_10;


      VAR_10 = ((personality_routine) FUNC_0 (VAR_7))
 (VAR_6, VAR_7, (void *) &VAR_9);
    }
  while (VAR_10 == VAR_2);



  FUNC_2 (&VAR_9);
  if (VAR_10 != VAR_4)
    {


      return VAR_3;
    }

  FUNC_4 (VAR_7, VAR_8);
}
