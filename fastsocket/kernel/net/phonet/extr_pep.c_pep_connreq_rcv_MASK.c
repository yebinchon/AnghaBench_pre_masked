
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct sockaddr_pn {int dummy; } ;
struct sock {scalar_t__ sk_state; int (* sk_data_ready ) (struct sock*,int ) ;int sk_receive_queue; int sk_destruct; int sk_protocol; int sk_backlog_rcv; int sk_prot; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {scalar_t__ pipe_handle; int state_after_connect; int other_pep_type; scalar_t__* data; } ;
struct TYPE_2__ {int resource; int sobject; } ;
struct pep_sock {int peer_type; int ackq; scalar_t__ init_enable; int tx_fc; int rx_fc; scalar_t__ rx_credits; int tx_credits; scalar_t__ pipe_handle; int ctrlreq_queue; TYPE_1__ pn_sk; } ;
typedef int buf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__* FUNC_3 (struct sk_buff*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int ) ;
 struct pep_sock* FUNC_5 (struct sock*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct sk_buff*,struct sockaddr_pn*) ;
 int FUNC_7 (struct sockaddr_pn*) ;
 struct pnpipehdr* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sock*) ;
 scalar_t__ FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,int *) ;
 struct sock* FUNC_13 (int ,int ,int ,int ) ;
 struct sk_buff* FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,struct sk_buff*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct sock*,int ) ;
 int FUNC_19 (int *,struct sock*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*,int ) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static int FUNC_23(struct sock *VAR_13, struct sk_buff *VAR_14)
{
 struct sock *VAR_15;
 struct pep_sock *VAR_16, *VAR_17 = FUNC_5(VAR_13);
 struct pnpipehdr *VAR_18;
 struct sockaddr_pn VAR_19;
 u16 VAR_20;
 u8 VAR_21, VAR_22, VAR_23;

 if (!FUNC_9(VAR_14, sizeof(*VAR_18) + 4))
  return -VAR_0;

 VAR_18 = FUNC_8(VAR_14);
 VAR_21 = VAR_18->pipe_handle;
 switch (VAR_18->state_after_connect) {
 case 130:
  VAR_22 = 0;
  break;
 case 129:
  VAR_22 = 1;
  break;
 default:
  FUNC_4(VAR_13, VAR_14, VAR_6);
  return -VAR_0;
 }
 VAR_20 = VAR_18->other_pep_type << 8;

 if (FUNC_22(VAR_13->sk_state != VAR_9) || FUNC_11(VAR_13)) {
  FUNC_4(VAR_13, VAR_14, VAR_7);
  return -VAR_1;
 }


 VAR_23 = VAR_18->data[4];
 while (VAR_23 > 0) {
  u8 VAR_24, VAR_25[1], VAR_26 = sizeof(VAR_25);
  const u8 *VAR_27 = FUNC_3(VAR_14, &VAR_24, &VAR_26, VAR_25);

  if (VAR_27 == ((void*)0))
   return -VAR_0;
  switch (VAR_24) {
  case 128:
   if (VAR_26 < 1)
    return -VAR_0;
   VAR_20 = (VAR_20 & 0xff00) | VAR_27[0];
   break;
  }
  VAR_23--;
 }

 VAR_14 = FUNC_14(VAR_14, VAR_3);
 if (!VAR_14)
  return -VAR_2;


 VAR_15 = FUNC_13(FUNC_20(VAR_13), VAR_4, VAR_3, VAR_13->sk_prot);
 if (!VAR_15) {
  FUNC_2(VAR_14);
  return -VAR_2;
 }
 FUNC_19(((void*)0), VAR_15);
 VAR_15->sk_state = VAR_10;
 VAR_15->sk_backlog_rcv = VAR_12;
 VAR_15->sk_protocol = VAR_13->sk_protocol;
 VAR_15->sk_destruct = VAR_11;

 VAR_16 = FUNC_5(VAR_15);
 FUNC_6(VAR_14, &VAR_19);
 VAR_16->pn_sk.sobject = FUNC_7(&VAR_19);
 VAR_16->pn_sk.resource = VAR_17->pn_sk.resource;
 FUNC_17(&VAR_16->ctrlreq_queue);
 VAR_16->pipe_handle = VAR_21;
 FUNC_1(&VAR_16->tx_credits, 0);
 VAR_16->peer_type = VAR_20;
 VAR_16->rx_credits = 0;
 VAR_16->rx_fc = VAR_16->tx_fc = VAR_5;
 VAR_16->init_enable = VAR_22;

 FUNC_0(!FUNC_15(&VAR_15->sk_receive_queue));
 FUNC_16(&VAR_15->sk_receive_queue, VAR_14);
 if (!FUNC_18(VAR_13, VAR_8))
  VAR_13->sk_data_ready(VAR_13, 0);

 FUNC_10(VAR_13);
 FUNC_12(VAR_15, &VAR_17->ackq);
 return 0;
}
