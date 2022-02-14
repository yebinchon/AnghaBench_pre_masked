
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct evdev_client {int ec_buffer_mtx; int ec_sigio; TYPE_1__ ec_selp; int ec_evdev; int ec_revoked; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct evdev_client*) ;
 int FUNC_3 (struct evdev_client*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_1)
{
 struct evdev_client *VAR_2 = (struct evdev_client *)VAR_1;

 FUNC_0(VAR_2->ec_evdev);
 if (!VAR_2->ec_revoked)
  FUNC_2(VAR_2->ec_evdev, VAR_2);
 FUNC_1(VAR_2->ec_evdev);

 FUNC_5(&VAR_2->ec_selp.si_note, 0);
 FUNC_8(&VAR_2->ec_selp);
 FUNC_6(&VAR_2->ec_selp.si_note);
 FUNC_4(&VAR_2->ec_sigio);
 FUNC_7(&VAR_2->ec_buffer_mtx);
 FUNC_3(VAR_2, VAR_0);
}
