
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; void* dev; } ;
struct msghdr {int msg_flags; int msg_iov; } ;
struct kiocb {int dummy; } ;
struct hci_dev {int raw_q; int cmd_q; int flags; } ;
struct TYPE_6__ {unsigned char pkt_type; } ;
struct TYPE_5__ {struct hci_dev* hdev; } ;
struct TYPE_4__ {int * ocf_mask; } ;


 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sock*,size_t,int,int*) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (scalar_t__) ;
 size_t FUNC_5 (size_t) ;
 size_t FUNC_6 (size_t) ;
 TYPE_2__* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*) ;
 TYPE_1__ VAR_15 ;
 int FUNC_10 (size_t,int *) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sock*) ;
 scalar_t__ FUNC_13 (int ,int ,size_t) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,size_t) ;
 int FUNC_17 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_18 (int ,int *) ;

__attribute__((used)) static int FUNC_19(struct kiocb *VAR_16, struct socket *VAR_17,
       struct msghdr *VAR_18, size_t VAR_19)
{
 struct sock *VAR_20 = VAR_17->sk;
 struct hci_dev *VAR_21;
 struct sk_buff *VAR_22;
 int VAR_23;

 FUNC_0("sock %p sk %p", VAR_17, VAR_20);

 if (VAR_18->msg_flags & VAR_14)
  return -VAR_4;

 if (VAR_18->msg_flags & ~(VAR_11|VAR_13|VAR_12))
  return -VAR_3;

 if (VAR_19 < 4 || VAR_19 > VAR_8)
  return -VAR_3;

 FUNC_12(VAR_20);

 if (!(VAR_21 = FUNC_7(VAR_20)->hdev)) {
  VAR_23 = -VAR_1;
  goto done;
 }

 if (!(VAR_22 = FUNC_2(VAR_20, VAR_19, VAR_18->msg_flags & VAR_11, &VAR_23)))
  goto done;

 if (FUNC_13(FUNC_16(VAR_22, VAR_19), VAR_18->msg_iov, VAR_19)) {
  VAR_23 = -VAR_2;
  goto drop;
 }

 FUNC_1(VAR_22)->pkt_type = *((unsigned char *) VAR_22->data);
 FUNC_15(VAR_22, 1);
 VAR_22->dev = (void *) VAR_21;

 if (FUNC_1(VAR_22)->pkt_type == VAR_6) {
  u16 VAR_24 = FUNC_4(VAR_22->data);
  u16 VAR_25 = FUNC_6(VAR_24);
  u16 VAR_26 = FUNC_5(VAR_24);

  if (((VAR_25 > VAR_10) ||
    !FUNC_10(VAR_26 & VAR_7, &VAR_15.ocf_mask[VAR_25])) &&
     !FUNC_3(VAR_0)) {
   VAR_23 = -VAR_5;
   goto drop;
  }

  if (FUNC_18(VAR_9, &VAR_21->flags) || (VAR_25 == 0x3f)) {
   FUNC_17(&VAR_21->raw_q, VAR_22);
   FUNC_9(VAR_21);
  } else {
   FUNC_17(&VAR_21->cmd_q, VAR_22);
   FUNC_8(VAR_21);
  }
 } else {
  if (!FUNC_3(VAR_0)) {
   VAR_23 = -VAR_5;
   goto drop;
  }

  FUNC_17(&VAR_21->raw_q, VAR_22);
  FUNC_9(VAR_21);
 }

 VAR_23 = VAR_19;

done:
 FUNC_14(VAR_20);
 return VAR_23;

drop:
 FUNC_11(VAR_22);
 goto done;
}
