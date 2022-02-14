
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * r; } ;
struct TYPE_7__ {TYPE_1__ core; } ;
typedef TYPE_2__ phase2_vrs ;
typedef int _Unwind_Reason_Code ;
typedef int _Unwind_Control_Block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;

_Unwind_Reason_Code
FUNC_3 (_Unwind_Control_Block * VAR_2,
    phase2_vrs * VAR_3)
{
  if (!FUNC_0 (VAR_2))
    return FUNC_1 (VAR_2, VAR_3);


  VAR_3->core.r[VAR_1] = VAR_3->core.r[VAR_0];

  return FUNC_2 (VAR_2, VAR_3, 0);
}
