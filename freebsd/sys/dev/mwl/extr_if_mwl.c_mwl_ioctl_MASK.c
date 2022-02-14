
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_6__ {int mst_rx_packets; int mst_tx_packets; int hw_stats; } ;
struct mwl_softc {TYPE_4__ sc_stats; int sc_mh; } ;
struct mwl_diag {int dummy; } ;
struct ifreq {int dummy; } ;
struct ieee80211com {struct mwl_softc* ic_softc; } ;
struct TYPE_5__ {int (* if_get_counter ) (TYPE_1__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mwl_softc*) ;
 int FUNC_1 (struct mwl_softc*) ;



 int FUNC_2 (TYPE_4__*,int ,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (struct ifreq*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct mwl_softc*,struct mwl_diag*) ;
 int FUNC_6 (struct mwl_softc*,struct mwl_diag*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_9(struct ieee80211com *VAR_4, u_long VAR_5, void *VAR_6)
{
 struct mwl_softc *VAR_7 = VAR_4->ic_softc;
 struct ifreq *VAR_8 = VAR_6;
 int VAR_9 = 0;

 switch (VAR_5) {
 case 128:
  FUNC_4(VAR_7->sc_mh, &VAR_7->sc_stats.hw_stats);
  return (FUNC_2(&VAR_7->sc_stats, FUNC_3(VAR_8),
      sizeof (VAR_7->sc_stats)));
 default:
  VAR_9 = VAR_0;
  break;
 }
 return (VAR_9);
}
