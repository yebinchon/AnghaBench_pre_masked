
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ks; } ;
typedef TYPE_1__ keystroke_info ;
typedef int keystroke ;
struct TYPE_7__ {int ks_mtx; int ks_queue; } ;
typedef TYPE_2__ hv_kbd_sc ;


 int FUNC_0 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(hv_kbd_sc *VAR_0, keystroke *VAR_1)
{
 int VAR_2 = 0;
 keystroke_info *VAR_3 = ((void*)0);
 FUNC_3(&VAR_0->ks_mtx);
 if (FUNC_1(&VAR_0->ks_queue)) {
  FUNC_0(VAR_0, "Empty queue!\n");
  VAR_2 = 1;
 } else {
  VAR_3 = FUNC_2(&VAR_0->ks_queue);
  VAR_3->ks = *VAR_1;
 }
 FUNC_4(&VAR_0->ks_mtx);
 return (VAR_2);
}
