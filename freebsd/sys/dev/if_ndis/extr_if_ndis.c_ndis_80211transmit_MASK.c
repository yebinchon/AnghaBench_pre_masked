
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ndis_softc {scalar_t__ ndis_txpending; size_t ndis_txidx; int ndis_tx_timer; TYPE_3__* ndis_chars; int * ndis_tmaps; int ndis_ttag; scalar_t__ ndis_sc; TYPE_4__** ndis_txarray; int ndis_txpool; int ndis_running; int ndis_link; } ;
struct mbuf {int dummy; } ;
struct ieee80211com {struct ndis_softc* ic_softc; } ;
struct TYPE_10__ {int ** npe_info; } ;
struct TYPE_9__ {int npo_status; } ;
struct TYPE_12__ {size_t np_txidx; int np_sclist; TYPE_2__ np_ext; TYPE_1__ np_oob; struct mbuf* np_m0; } ;
typedef TYPE_4__ ndis_packet ;
struct TYPE_11__ {int * nmc_sendmulti_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ndis_softc*) ;
 int FUNC_1 (struct ndis_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ndis_softc*) ;
 int FUNC_3 (int*,TYPE_4__**,int ) ;
 int FUNC_4 (int ,int ,struct mbuf*,int ,int *,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (struct mbuf*,TYPE_4__**) ;
 size_t VAR_7 ;
 int FUNC_7 (struct ndis_softc*,TYPE_4__*) ;
 int FUNC_8 (struct ndis_softc*,TYPE_4__**,int) ;

__attribute__((used)) static int
FUNC_9(struct ieee80211com *VAR_8, struct mbuf *VAR_9)
{
 struct ndis_softc *VAR_10 = VAR_8->ic_softc;
 ndis_packet **VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 int VAR_13;

 FUNC_1(VAR_10);
 if (!VAR_10->ndis_link || !VAR_10->ndis_running) {
  FUNC_2(VAR_10);
  return (VAR_3);
 }

 if (VAR_10->ndis_txpending == 0) {
  FUNC_2(VAR_10);
  return (VAR_2);
 }

 VAR_11 = &VAR_10->ndis_txarray[VAR_10->ndis_txidx];

 FUNC_3(&VAR_13,
     &VAR_10->ndis_txarray[VAR_10->ndis_txidx], VAR_10->ndis_txpool);

 if (VAR_13 != VAR_5) {
  FUNC_2(VAR_10);
  return (VAR_2);
 }

 if (FUNC_6(VAR_9, &VAR_10->ndis_txarray[VAR_10->ndis_txidx])) {
  FUNC_2(VAR_10);
  return (VAR_2);
 }






 VAR_12 = VAR_10->ndis_txarray[VAR_10->ndis_txidx];
 VAR_12->np_txidx = VAR_10->ndis_txidx;
 VAR_12->np_m0 = VAR_9;
 VAR_12->np_oob.npo_status = VAR_4;




 if (VAR_10->ndis_sc) {
  FUNC_4(VAR_10->ndis_ttag,
      VAR_10->ndis_tmaps[VAR_10->ndis_txidx], VAR_9,
      VAR_6, &VAR_12->np_sclist, VAR_1);
  FUNC_5(VAR_10->ndis_ttag,
      VAR_10->ndis_tmaps[VAR_10->ndis_txidx],
      VAR_0);
  VAR_12->np_ext.npe_info[VAR_7] = &VAR_12->np_sclist;
 }

 FUNC_0(VAR_10);
 VAR_10->ndis_txpending--;




 VAR_10->ndis_tx_timer = 5;
 FUNC_2(VAR_10);







 if (VAR_10->ndis_chars->nmc_sendmulti_func != ((void*)0))
  FUNC_8(VAR_10, VAR_11, 1);
 else
  FUNC_7(VAR_10, VAR_12);

 return (0);
}
