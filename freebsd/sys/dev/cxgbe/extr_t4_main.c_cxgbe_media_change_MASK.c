
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vi_info {struct port_info* pi; } ;
struct link_config {int supported; int requested_speed; int requested_fc; int requested_aneg; } ;
struct ifmedia {int ifm_media; } ;
struct port_info {scalar_t__ up_vis; struct adapter* adapter; struct link_config link_cfg; struct ifmedia media; } ;
struct ifnet {struct vi_info* if_softc; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct port_info*) ;
 int FUNC_3 (struct port_info*) ;
 int VAR_11 ;
 int FUNC_4 (struct port_info*) ;
 int FUNC_5 (struct adapter*,int *,int,char*) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct port_info*) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct ifnet *VAR_12)
{
 struct vi_info *VAR_13 = VAR_12->if_softc;
 struct port_info *VAR_14 = VAR_13->pi;
 struct ifmedia *VAR_15 = &VAR_14->media;
 struct link_config *VAR_16 = &VAR_14->link_cfg;
 struct adapter *VAR_17 = VAR_14->adapter;
 int VAR_18;

 VAR_18 = FUNC_5(VAR_17, ((void*)0), VAR_11 | VAR_7, "t4mec");
 if (VAR_18 != 0)
  return (VAR_18);
 FUNC_2(VAR_14);
 if (FUNC_1(VAR_15->ifm_media) == VAR_4) {

  if (!(VAR_16->supported & VAR_3)) {
   VAR_18 = VAR_2;
   goto done;
  }
  VAR_16->requested_aneg = VAR_1;
  VAR_16->requested_speed = 0;
  VAR_16->requested_fc |= VAR_8;
 } else {
  VAR_16->requested_aneg = VAR_0;
  VAR_16->requested_speed =
      FUNC_8(VAR_15->ifm_media) / 1000000;
  VAR_16->requested_fc = 0;
  if (FUNC_0(VAR_15->ifm_media) & VAR_5)
   VAR_16->requested_fc |= VAR_9;
  if (FUNC_0(VAR_15->ifm_media) & VAR_6)
   VAR_16->requested_fc |= VAR_10;
 }
 if (VAR_14->up_vis > 0) {
  FUNC_7(VAR_14);
  VAR_18 = FUNC_4(VAR_14);
 }
done:
 FUNC_3(VAR_14);
 FUNC_6(VAR_17, 0);
 return (VAR_18);
}
