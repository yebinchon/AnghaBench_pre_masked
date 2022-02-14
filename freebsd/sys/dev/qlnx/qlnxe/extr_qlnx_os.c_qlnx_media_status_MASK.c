
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ifnet {scalar_t__ if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct TYPE_6__ {int link_partner_caps; } ;
struct TYPE_5__ {scalar_t__ link_up; TYPE_3__ if_link; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(struct ifnet *VAR_8, struct ifmediareq *VAR_9)
{
 qlnx_host_t *VAR_10;

 VAR_10 = (qlnx_host_t *)VAR_8->if_softc;

 FUNC_0(VAR_10, "enter\n");

 VAR_9->ifm_status = VAR_1;
 VAR_9->ifm_active = VAR_2;

 if (VAR_10->link_up) {
  VAR_9->ifm_status |= VAR_0;
  VAR_9->ifm_active |=
   (VAR_5 | FUNC_1(VAR_10, &VAR_10->if_link));

  if (VAR_10->if_link.link_partner_caps &
   (VAR_7 | VAR_6))
   VAR_9->ifm_active |=
    (VAR_3 | VAR_4);
 }

 FUNC_0(VAR_10, "exit (%s)\n", (VAR_10->link_up ? "link_up" : "link_down"));

 return;
}
