
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct uinput_cdev_state {TYPE_1__ ucs_selp; } ;
struct knote {scalar_t__ kn_hook; } ;


 int FUNC_0 (int *,struct knote*,int ) ;

__attribute__((used)) static void
FUNC_1(struct knote *VAR_0)
{
 struct uinput_cdev_state *VAR_1;

 VAR_1 = (struct uinput_cdev_state *)VAR_0->kn_hook;
 FUNC_0(&VAR_1->ucs_selp.si_note, VAR_0, 0);
}
