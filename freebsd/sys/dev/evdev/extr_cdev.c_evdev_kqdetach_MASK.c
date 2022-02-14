
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {scalar_t__ kn_hook; } ;
struct TYPE_2__ {int si_note; } ;
struct evdev_client {TYPE_1__ ec_selp; } ;


 int FUNC_0 (int *,struct knote*,int ) ;

__attribute__((used)) static void
FUNC_1(struct knote *VAR_0)
{
 struct evdev_client *VAR_1;

 VAR_1 = (struct evdev_client *)VAR_0->kn_hook;
 FUNC_0(&VAR_1->ec_selp.si_note, VAR_0, 0);
}
