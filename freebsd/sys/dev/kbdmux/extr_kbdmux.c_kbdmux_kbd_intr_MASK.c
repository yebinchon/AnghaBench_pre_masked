
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_7__ {int ks_task; int ks_flags; } ;
typedef TYPE_2__ kbdmux_state_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(void *VAR_1, int VAR_2)
{
 keyboard_t *VAR_3 = (keyboard_t *) VAR_1;
 kbdmux_state_t *VAR_4 = (kbdmux_state_t *) VAR_3->kb_data;

 FUNC_2(VAR_3, ((void*)0));

 FUNC_0(VAR_4);

 VAR_4->ks_flags &= ~VAR_0;
 FUNC_3(&VAR_4->ks_task);

 FUNC_1(VAR_4);
}
