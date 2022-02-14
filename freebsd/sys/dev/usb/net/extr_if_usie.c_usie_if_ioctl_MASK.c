
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_long ;
struct usie_softc {int sc_rssi; int sc_mtx; int sc_dev; } ;
struct ifnet {int if_flags; int if_drv_flags; struct usie_softc* if_softc; } ;
struct ifmediareq {int ifm_count; } ;
struct ieee80211req_sta_info {int isi_len; int isi_rssi; } ;
struct ieee80211req {scalar_t__ i_data; int i_type; } ;
typedef int si ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ieee80211req_sta_info*,int *,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ieee80211req_sta_info*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usie_softc*,int ,int ) ;
 int FUNC_7 (struct usie_softc*) ;
 int FUNC_8 (struct usie_softc*) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_6, u_long VAR_7, caddr_t VAR_8)
{
 struct usie_softc *VAR_9 = VAR_6->if_softc;
 struct ieee80211req *VAR_10;
 struct ieee80211req_sta_info VAR_11;
 struct ifmediareq *VAR_12;

 switch (VAR_7) {
 case 128:
  if (VAR_6->if_flags & VAR_3) {
   if (!(VAR_6->if_drv_flags & VAR_2))
    FUNC_7(VAR_9);
  } else {
   if (VAR_6->if_drv_flags & VAR_2)
    FUNC_8(VAR_9);
  }
  break;

 case 129:
  if (!(VAR_6->if_drv_flags & VAR_2)) {
   FUNC_2(VAR_9->sc_dev,
       "Connect to the network first.\n");
   break;
  }
  FUNC_4(&VAR_9->sc_mtx);
  FUNC_6(VAR_9, VAR_4, VAR_5);
  FUNC_5(&VAR_9->sc_mtx);
  break;

 case 132:
  VAR_10 = (struct ieee80211req *)VAR_8;

  if (VAR_10->i_type != VAR_1)
   break;

  FUNC_3(&VAR_11, 0, sizeof(VAR_11));
  VAR_11.isi_len = sizeof(VAR_11);




  VAR_11.isi_rssi = 2 * VAR_9->sc_rssi;
  if (FUNC_1(&VAR_11, (uint8_t *)VAR_10->i_data + 8,
      sizeof(struct ieee80211req_sta_info)))
   FUNC_0("copyout failed\n");
  FUNC_0("80211\n");
  break;

 case 131:
  VAR_12 = (struct ifmediareq *)VAR_8;
  VAR_12->ifm_count = 1;
  FUNC_0("media\n");
  break;

 case 130:
  break;

 default:
  return (VAR_0);
 }
 return (0);
}
