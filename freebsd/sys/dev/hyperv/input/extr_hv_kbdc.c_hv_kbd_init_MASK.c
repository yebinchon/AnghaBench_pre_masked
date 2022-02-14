
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int keystroke_info ;
struct TYPE_3__ {int ks_free_list; int ks_queue; int ks_mtx; } ;
typedef TYPE_1__ hv_kbd_sc ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int * FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_5(hv_kbd_sc *VAR_5)
{
 const int VAR_6 = 16;
 int VAR_7;
 keystroke_info *VAR_8;

 FUNC_4(&VAR_5->ks_mtx, "hv_kbdc mutex", ((void*)0), VAR_0);
 FUNC_0(&VAR_5->ks_free_list);
 FUNC_2(&VAR_5->ks_queue);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = FUNC_3(sizeof(keystroke_info),
      VAR_1, VAR_2|VAR_3);
  FUNC_1(&VAR_5->ks_free_list, VAR_8, VAR_4);
 }
}
