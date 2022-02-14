
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct rfcomm_session {int state; } ;
struct rfcomm_dlc {scalar_t__ state; int (* data_ready ) (struct rfcomm_dlc*,struct sk_buff*) ;int rx_credits; int flags; scalar_t__ tx_credits; scalar_t__ cfc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct rfcomm_session*,int ,scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 struct rfcomm_dlc* FUNC_3 (struct rfcomm_session*,scalar_t__) ;
 int FUNC_4 (struct rfcomm_dlc*) ;
 int FUNC_5 (struct rfcomm_dlc*) ;
 int FUNC_6 (struct rfcomm_session*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct rfcomm_dlc*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct rfcomm_session *VAR_2, u8 VAR_3, int VAR_4, struct sk_buff *VAR_5)
{
 struct rfcomm_dlc *VAR_6;

 FUNC_0("session %p state %ld dlci %d pf %d", VAR_2, VAR_2->state, VAR_3, VAR_4);

 VAR_6 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_6) {
  FUNC_6(VAR_2, VAR_3);
  goto drop;
 }

 if (VAR_4 && VAR_6->cfc) {
  u8 VAR_7 = *(u8 *) VAR_5->data; FUNC_7(VAR_5, 1);

  VAR_6->tx_credits += VAR_7;
  if (VAR_6->tx_credits)
   FUNC_1(VAR_1, &VAR_6->flags);
 }

 if (VAR_5->len && VAR_6->state == VAR_0) {
  FUNC_4(VAR_6);
  VAR_6->rx_credits--;
  VAR_6->data_ready(VAR_6, VAR_5);
  FUNC_5(VAR_6);
  return 0;
 }

drop:
 FUNC_2(VAR_5);
 return 0;
}
