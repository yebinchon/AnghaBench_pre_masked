
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x25_sock {int dest_addr; scalar_t__ qbitincl; TYPE_1__* neighbour; int interrupt_in_queue; } ;
struct socket {struct sock* sk; } ;
struct sockaddr_x25 {int sx25_addr; int sx25_family; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int* data; size_t len; } ;
struct msghdr {int msg_namelen; int msg_flags; int msg_iov; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct TYPE_2__ {scalar_t__ extended; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,size_t) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 unsigned char* FUNC_7 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_8 (struct sock*,int,int,int*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*) ;
 struct x25_sock* FUNC_12 (struct sock*) ;

__attribute__((used)) static int FUNC_13(struct kiocb *VAR_12, struct socket *VAR_13,
         struct msghdr *VAR_14, size_t VAR_15,
         int VAR_16)
{
 struct sock *VAR_17 = VAR_13->sk;
 struct x25_sock *VAR_18 = FUNC_12(VAR_17);
 struct sockaddr_x25 *VAR_19 = (struct sockaddr_x25 *)VAR_14->msg_name;
 size_t VAR_20;
 int VAR_21;
 struct sk_buff *VAR_22;
 unsigned char *VAR_23;
 int VAR_24 = -VAR_2;





 if (VAR_17->sk_state != VAR_8)
  goto out;

 VAR_14->msg_namelen = 0;
 if (VAR_16 & VAR_5) {
  VAR_24 = -VAR_1;
  if (FUNC_10(VAR_17, VAR_7) ||
      !FUNC_5(&VAR_18->interrupt_in_queue))
   goto out;

  VAR_22 = FUNC_3(&VAR_18->interrupt_in_queue);

  FUNC_6(VAR_22, VAR_11);




  if (VAR_18->qbitincl) {
   VAR_23 = FUNC_7(VAR_22, 1);
   *VAR_23 = 0x00;
  }

  VAR_14->msg_flags |= VAR_5;
 } else {

  VAR_22 = FUNC_8(VAR_17, VAR_16 & ~VAR_3,
     VAR_16 & VAR_3, &VAR_24);
  if (!VAR_22)
   goto out;

  VAR_21 = (VAR_22->data[0] & VAR_10) == VAR_10;

  FUNC_6(VAR_22, VAR_18->neighbour->extended ?
    VAR_9 : VAR_11);

  if (VAR_18->qbitincl) {
   VAR_23 = FUNC_7(VAR_22, 1);
   *VAR_23 = VAR_21;
  }
 }

 FUNC_9(VAR_22);
 VAR_20 = VAR_22->len;

 if (VAR_20 > VAR_15) {
  VAR_20 = VAR_15;
  VAR_14->msg_flags |= VAR_6;
 }


 VAR_14->msg_flags |= VAR_4;

 VAR_24 = FUNC_2(VAR_22, 0, VAR_14->msg_iov, VAR_20);
 if (VAR_24)
  goto out_free_dgram;

 if (VAR_19) {
  VAR_19->sx25_family = VAR_0;
  VAR_19->sx25_addr = VAR_18->dest_addr;
  VAR_14->msg_namelen = sizeof(*VAR_19);
 }

 FUNC_0(VAR_17);
 FUNC_11(VAR_17);
 FUNC_1(VAR_17);
 VAR_24 = VAR_20;
out_free_dgram:
 FUNC_4(VAR_17, VAR_22);
out:
 return VAR_24;
}
