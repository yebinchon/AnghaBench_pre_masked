
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct uinput_cdev_state {int ucs_blocked; int ucs_selected; TYPE_1__ ucs_selp; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct uinput_cdev_state*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct uinput_cdev_state*) ;

__attribute__((used)) static void
FUNC_4(struct uinput_cdev_state *VAR_0)
{

 FUNC_1(VAR_0);

 if (VAR_0->ucs_blocked) {
  VAR_0->ucs_blocked = 0;
  FUNC_3(VAR_0);
 }
 if (VAR_0->ucs_selected) {
  VAR_0->ucs_selected = 0;
  FUNC_2(&VAR_0->ucs_selp);
 }
 FUNC_0(&VAR_0->ucs_selp.si_note, 0);
}
