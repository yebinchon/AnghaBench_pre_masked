
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sx25 ;
struct TYPE_4__ {int x25_addr; } ;
struct x25_sock {int lci; scalar_t__ qbitincl; int interrupt_out_queue; TYPE_2__* neighbour; TYPE_1__ dest_addr; } ;
struct socket {struct sock* sk; } ;
struct sockaddr_x25 {scalar_t__ sx25_family; TYPE_1__ sx25_addr; } ;
struct sock {int sk_shutdown; scalar_t__ sk_state; } ;
struct sk_buff {int* data; } ;
struct msghdr {int msg_flags; int msg_namelen; int msg_iov; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ extended; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct sock*,char*) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 size_t VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sockaddr_x25*,struct sockaddr_x25*,int) ;
 int FUNC_5 (int ,int ,size_t) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct sk_buff*,int) ;
 unsigned char* FUNC_9 (struct sk_buff*,size_t) ;
 int FUNC_10 (struct sk_buff*,size_t) ;
 int FUNC_11 (int *,struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,size_t) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 struct sk_buff* FUNC_15 (struct sock*,size_t,int,int*) ;
 scalar_t__ FUNC_16 (struct sock*,int ) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*,struct sk_buff*) ;
 struct x25_sock* FUNC_20 (struct sock*) ;

__attribute__((used)) static int FUNC_21(struct kiocb *VAR_25, struct socket *VAR_26,
         struct msghdr *VAR_27, size_t VAR_28)
{
 struct sock *VAR_29 = VAR_26->sk;
 struct x25_sock *VAR_30 = FUNC_20(VAR_29);
 struct sockaddr_x25 *VAR_31 = (struct sockaddr_x25 *)VAR_27->msg_name;
 struct sockaddr_x25 VAR_32;
 struct sk_buff *VAR_33;
 unsigned char *VAR_34;
 int VAR_35 = VAR_27->msg_flags & VAR_9;
 size_t VAR_36;
 int VAR_37 = 0, VAR_38 = -VAR_2;

 if (VAR_27->msg_flags & ~(VAR_9|VAR_11|VAR_10|VAR_8))
  goto out;


 if (!(VAR_27->msg_flags & (VAR_10|VAR_11)))
  goto out;

 VAR_38 = -VAR_1;
 if (FUNC_16(VAR_29, VAR_14))
  goto out;

 VAR_38 = -VAR_7;
 if (VAR_29->sk_shutdown & VAR_12) {
  FUNC_7(VAR_13, VAR_24, 0);
  goto out;
 }

 VAR_38 = -VAR_5;
 if (!VAR_30->neighbour)
  goto out;

 if (VAR_31) {
  VAR_38 = -VAR_2;
  if (VAR_27->msg_namelen < sizeof(VAR_32))
   goto out;
  FUNC_4(&VAR_32, VAR_31, sizeof(VAR_32));
  VAR_38 = -VAR_3;
  if (FUNC_17(VAR_30->dest_addr.x25_addr, VAR_32))
   goto out;
  VAR_38 = -VAR_2;
  if (VAR_32 != VAR_0)
   goto out;
 } else {





  VAR_38 = -VAR_6;
  if (VAR_29->sk_state != VAR_15)
   goto out;

  VAR_32 = VAR_0;
  VAR_32 = VAR_30->dest_addr;
 }


 if (VAR_28 > 65535) {
  VAR_38 = -VAR_4;
  goto out;
 }

 FUNC_0(VAR_29, "x25_sendmsg: sendto: Addresses built.\n");


 FUNC_0(VAR_29, "x25_sendmsg: sendto: building packet.\n");

 if ((VAR_27->msg_flags & VAR_11) && VAR_28 > 32)
  VAR_28 = 32;

 VAR_36 = VAR_28 + VAR_21 + VAR_17;

 VAR_33 = FUNC_15(VAR_29, VAR_36, VAR_35, &VAR_38);
 if (!VAR_33)
  goto out;
 FUNC_1(VAR_33)->flags = VAR_27->msg_flags;

 FUNC_12(VAR_33, VAR_21 + VAR_17);




 FUNC_0(VAR_29, "x25_sendmsg: Copying user data\n");

 FUNC_13(VAR_33);
 FUNC_10(VAR_33, VAR_28);

 VAR_38 = FUNC_5(FUNC_14(VAR_33), VAR_27->msg_iov, VAR_28);
 if (VAR_38)
  goto out_kfree_skb;





 if (VAR_30->qbitincl) {
  VAR_37 = VAR_33->data[0];
  FUNC_8(VAR_33, 1);
 }




 FUNC_0(VAR_29, "x25_sendmsg: Building X.25 Header.\n");

 if (VAR_27->msg_flags & VAR_11) {
  if (VAR_30->neighbour->extended) {
   VAR_34 = FUNC_9(VAR_33, VAR_23);
   *VAR_34++ = ((VAR_30->lci >> 8) & 0x0F) | VAR_18;
   *VAR_34++ = (VAR_30->lci >> 0) & 0xFF;
   *VAR_34++ = VAR_20;
  } else {
   VAR_34 = FUNC_9(VAR_33, VAR_23);
   *VAR_34++ = ((VAR_30->lci >> 8) & 0x0F) | VAR_19;
   *VAR_34++ = (VAR_30->lci >> 0) & 0xFF;
   *VAR_34++ = VAR_20;
  }
 } else {
  if (VAR_30->neighbour->extended) {

   VAR_34 = FUNC_9(VAR_33, VAR_17);
   *VAR_34++ = ((VAR_30->lci >> 8) & 0x0F) | VAR_18;
   *VAR_34++ = (VAR_30->lci >> 0) & 0xFF;
   *VAR_34++ = VAR_16;
   *VAR_34++ = VAR_16;
  } else {

   VAR_34 = FUNC_9(VAR_33, VAR_23);
   *VAR_34++ = ((VAR_30->lci >> 8) & 0x0F) | VAR_19;
   *VAR_34++ = (VAR_30->lci >> 0) & 0xFF;
   *VAR_34++ = VAR_16;
  }

  if (VAR_37)
   VAR_33->data[0] |= VAR_22;
 }

 FUNC_0(VAR_29, "x25_sendmsg: Built header.\n");
 FUNC_0(VAR_29, "x25_sendmsg: Transmitting buffer\n");

 VAR_38 = -VAR_6;
 if (VAR_29->sk_state != VAR_15)
  goto out_kfree_skb;

 if (VAR_27->msg_flags & VAR_11)
  FUNC_11(&VAR_30->interrupt_out_queue, VAR_33);
 else {
  VAR_38 = FUNC_19(VAR_29, VAR_33);
  VAR_28 = VAR_38;
  if (VAR_38 < 0)
   FUNC_2(VAR_33);
  else if (VAR_30->qbitincl)
   VAR_28++;
 }
 FUNC_3(VAR_29);
 FUNC_18(VAR_29);
 FUNC_6(VAR_29);
 VAR_38 = VAR_28;
out:
 return VAR_38;
out_kfree_skb:
 FUNC_2(VAR_33);
 goto out;
}
