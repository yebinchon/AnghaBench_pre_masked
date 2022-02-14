
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct TYPE_2__ {int link_status; int link_speed; int speed; } ;
typedef TYPE_1__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_0(struct ifnet *VAR_9, struct ifmediareq *VAR_10)
{
 POCE_SOFTC VAR_11 = (POCE_SOFTC) VAR_9->if_softc;


 VAR_10->ifm_status = VAR_6;
 VAR_10->ifm_active = VAR_7;

 if (VAR_11->link_status == 1)
  VAR_10->ifm_status |= VAR_5;
 else
  return;

 switch (VAR_11->link_speed) {
 case 1:
  VAR_10->ifm_active |= VAR_3 | VAR_8;
  VAR_11->speed = 10;
  break;
 case 2:
  VAR_10->ifm_active |= VAR_1 | VAR_8;
  VAR_11->speed = 100;
  break;
 case 3:
  VAR_10->ifm_active |= VAR_0 | VAR_8;
  VAR_11->speed = 1000;
  break;
 case 4:
  VAR_10->ifm_active |= VAR_2 | VAR_8;
  VAR_11->speed = 10000;
  break;
 case 5:
  VAR_10->ifm_active |= VAR_2 | VAR_8;
  VAR_11->speed = 20000;
  break;
 case 6:
  VAR_10->ifm_active |= VAR_2 | VAR_8;
  VAR_11->speed = 25000;
  break;
 case 7:
  VAR_10->ifm_active |= VAR_4 | VAR_8;
  VAR_11->speed = 40000;
  break;
 default:
  VAR_11->speed = 0;
  break;
 }

 return;
}
