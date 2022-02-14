
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_event_ {TYPE_1__* addr; struct subscription* s; } ;
struct subscription {int list; int addr_list; } ;
struct TYPE_2__ {scalar_t__ num_failures; int list; int domain_and_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct wps_event_*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct subscription*) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static void FUNC_6(struct wps_event_ *VAR_2)
{
 struct subscription *VAR_3 = VAR_2->s;

 VAR_2->addr->num_failures++;
 FUNC_5(VAR_1, "WPS UPnP: Failed to send event %p to %s "
     "(num_failures=%u)",
     VAR_2, VAR_2->addr->domain_and_port, VAR_2->addr->num_failures);

 if (VAR_2->addr->num_failures < VAR_0) {

  FUNC_2(VAR_2, 1);
  return;
 }





 FUNC_5(VAR_1, "WPS UPnP: Deleting subscription %p "
     "address %s due to errors", VAR_3, VAR_2->addr->domain_and_port);
 FUNC_0(&VAR_2->addr->list);
 FUNC_3(VAR_2->addr);
 VAR_2->addr = ((void*)0);

 if (FUNC_1(&VAR_3->addr_list)) {

  FUNC_5(VAR_1, "WPS UPnP: Removing subscription %p "
      "with no addresses", VAR_3);
  FUNC_0(&VAR_3->list);
  FUNC_4(VAR_3);
  return;
 }


 FUNC_2(VAR_2, 0);
}
