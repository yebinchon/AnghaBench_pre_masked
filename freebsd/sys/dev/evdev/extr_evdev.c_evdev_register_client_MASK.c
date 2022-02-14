
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evdev_dev {int ev_clients; TYPE_1__* ev_methods; int ev_shortname; } ;
struct evdev_client {int dummy; } ;
struct TYPE_2__ {int (* ev_open ) (struct evdev_dev*) ;} ;


 int FUNC_0 (struct evdev_dev*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct evdev_client*,int ) ;
 int FUNC_3 (struct evdev_dev*,char*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct evdev_dev*) ;

int
FUNC_5(struct evdev_dev *VAR_1, struct evdev_client *VAR_2)
{
 int VAR_3 = 0;

 FUNC_3(VAR_1, "adding new client for device %s", VAR_1->ev_shortname);

 FUNC_0(VAR_1);

 if (FUNC_1(&VAR_1->ev_clients) && VAR_1->ev_methods != ((void*)0) &&
     VAR_1->ev_methods->ev_open != ((void*)0)) {
  FUNC_3(VAR_1, "calling ev_open() on device %s",
      VAR_1->ev_shortname);
  VAR_3 = VAR_1->ev_methods->ev_open(VAR_1);
 }
 if (VAR_3 == 0)
  FUNC_2(&VAR_1->ev_clients, VAR_2, VAR_0);
 return (VAR_3);
}
