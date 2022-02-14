
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int u_int ;
struct lagg_port {struct ifnet* lp_ifp; } ;
struct lacp_softc {int dummy; } ;
struct lacp_port {int lp_media; scalar_t__ lp_state; scalar_t__ lp_key; int lp_selected; struct lacp_softc* lp_lsc; } ;
struct ifnet {int (* if_ioctl ) (struct ifnet*,int ,int ) ;scalar_t__ if_link_state; } ;
struct ifmediareq {int ifm_active; } ;
typedef int ifmr ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct lacp_port*) ;
 int FUNC_2 (struct lacp_softc*) ;
 struct lacp_port* FUNC_3 (struct lagg_port*) ;
 int FUNC_4 (struct lacp_softc*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (struct lacp_port*) ;
 int FUNC_7 (struct lacp_port*) ;
 int FUNC_8 (struct lacp_port*) ;
 int FUNC_9 (struct ifnet*,int ,int ) ;
 int FUNC_10 (struct ifnet*,int ,int ) ;

void
FUNC_11(struct lagg_port *VAR_6)
{
 struct lacp_port *VAR_7 = FUNC_3(VAR_6);
 struct lacp_softc *VAR_8 = VAR_7->lp_lsc;
 struct ifnet *VAR_9 = VAR_6->lp_ifp;
 struct ifmediareq VAR_10;
 int VAR_11 = 0;
 u_int VAR_12;
 uint8_t VAR_13;
 uint16_t VAR_14;

 FUNC_5((char *)&VAR_10, sizeof(VAR_10));
 VAR_11 = (*VAR_9->if_ioctl)(VAR_9, VAR_5, (caddr_t)&VAR_10);
 if (VAR_11 != 0) {
  FUNC_5((char *)&VAR_10, sizeof(VAR_10));
  VAR_11 = (*VAR_9->if_ioctl)(VAR_9, VAR_4, (caddr_t)&VAR_10);
 }
 if (VAR_11 != 0)
  return;

 FUNC_2(VAR_8);
 VAR_12 = VAR_10.ifm_active;
 FUNC_1((VAR_7, "media changed 0x%x -> 0x%x, ether = %d, fdx = %d, "
     "link = %d\n", VAR_7->lp_media, VAR_12, FUNC_0(VAR_12) == VAR_0,
     (VAR_12 & VAR_1) != 0, VAR_9->if_link_state == VAR_3));
 VAR_13 = VAR_7->lp_state;
 VAR_14 = VAR_7->lp_key;

 VAR_7->lp_media = VAR_12;




 if (FUNC_0(VAR_12) != VAR_0 || (VAR_12 & VAR_1) == 0 ||
     VAR_9->if_link_state != VAR_3) {
  FUNC_7(VAR_7);
 } else {
  FUNC_8(VAR_7);
 }
 VAR_7->lp_key = FUNC_6(VAR_7);

 if (VAR_13 != VAR_7->lp_state || VAR_14 != VAR_7->lp_key) {
  FUNC_1((VAR_7, "-> UNSELECTED\n"));
  VAR_7->lp_selected = VAR_2;
 }
 FUNC_4(VAR_8);
}
