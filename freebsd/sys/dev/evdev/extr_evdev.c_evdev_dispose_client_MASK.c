
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evdev_dev {int ev_flags; TYPE_1__* ev_methods; int ev_clients; int ev_shortname; } ;
struct evdev_client {int dummy; } ;
struct TYPE_2__ {int (* ev_close ) (struct evdev_dev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct evdev_dev*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct evdev_client*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct evdev_dev*,char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct evdev_dev*,int ) ;
 int FUNC_6 (struct evdev_dev*,struct evdev_client*) ;
 int FUNC_7 (struct evdev_dev*) ;
 int FUNC_8 (struct evdev_dev*) ;

void
FUNC_9(struct evdev_dev *VAR_3, struct evdev_client *VAR_4)
{
 FUNC_4(VAR_3, "removing client for device %s", VAR_3->ev_shortname);

 FUNC_0(VAR_3);

 FUNC_2(VAR_4, VAR_2);
 if (FUNC_1(&VAR_3->ev_clients)) {
  if (VAR_3->ev_methods != ((void*)0) &&
      VAR_3->ev_methods->ev_close != ((void*)0))
   (void)VAR_3->ev_methods->ev_close(VAR_3);
  if (FUNC_5(VAR_3, VAR_1) &&
      FUNC_3(VAR_3->ev_flags, VAR_0))
   FUNC_7(VAR_3);
 }
 FUNC_6(VAR_3, VAR_4);
}
