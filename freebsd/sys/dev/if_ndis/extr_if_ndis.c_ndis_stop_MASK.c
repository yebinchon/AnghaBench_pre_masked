
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ndis_softc {scalar_t__ ndis_iftype; int ndisusb_status; scalar_t__ ndis_evtpidx; scalar_t__ ndis_evtcidx; TYPE_2__* ndis_evt; scalar_t__ ndis_running; TYPE_1__* ifp; int ndis_80211; scalar_t__ ndis_link; scalar_t__ ndis_tx_timer; int ndis_stat_callout; } ;
struct TYPE_4__ {scalar_t__ ne_len; scalar_t__ ne_sts; int * ne_buf; } ;
struct TYPE_3__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ndis_softc*) ;
 int FUNC_1 (struct ndis_softc*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ndis_softc*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_5(struct ndis_softc *VAR_7)
{
 int VAR_8;

 FUNC_2(&VAR_7->ndis_stat_callout);

 FUNC_0(VAR_7);
 VAR_7->ndis_tx_timer = 0;
 VAR_7->ndis_link = 0;
 if (!VAR_7->ndis_80211)
  VAR_7->ifp->if_drv_flags &= ~(VAR_1 | VAR_0);
 VAR_7->ndis_running = 0;
 FUNC_1(VAR_7);

 if (VAR_7->ndis_iftype != VAR_5 ||
     (VAR_7->ndis_iftype == VAR_5 &&
      !(VAR_7->ndisusb_status & VAR_3) &&
      VAR_6 != 0))
  FUNC_4(VAR_7);

 FUNC_0(VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_7->ndis_evt[VAR_8].ne_sts && VAR_7->ndis_evt[VAR_8].ne_buf != ((void*)0)) {
   FUNC_3(VAR_7->ndis_evt[VAR_8].ne_buf, VAR_2);
   VAR_7->ndis_evt[VAR_8].ne_buf = ((void*)0);
  }
  VAR_7->ndis_evt[VAR_8].ne_sts = 0;
  VAR_7->ndis_evt[VAR_8].ne_len = 0;
 }
 VAR_7->ndis_evtcidx = 0;
 VAR_7->ndis_evtpidx = 0;
 FUNC_1(VAR_7);
}
