
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filtees_loaded; int needed_aux_filtees; int needed_filtees; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (TYPE_1__*,int ,int,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(Obj_Entry *VAR_0, int VAR_1, RtldLockState *VAR_2)
{

    FUNC_1(VAR_2);
    if (!VAR_0->filtees_loaded) {
 FUNC_0(VAR_0, VAR_0->needed_filtees, VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_0->needed_aux_filtees, VAR_1, VAR_2);
 VAR_0->filtees_loaded = 1;
    }
}
