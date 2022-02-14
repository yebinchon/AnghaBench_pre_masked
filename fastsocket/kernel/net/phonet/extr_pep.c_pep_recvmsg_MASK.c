
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;
struct sk_buff {size_t len; } ;
struct pep_sock {int ctrlreq_queue; } ;
struct msghdr {int msg_flags; int msg_iov; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct sk_buff*,int ,int ) ;
 struct pep_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_buff*,int ,int ,size_t) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct sock*,int,int,int*) ;
 scalar_t__ FUNC_9 (struct sock*,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct kiocb *VAR_13, struct sock *VAR_14,
   struct msghdr *VAR_15, size_t VAR_16, int VAR_17,
   int VAR_18, int *VAR_19)
{
 struct sk_buff *VAR_20;
 int VAR_21;

 if (FUNC_10(1 << VAR_14->sk_state & (VAR_10 | VAR_9)))
  return -VAR_2;

 if ((VAR_18 & VAR_5) || FUNC_9(VAR_14, VAR_8)) {

  struct pep_sock *VAR_22 = FUNC_2(VAR_14);

  VAR_20 = FUNC_6(&VAR_22->ctrlreq_queue);
  if (VAR_20) {
   FUNC_1(VAR_14, VAR_20, VAR_7,
      VAR_3);
   VAR_15->msg_flags |= VAR_5;
   goto copy;
  }
  if (VAR_18 & VAR_5)
   return -VAR_1;
 }

 VAR_20 = FUNC_8(VAR_14, VAR_18, VAR_17, &VAR_21);
 FUNC_0(VAR_14);
 if (VAR_20 == ((void*)0)) {
  if (VAR_21 == -VAR_2 && VAR_14->sk_state == VAR_11)
   VAR_21 = -VAR_0;
  FUNC_4(VAR_14);
  return VAR_21;
 }

 if (VAR_14->sk_state == VAR_12)
  FUNC_3(VAR_14);
 FUNC_4(VAR_14);
copy:
 VAR_15->msg_flags |= VAR_4;
 if (VAR_20->len > VAR_16)
  VAR_15->msg_flags |= VAR_6;
 else
  VAR_16 = VAR_20->len;

 VAR_21 = FUNC_5(VAR_20, 0, VAR_15->msg_iov, VAR_16);
 if (!VAR_21)
  VAR_21 = (VAR_18 & VAR_6) ? VAR_20->len : VAR_16;

 FUNC_7(VAR_14, VAR_20);
 return VAR_21;
}
