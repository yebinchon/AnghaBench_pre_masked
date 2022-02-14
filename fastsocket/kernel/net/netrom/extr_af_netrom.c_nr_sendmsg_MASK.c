
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_ax25 {scalar_t__ sax25_family; int sax25_call; } ;
struct sock {int sk_shutdown; scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct nr_sock {int your_id; int your_index; int dest_addr; int * device; } ;
struct msghdr {int msg_flags; int msg_namelen; int msg_iov; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
typedef int sax ;


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
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct sock*,char*) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_19 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 struct nr_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int ,int ,int ) ;
 unsigned char* FUNC_9 (struct sk_buff*,size_t) ;
 int FUNC_10 (struct sk_buff*,size_t) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 struct sk_buff* FUNC_14 (struct sock*,int,int,int*) ;
 scalar_t__ FUNC_15 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_16(struct kiocb *VAR_20, struct socket *VAR_21,
        struct msghdr *VAR_22, size_t VAR_23)
{
 struct sock *VAR_24 = VAR_21->sk;
 struct nr_sock *VAR_25 = FUNC_6(VAR_24);
 struct sockaddr_ax25 *VAR_26 = (struct sockaddr_ax25 *)VAR_22->msg_name;
 int VAR_27;
 struct sockaddr_ax25 VAR_28;
 struct sk_buff *VAR_29;
 unsigned char *VAR_30;
 int VAR_31;

 if (VAR_22->msg_flags & ~(VAR_10|VAR_11|VAR_9))
  return -VAR_3;

 FUNC_3(VAR_24);
 if (FUNC_15(VAR_24, VAR_17)) {
  VAR_27 = -VAR_1;
  goto out;
 }

 if (VAR_24->sk_shutdown & VAR_15) {
  FUNC_8(VAR_16, VAR_19, 0);
  VAR_27 = -VAR_8;
  goto out;
 }

 if (VAR_25->device == ((void*)0)) {
  VAR_27 = -VAR_6;
  goto out;
 }

 if (VAR_26) {
  if (VAR_22->msg_namelen < sizeof(VAR_28)) {
   VAR_27 = -VAR_3;
   goto out;
  }
  VAR_28 = *VAR_26;
  if (FUNC_1(&VAR_25->dest_addr, &VAR_28.sax25_call) != 0) {
   VAR_27 = -VAR_4;
   goto out;
  }
  if (VAR_28.sax25_family != VAR_0) {
   VAR_27 = -VAR_3;
   goto out;
  }
 } else {
  if (VAR_24->sk_state != VAR_18) {
   VAR_27 = -VAR_7;
   goto out;
  }
  VAR_28.sax25_family = VAR_0;
  VAR_28.sax25_call = VAR_25->dest_addr;
 }

 FUNC_0(VAR_24, "NET/ROM: sendto: Addresses built.\n");



 if (VAR_23 > 65536) {
  VAR_27 = -VAR_5;
  goto out;
 }

 FUNC_0(VAR_24, "NET/ROM: sendto: building packet.\n");
 VAR_31 = VAR_23 + VAR_13 + VAR_14;

 if ((VAR_29 = FUNC_14(VAR_24, VAR_31, VAR_22->msg_flags & VAR_10, &VAR_27)) == ((void*)0))
  goto out;

 FUNC_11(VAR_29, VAR_31 - VAR_23);
 FUNC_12(VAR_29);





 VAR_30 = FUNC_9(VAR_29, VAR_14);
 FUNC_0(VAR_24, "Building NET/ROM Header.\n");



 *VAR_30++ = VAR_25->your_index;
 *VAR_30++ = VAR_25->your_id;
 *VAR_30++ = 0;
 *VAR_30++ = 0;
 *VAR_30++ = VAR_12;
 FUNC_0(VAR_24, "Built header.\n");




 FUNC_10(VAR_29, VAR_23);

 FUNC_0(VAR_24, "NET/ROM: Appending user data\n");


 if (FUNC_4(FUNC_13(VAR_29), VAR_22->msg_iov, VAR_23)) {
  FUNC_2(VAR_29);
  VAR_27 = -VAR_2;
  goto out;
 }

 FUNC_0(VAR_24, "NET/ROM: Transmitting buffer\n");

 if (VAR_24->sk_state != VAR_18) {
  FUNC_2(VAR_29);
  VAR_27 = -VAR_7;
  goto out;
 }

 FUNC_5(VAR_24, VAR_29);

 VAR_27 = VAR_23;
out:
 FUNC_7(VAR_24);
 return VAR_27;
}
