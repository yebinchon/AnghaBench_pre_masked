
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt2661_tx_ring {size_t stat; size_t count; int queued; struct rt2661_tx_data* data; } ;
struct rt2661_tx_data {int rix; struct ieee80211_node* ni; struct mbuf* m; } ;
struct ieee80211_ratectl_tx_status {void* long_retries; void* status; void* flags; } ;
struct rt2661_softc {scalar_t__ sc_tx_timer; int sc_dev; struct rt2661_tx_ring mgtq; struct rt2661_tx_ring* txq; struct ieee80211_ratectl_tx_status sc_txs; } ;
struct mbuf {int dummy; } ;
struct ieee80211_node {int dummy; } ;


 int FUNC_0 (struct rt2661_softc*,int,char*,...) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct rt2661_softc*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int) ;

 int VAR_4 ;

 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct ieee80211_node*,struct ieee80211_ratectl_tx_status*) ;
 int FUNC_7 (struct ieee80211_node*,struct mbuf*,int) ;
 int FUNC_8 (struct rt2661_softc*) ;

__attribute__((used)) static void
FUNC_9(struct rt2661_softc *VAR_5)
{
 struct ieee80211_ratectl_tx_status *VAR_6 = &VAR_5->sc_txs;
 struct rt2661_tx_ring *VAR_7;
 struct rt2661_tx_data *VAR_8;
 uint32_t VAR_9;
 int VAR_10, VAR_11;

 VAR_6->flags = VAR_1;
 for (;;) {
  struct ieee80211_node *VAR_12;
  struct mbuf *VAR_13;

  VAR_9 = FUNC_1(VAR_5, VAR_3);
  if (!(VAR_9 & VAR_4))
   break;


  VAR_11 = FUNC_2(VAR_9);
  VAR_7 = (VAR_11 <= 3) ? &VAR_5->txq[VAR_11] : &VAR_5->mgtq;


  VAR_8 = &VAR_7->data[VAR_7->stat];
  VAR_13 = VAR_8->m;
  VAR_8->m = ((void*)0);
  VAR_12 = VAR_8->ni;
  VAR_8->ni = ((void*)0);


  if (VAR_12 == ((void*)0))
   continue;

  switch (FUNC_3(VAR_9)) {
  case 128:
   VAR_6->status = VAR_2;
   VAR_6->long_retries = FUNC_4(VAR_9);

   FUNC_0(VAR_5, 10, "data frame sent successfully after "
       "%d retries\n", VAR_6->long_retries);
   if (VAR_8->rix != VAR_0)
    FUNC_6(VAR_12, VAR_6);
   VAR_10 = 0;
   break;

  case 129:
   VAR_6->status = VAR_1;
   VAR_6->long_retries = FUNC_4(VAR_9);

   FUNC_0(VAR_5, 9, "%s\n",
       "sending data frame failed (too much retries)");
   if (VAR_8->rix != VAR_0)
    FUNC_6(VAR_12, VAR_6);
   VAR_10 = 1;
   break;

  default:

   FUNC_5(VAR_5->sc_dev,
       "sending data frame failed 0x%08x\n", VAR_9);
   VAR_10 = 1;
  }

  FUNC_0(VAR_5, 15, "tx done q=%d idx=%u\n", VAR_11, VAR_7->stat);

  VAR_7->queued--;
  if (++VAR_7->stat >= VAR_7->count)
   VAR_7->stat = 0;

  FUNC_7(VAR_12, VAR_13, VAR_10);
 }

 VAR_5->sc_tx_timer = 0;

 FUNC_8(VAR_5);
}
