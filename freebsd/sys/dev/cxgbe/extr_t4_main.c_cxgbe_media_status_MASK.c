
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vi_info {struct port_info* pi; } ;
struct link_config {int link_ok; int fc; int speed; } ;
struct port_info {scalar_t__ up_vis; struct link_config link_cfg; struct adapter* adapter; } ;
struct ifnet {struct vi_info* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct port_info*) ;
 int FUNC_1 (struct port_info*) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct adapter*,int *,int,char*) ;
 int FUNC_3 (struct port_info*) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct port_info*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct port_info*) ;

void
FUNC_8(struct ifnet *VAR_10, struct ifmediareq *VAR_11)
{
 struct vi_info *VAR_12 = VAR_10->if_softc;
 struct port_info *VAR_13 = VAR_12->pi;
 struct adapter *VAR_14 = VAR_13->adapter;
 struct link_config *VAR_15 = &VAR_13->link_cfg;

 if (FUNC_2(VAR_14, ((void*)0), VAR_9 | VAR_6, "t4med") != 0)
  return;
 FUNC_0(VAR_13);

 if (VAR_13->up_vis == 0) {







  FUNC_7(VAR_13);
  FUNC_3(VAR_13);
 }


 VAR_11->ifm_status = VAR_1;
 if (VAR_15->link_ok == 0)
  goto done;
 VAR_11->ifm_status |= VAR_0;


 VAR_11->ifm_active = VAR_2 | VAR_5;
 VAR_11->ifm_active &= ~(VAR_4 | VAR_3);
 if (VAR_15->fc & VAR_7)
  VAR_11->ifm_active |= VAR_3;
 if (VAR_15->fc & VAR_8)
  VAR_11->ifm_active |= VAR_4;
 VAR_11->ifm_active |= FUNC_5(VAR_13, FUNC_6(VAR_15->speed));
done:
 FUNC_1(VAR_13);
 FUNC_4(VAR_14, 0);
}
