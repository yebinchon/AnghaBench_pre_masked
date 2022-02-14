
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {struct axgbe_softc* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct TYPE_3__ {scalar_t__ duplex; int speed; int link; } ;
struct TYPE_4__ {TYPE_1__ phy; } ;
struct axgbe_softc {TYPE_2__ prv; } ;


 scalar_t__ VAR_0 ;
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
 struct axgbe_softc *VAR_11;

 VAR_11 = VAR_9->if_softc;

 VAR_10->ifm_status = VAR_5;
 if (!VAR_11->prv.phy.link)
  return;

 VAR_10->ifm_status |= VAR_4;
 VAR_10->ifm_active = VAR_6;

 if (VAR_11->prv.phy.duplex == VAR_0)
  VAR_10->ifm_active |= VAR_7;
 else
  VAR_10->ifm_active |= VAR_8;

 switch (VAR_11->prv.phy.speed) {
 case 129:
  VAR_10->ifm_active |= VAR_2;
  break;
 case 128:
  VAR_10->ifm_active |= VAR_3;
  break;
 case 130:
  VAR_10->ifm_active |= VAR_1;
  break;
 }
}
