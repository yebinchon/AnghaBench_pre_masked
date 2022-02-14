
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * r; } ;
struct TYPE_7__ {TYPE_1__ core; } ;
typedef TYPE_2__ phase2_vrs ;
struct TYPE_8__ {TYPE_1__ core; int demand_save_flags; } ;
typedef TYPE_3__ phase1_vrs ;
typedef scalar_t__ (* personality_routine ) (int,int *,void*) ;
typedef int _uw ;
typedef scalar_t__ (* _Unwind_Trace_Fn ) (int *,void*) ;
typedef scalar_t__ _Unwind_Reason_Code ;
typedef int _Unwind_Ptr ;
typedef int _Unwind_Control_Block ;
typedef int _Unwind_Context ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,void*) ;
 scalar_t__ FUNC_5 (int,int *,void*) ;

_Unwind_Reason_Code
FUNC_6(_Unwind_Trace_Fn VAR_8, void * VAR_9,
         phase2_vrs * VAR_10)
{
  phase1_vrs VAR_11;
  _Unwind_Reason_Code VAR_12;

  _Unwind_Control_Block VAR_13;
  _Unwind_Control_Block *VAR_14 = &VAR_13;


  VAR_10->core.r[VAR_1] = VAR_10->core.r[VAR_0];


  VAR_11.core = VAR_10->core;

  VAR_11.demand_save_flags = ~(_uw) 0;

  do
    {

      if ((VAR_12 = FUNC_2 (VAR_14, VAR_11.core.r[VAR_1])) != VAR_5)
   break;






      FUNC_1((_Unwind_Context *)&VAR_11, 12, (_Unwind_Ptr) VAR_14);


      if ((*VAR_8) ((_Unwind_Context *) &VAR_11, VAR_9)
   != VAR_4)
 {
   VAR_12 = VAR_3;
   break;
 }


      VAR_12 = ((personality_routine) FUNC_0 (VAR_14))
 (VAR_7 | VAR_6,
  VAR_14, (void *) &VAR_11);
    }
  while (VAR_12 != VAR_2
  && VAR_12 != VAR_3);

 finish:
  FUNC_3 (&VAR_11);
  return VAR_12;
}
