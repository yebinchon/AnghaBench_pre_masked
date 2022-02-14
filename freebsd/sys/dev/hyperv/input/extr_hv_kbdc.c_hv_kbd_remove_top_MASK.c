
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int keystroke_info ;
struct TYPE_4__ {int ks_mtx; int ks_free_list; int ks_queue; } ;
typedef TYPE_1__ hv_kbd_sc ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

int
FUNC_7(hv_kbd_sc *VAR_2)
{
 int VAR_3 = 0;
 keystroke_info *VAR_4 = ((void*)0);
 FUNC_5(&VAR_2->ks_mtx);
 if (FUNC_2(&VAR_2->ks_queue)) {
  FUNC_0(VAR_2, "Empty queue!\n");
  VAR_3 = 1;
 } else {
  VAR_4 = FUNC_3(&VAR_2->ks_queue);
  FUNC_4(&VAR_2->ks_queue, VAR_1);
  FUNC_1(&VAR_2->ks_free_list, VAR_4, VAR_0);
 }
 FUNC_6(&VAR_2->ks_mtx);
 return (VAR_3);
}
