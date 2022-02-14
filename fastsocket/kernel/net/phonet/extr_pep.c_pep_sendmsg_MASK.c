
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; TYPE_1__* sk_socket; } ;
struct sk_buff {int dummy; } ;
struct pep_sock {int tx_credits; } ;
struct msghdr {int msg_flags; int msg_iov; } ;
struct kiocb {int dummy; } ;
struct TYPE_2__ {int wait; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int VAR_14 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int ,size_t) ;
 struct pep_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (struct sock*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct sock*,long*) ;
 int FUNC_13 (struct sock*,long*,int) ;
 int FUNC_14 (struct sk_buff*,size_t) ;
 int FUNC_15 (struct sk_buff*,scalar_t__) ;
 struct sk_buff* FUNC_16 (struct sock*,scalar_t__,int,int*) ;
 int FUNC_17 (long) ;
 long FUNC_18 (struct sock*,int) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_19(struct kiocb *VAR_16, struct sock *VAR_17,
   struct msghdr *VAR_18, size_t VAR_19)
{
 struct pep_sock *VAR_20 = FUNC_7(VAR_17);
 struct sk_buff *VAR_21 = ((void*)0);
 long VAR_22;
 int VAR_23 = VAR_18->msg_flags;
 int VAR_24, VAR_25;

 if (VAR_18->msg_flags & VAR_8 || !(VAR_18->msg_flags & VAR_7))
  return -VAR_3;

 FUNC_5(VAR_17);
 VAR_22 = FUNC_18(VAR_17, VAR_23 & VAR_6);
 if ((1 << VAR_17->sk_state) & (VAR_11|VAR_10)) {
  VAR_24 = -VAR_2;
  goto out;
 }
 if (VAR_17->sk_state != VAR_13) {

disabled:
  VAR_24 = FUNC_12(VAR_17, &VAR_22);
  if (VAR_24)
   goto out;

  if (VAR_17->sk_state == VAR_12) {
   VAR_24 = -VAR_1;
   goto out;
  }
 }
 FUNC_0(VAR_17->sk_state != VAR_13);


 VAR_25 = FUNC_2(&VAR_20->tx_credits);
 while (!VAR_25) {
  FUNC_1(VAR_15);

  if (!VAR_22) {
   VAR_24 = -VAR_0;
   goto out;
  }
  if (FUNC_11(VAR_14)) {
   VAR_24 = FUNC_17(VAR_22);
   goto out;
  }

  FUNC_9(&VAR_17->sk_socket->wait, &VAR_15,
    VAR_9);
  VAR_25 = FUNC_13(VAR_17, &VAR_22, FUNC_2(&VAR_20->tx_credits));
  FUNC_3(&VAR_17->sk_socket->wait, &VAR_15);

  if (VAR_17->sk_state != VAR_13)
   goto disabled;
 }

 if (!VAR_21) {
  VAR_21 = FUNC_16(VAR_17, VAR_5 + VAR_19,
      VAR_23 & VAR_6, &VAR_24);
  if (VAR_21 == ((void*)0))
   goto out;
  FUNC_15(VAR_21, VAR_4 + 3);

  if (VAR_17->sk_state != VAR_13 ||
      !FUNC_2(&VAR_20->tx_credits))
   goto disabled;
 }

 VAR_24 = FUNC_6(FUNC_14(VAR_21, VAR_19), VAR_18->msg_iov, VAR_19);
 if (VAR_24 < 0)
  goto out;

 VAR_24 = FUNC_8(VAR_17, VAR_21);
 if (VAR_24 >= 0)
  VAR_24 = VAR_19;
 VAR_21 = ((void*)0);
out:
 FUNC_10(VAR_17);
 FUNC_4(VAR_21);
 return VAR_24;
}
