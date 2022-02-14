
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct link_config {scalar_t__ requested_aneg; int supported; int requested_fc; int requested_speed; } ;
struct ifmedia {TYPE_1__* ifm_cur; } ;
struct port_info {struct link_config link_cfg; struct ifmedia media; } ;
struct TYPE_2__ {int ifm_media; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct port_info*) ;
 int FUNC_2 (struct ifmedia*,int) ;
 int FUNC_3 (struct port_info*,int ) ;
 int FUNC_4 (struct port_info*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct port_info *VAR_10)
{
 struct link_config *VAR_11;
 struct ifmedia *VAR_12;
 int VAR_13;
 u_int VAR_14;

 FUNC_1(VAR_10);


 VAR_12 = &VAR_10->media;
 if (VAR_12->ifm_cur != ((void*)0) &&
     FUNC_0(VAR_12->ifm_cur->ifm_media) == VAR_7)
  return;

 VAR_11 = &VAR_10->link_cfg;
 if (VAR_11->requested_aneg != VAR_0 &&
     VAR_11->supported & VAR_1) {
  FUNC_2(VAR_12, VAR_3 | VAR_2);
  return;
 }
 VAR_13 = VAR_3 | VAR_6;
 if (VAR_11->requested_fc & VAR_9)
  VAR_13 |= VAR_5;
 if (VAR_11->requested_fc & VAR_8)
  VAR_13 |= VAR_4;
 if (VAR_11->requested_speed == 0)
  VAR_14 = FUNC_4(VAR_10) * 1000;
 else
  VAR_14 = VAR_11->requested_speed;
 VAR_13 |= FUNC_3(VAR_10, FUNC_5(VAR_14));
 FUNC_2(VAR_12, VAR_13);
}
