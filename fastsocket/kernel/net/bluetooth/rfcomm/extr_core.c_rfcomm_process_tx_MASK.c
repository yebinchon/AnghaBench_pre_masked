
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct rfcomm_dlc {int cfc; int rx_credits; int tx_credits; int tx_queue; int flags; int session; int addr; int v24_sig; int dlci; int state; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static inline int FUNC_11(struct rfcomm_dlc *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;

 FUNC_0("dlc %p state %ld cfc %d rx_credits %d tx_credits %d",
   VAR_3, VAR_3->state, VAR_3->cfc, VAR_3->rx_credits, VAR_3->tx_credits);


 if (FUNC_9(VAR_0, &VAR_3->flags))
  FUNC_4(VAR_3->session, 1, VAR_3->dlci, VAR_3->v24_sig);

 if (VAR_3->cfc) {


  if (!FUNC_10(VAR_1, &VAR_3->flags) &&
    VAR_3->rx_credits <= (VAR_3->cfc >> 2)) {
   FUNC_2(VAR_3->session, VAR_3->addr, VAR_3->cfc - VAR_3->rx_credits);
   VAR_3->rx_credits = VAR_3->cfc;
  }
 } else {


  VAR_3->tx_credits = 5;
 }

 if (FUNC_10(VAR_2, &VAR_3->flags))
  return FUNC_8(&VAR_3->tx_queue);

 while (VAR_3->tx_credits && (VAR_4 = FUNC_6(&VAR_3->tx_queue))) {
  VAR_5 = FUNC_3(VAR_3->session, VAR_4->data, VAR_4->len);
  if (VAR_5 < 0) {
   FUNC_7(&VAR_3->tx_queue, VAR_4);
   break;
  }
  FUNC_1(VAR_4);
  VAR_3->tx_credits--;
 }

 if (VAR_3->cfc && !VAR_3->tx_credits) {


  FUNC_5(VAR_2, &VAR_3->flags);
 }

 return FUNC_8(&VAR_3->tx_queue);
}
