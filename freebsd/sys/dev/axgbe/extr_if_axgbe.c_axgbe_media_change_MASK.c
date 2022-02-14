
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ifnet {struct axgbe_softc* if_softc; } ;
struct TYPE_9__ {int (* phy_config_aneg ) (TYPE_5__*) ;} ;
struct TYPE_8__ {void* autoneg; int speed; } ;
struct TYPE_10__ {TYPE_4__ phy_if; int an_mutex; TYPE_3__ phy; } ;
struct TYPE_7__ {TYPE_1__* ifm_cur; } ;
struct axgbe_softc {TYPE_5__ prv; TYPE_2__ media; } ;
struct TYPE_6__ {int ifm_media; } ;


 void* VAR_0 ;
 void* VAR_1 ;




 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_5)
{
 struct axgbe_softc *VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->if_softc;

 FUNC_2(&VAR_6->prv.an_mutex);
 VAR_7 = VAR_6->media.ifm_cur->ifm_media;

 switch (FUNC_0(VAR_7)) {
 case 130:
  VAR_6->prv.phy.speed = VAR_3;
  VAR_6->prv.phy.autoneg = VAR_0;
  break;
 case 129:
  VAR_6->prv.phy.speed = VAR_4;
  VAR_6->prv.phy.autoneg = VAR_0;
  break;
 case 131:
  VAR_6->prv.phy.speed = VAR_2;
  VAR_6->prv.phy.autoneg = VAR_0;
  break;
 case 128:
  VAR_6->prv.phy.autoneg = VAR_1;
  break;
 }
 FUNC_3(&VAR_6->prv.an_mutex);

 return (-VAR_6->prv.phy_if.phy_config_aneg(&VAR_6->prv));
}
