
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filtees_loaded; int * needed_aux_filtees; int * needed_filtees; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(Obj_Entry *VAR_0, RtldLockState *VAR_1)
{

 FUNC_0(VAR_0->needed_filtees, VAR_1);
 VAR_0->needed_filtees = ((void*)0);
 FUNC_0(VAR_0->needed_aux_filtees, VAR_1);
 VAR_0->needed_aux_filtees = ((void*)0);
 VAR_0->filtees_loaded = 0;
}
