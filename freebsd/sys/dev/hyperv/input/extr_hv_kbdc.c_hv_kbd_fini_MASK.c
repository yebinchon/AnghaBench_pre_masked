
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int keystroke_info ;
struct TYPE_3__ {int ks_mtx; int ks_queue; int ks_free_list; } ;
typedef TYPE_1__ hv_kbd_sc ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(hv_kbd_sc *VAR_3)
{
 keystroke_info *VAR_4;
 while (!FUNC_0(&VAR_3->ks_free_list)) {
  VAR_4 = FUNC_1(&VAR_3->ks_free_list);
  FUNC_2(VAR_4, VAR_1);
  FUNC_6(VAR_4, VAR_0);
 }
 while (!FUNC_3(&VAR_3->ks_queue)) {
  VAR_4 = FUNC_4(&VAR_3->ks_queue);
  FUNC_5(&VAR_3->ks_queue, VAR_2);
  FUNC_6(VAR_4, VAR_0);
 }
 FUNC_7(&VAR_3->ks_mtx);
}
