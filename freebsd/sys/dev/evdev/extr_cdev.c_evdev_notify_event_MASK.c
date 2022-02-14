
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct evdev_client {int ec_blocked; int ec_selected; int * ec_sigio; scalar_t__ ec_async; TYPE_1__ ec_selp; } ;


 int FUNC_0 (struct evdev_client*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct evdev_client*) ;

void
FUNC_5(struct evdev_client *VAR_1)
{

 FUNC_0(VAR_1);

 if (VAR_1->ec_blocked) {
  VAR_1->ec_blocked = 0;
  FUNC_4(VAR_1);
 }
 if (VAR_1->ec_selected) {
  VAR_1->ec_selected = 0;
  FUNC_3(&VAR_1->ec_selp);
 }
 FUNC_1(&VAR_1->ec_selp.si_note, 0);

 if (VAR_1->ec_async && VAR_1->ec_sigio != ((void*)0))
  FUNC_2(&VAR_1->ec_sigio, VAR_0, 0);
}
