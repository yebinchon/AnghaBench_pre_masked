
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_rose {int dummy; } ;
struct sock {int sk_shutdown; scalar_t__ sk_state; int sk_write_queue; } ;
struct sk_buff {int* data; size_t len; int free; int arp; struct sock* sk; } ;
struct rose_sock {int dest_ndigis; int lci; scalar_t__ qbitincl; int * dest_digis; int dest_call; int dest_addr; int * device; int * neighbour; } ;
struct msghdr {int msg_flags; int msg_namelen; int msg_iov; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct full_sockaddr_rose {int srose_ndigis; scalar_t__ srose_family; int * srose_digis; int srose_call; int srose_addr; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
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
 unsigned char VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 unsigned char VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct sock*,char*) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_23 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct full_sockaddr_rose*,struct sockaddr_rose*,int) ;
 int FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (struct full_sockaddr_rose*,int ,int) ;
 int FUNC_6 (struct sock*) ;
 struct rose_sock* FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_11 (struct sk_buff*,unsigned char*,size_t) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;
 unsigned char* FUNC_14 (struct sk_buff*,size_t) ;
 unsigned char* FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (int *,struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 struct sk_buff* FUNC_20 (struct sock*,int,int,int*) ;
 scalar_t__ FUNC_21 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_22(struct kiocb *VAR_24, struct socket *VAR_25,
   struct msghdr *VAR_26, size_t VAR_27)
{
 struct sock *VAR_28 = VAR_25->sk;
 struct rose_sock *VAR_29 = FUNC_7(VAR_28);
 struct sockaddr_rose *VAR_30 = (struct sockaddr_rose *)VAR_26->msg_name;
 int VAR_31;
 struct full_sockaddr_rose VAR_32;
 struct sk_buff *VAR_33;
 unsigned char *VAR_34;
 int VAR_35, VAR_36, VAR_37 = 0;

 if (VAR_26->msg_flags & ~(VAR_11|VAR_12|VAR_10))
  return -VAR_4;

 if (FUNC_21(VAR_28, VAR_21))
  return -VAR_3;

 if (VAR_28->sk_shutdown & VAR_19) {
  FUNC_9(VAR_20, VAR_23, 0);
  return -VAR_9;
 }

 if (VAR_29->neighbour == ((void*)0) || VAR_29->device == ((void*)0))
  return -VAR_7;

 if (VAR_30 != ((void*)0)) {
  if (VAR_26->msg_namelen != sizeof(struct sockaddr_rose) && VAR_26->msg_namelen != sizeof(struct full_sockaddr_rose))
   return -VAR_4;
  FUNC_5(&VAR_32, 0, sizeof(struct full_sockaddr_rose));
  FUNC_3(&VAR_32, VAR_30, VAR_26->msg_namelen);
  if (FUNC_8(&VAR_29->dest_addr, &VAR_32.srose_addr) != 0 ||
      FUNC_1(&VAR_29->dest_call, &VAR_32.srose_call) != 0)
   return -VAR_5;
  if (VAR_32.srose_ndigis != VAR_29->dest_ndigis)
   return -VAR_5;
  if (VAR_32.srose_ndigis == VAR_29->dest_ndigis) {
   for (VAR_35 = 0 ; VAR_35 < VAR_32.srose_ndigis ; VAR_35++)
    if (FUNC_1(&VAR_29->dest_digis[VAR_35],
         &VAR_32.srose_digis[VAR_35]))
     return -VAR_5;
  }
  if (VAR_32.srose_family != VAR_0)
   return -VAR_4;
 } else {
  if (VAR_28->sk_state != VAR_22)
   return -VAR_8;

  VAR_32.srose_family = VAR_0;
  VAR_32.srose_addr = VAR_29->dest_addr;
  VAR_32.srose_call = VAR_29->dest_call;
  VAR_32.srose_ndigis = VAR_29->dest_ndigis;
  for (VAR_35 = 0 ; VAR_35 < VAR_29->dest_ndigis ; VAR_35++)
   VAR_32.srose_digis[VAR_35] = VAR_29->dest_digis[VAR_35];
 }

 FUNC_0(VAR_28, "ROSE: sendto: Addresses built.\n");


 FUNC_0(VAR_28, "ROSE: sendto: building packet.\n");

 if (VAR_27 > 65535)
  return -VAR_6;

 VAR_36 = VAR_27 + VAR_1 + VAR_2 + VAR_16;

 if ((VAR_33 = FUNC_20(VAR_28, VAR_36, VAR_26->msg_flags & VAR_11, &VAR_31)) == ((void*)0))
  return VAR_31;

 FUNC_17(VAR_33, VAR_1 + VAR_2 + VAR_16);




 FUNC_0(VAR_28, "ROSE: Appending user data\n");

 FUNC_18(VAR_33);
 FUNC_15(VAR_33, VAR_27);

 VAR_31 = FUNC_4(FUNC_19(VAR_33), VAR_26->msg_iov, VAR_27);
 if (VAR_31) {
  FUNC_2(VAR_33);
  return VAR_31;
 }





 if (VAR_29->qbitincl) {
  VAR_37 = VAR_33->data[0];
  FUNC_13(VAR_33, 1);
 }




 VAR_34 = FUNC_14(VAR_33, VAR_16);

 FUNC_0(VAR_28, "ROSE: Building Network Header.\n");


 VAR_34[0] = ((VAR_29->lci >> 8) & 0x0F) | VAR_15;
 VAR_34[1] = (VAR_29->lci >> 0) & 0xFF;
 VAR_34[2] = VAR_14;

 if (VAR_37)
  VAR_34[0] |= VAR_18;

 FUNC_0(VAR_28, "ROSE: Built header.\n");

 FUNC_0(VAR_28, "ROSE: Transmitting buffer\n");

 if (VAR_28->sk_state != VAR_22) {
  FUNC_2(VAR_33);
  return -VAR_8;
 }
 FUNC_16(&VAR_28->sk_write_queue, VAR_33);


 FUNC_6(VAR_28);

 return VAR_27;
}
