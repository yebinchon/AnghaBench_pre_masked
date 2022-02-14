
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct iwi_softc {int sc_linkqual; } ;
struct iwi_notif_link_quality {int dummy; } ;
struct ifreq {int dummy; } ;
struct ieee80211com {struct iwi_softc* ic_softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwi_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct iwi_softc*) ;


 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct ifreq*) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211com *VAR_2, u_long VAR_3, void *VAR_4)
{
 struct ifreq *VAR_5 = VAR_4;
 struct iwi_softc *VAR_6 = VAR_2->ic_softc;
 int VAR_7;
 VAR_1;

 FUNC_0(VAR_6);
 switch (VAR_3) {
 case 129:

  VAR_7 = FUNC_2(&VAR_6->sc_linkqual, FUNC_3(VAR_5),
      sizeof(struct iwi_notif_link_quality));
  break;
 case 128:
  FUNC_4(&VAR_6->sc_linkqual, 0,
      sizeof(struct iwi_notif_link_quality));
  VAR_7 = 0;
  break;
 default:
  VAR_7 = VAR_0;
  break;
 }
 FUNC_1(VAR_6);

 return (VAR_7);
}
