
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xfer {int dummy; } ;
struct ieee80211com {int ic_ierrors; } ;
struct rsu_softc {struct ieee80211com sc_ic; } ;
struct rsu_data {scalar_t__ buf; struct rsu_softc* sc; } ;
struct r92s_rx_stat {int rxdw1; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rsu_softc*,int ,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rsu_softc*,scalar_t__,int) ;
 struct mbuf* FUNC_5 (struct rsu_softc*,scalar_t__,int) ;
 int FUNC_6 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static struct mbuf *
FUNC_7(struct usb_xfer *VAR_1, struct rsu_data *VAR_2)
{
 struct rsu_softc *VAR_3 = VAR_2->sc;
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;
 struct r92s_rx_stat *VAR_5;
 int VAR_6;

 FUNC_6(VAR_1, &VAR_6, ((void*)0), ((void*)0), ((void*)0));

 if (FUNC_1(VAR_6 < sizeof(*VAR_5))) {
  FUNC_0(VAR_3, VAR_0, "xfer too short %d\n", VAR_6);
  FUNC_2(VAR_4->ic_ierrors, 1);
  return (((void*)0));
 }

 VAR_5 = (struct r92s_rx_stat *)VAR_2->buf;
 if ((FUNC_3(VAR_5->rxdw1) & 0x1ff) == 0x1ff) {
  FUNC_4(VAR_3, VAR_2->buf, VAR_6);

  return (((void*)0));
 } else
  return (FUNC_5(VAR_3, VAR_2->buf, VAR_6));
}
