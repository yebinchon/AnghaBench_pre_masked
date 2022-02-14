
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct octm_softc {int sc_port; } ;
struct ifnet {struct octm_softc* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct TYPE_4__ {int speed; scalar_t__ full_duplex; int link_up; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_helper_link_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ifnet *VAR_9, struct ifmediareq *VAR_10)
{
 struct octm_softc *VAR_11;
 cvmx_helper_link_info_t VAR_12;

 VAR_11 = VAR_9->if_softc;

 VAR_10->ifm_status = VAR_5;
 VAR_10->ifm_active = VAR_8;

 VAR_12 = FUNC_0(VAR_11->sc_port);
 if (!VAR_12.s.link_up)
  return;

 VAR_10->ifm_status |= VAR_4;

 switch (VAR_12.s.speed) {
 case 10:
  VAR_10->ifm_active |= VAR_3;
  break;
 case 100:
  VAR_10->ifm_active |= VAR_1;
  break;
 case 1000:
  VAR_10->ifm_active |= VAR_0;
  break;
 case 10000:
  VAR_10->ifm_active |= VAR_2;
  break;
 }

 if (VAR_12.s.full_duplex)
  VAR_10->ifm_active |= VAR_6;
 else
  VAR_10->ifm_active |= VAR_7;
}
