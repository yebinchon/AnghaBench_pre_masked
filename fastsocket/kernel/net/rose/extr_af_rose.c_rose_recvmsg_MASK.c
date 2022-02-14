
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_rose {int srose_ndigis; int srose_call; int srose_addr; int srose_family; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int* data; size_t len; } ;
struct rose_sock {int dest_ndigis; int * dest_digis; int dest_call; int dest_addr; scalar_t__ qbitincl; } ;
struct msghdr {int msg_namelen; struct sockaddr_rose* msg_name; int msg_iov; int msg_flags; } ;
struct kiocb {int dummy; } ;
struct full_sockaddr_rose {int * srose_digis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sockaddr_rose*,int ,int) ;
 struct rose_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,size_t) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 unsigned char* FUNC_5 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_6 (struct sock*,int,int,int*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct kiocb *VAR_7, struct socket *VAR_8,
   struct msghdr *VAR_9, size_t VAR_10, int VAR_11)
{
 struct sock *VAR_12 = VAR_8->sk;
 struct rose_sock *VAR_13 = FUNC_1(VAR_12);
 size_t VAR_14;
 unsigned char *VAR_15;
 struct sk_buff *VAR_16;
 int VAR_17, VAR_18, VAR_19;





 if (VAR_12->sk_state != VAR_6)
  return -VAR_1;

 VAR_9->msg_namelen = 0;


 if ((VAR_16 = FUNC_6(VAR_12, VAR_11 & ~VAR_2, VAR_11 & VAR_2, &VAR_18)) == ((void*)0))
  return VAR_18;

 VAR_19 = (VAR_16->data[0] & VAR_5) == VAR_5;

 FUNC_4(VAR_16, VAR_4);

 if (VAR_13->qbitincl) {
  VAR_15 = FUNC_5(VAR_16, 1);
  *VAR_15 = VAR_19;
 }

 FUNC_7(VAR_16);
 VAR_14 = VAR_16->len;

 if (VAR_14 > VAR_10) {
  VAR_14 = VAR_10;
  VAR_9->msg_flags |= VAR_3;
 }

 FUNC_2(VAR_16, 0, VAR_9->msg_iov, VAR_14);

 if (VAR_9->msg_name) {
  struct full_sockaddr_rose *VAR_20 = (struct full_sockaddr_rose *)VAR_9->msg_name;
  struct sockaddr_rose *VAR_21;

  FUNC_0(VAR_9->msg_name, 0, sizeof(struct full_sockaddr_rose));
  VAR_21 = VAR_9->msg_name;
  VAR_21->srose_family = VAR_0;
  VAR_21->srose_addr = VAR_13->dest_addr;
  VAR_21->srose_call = VAR_13->dest_call;
  VAR_21->srose_ndigis = VAR_13->dest_ndigis;

  for (VAR_17 = 0 ; VAR_17 < VAR_13->dest_ndigis ; VAR_17++)
   VAR_20->srose_digis[VAR_17] = VAR_13->dest_digis[VAR_17];
  VAR_9->msg_namelen = sizeof(struct full_sockaddr_rose);
 }

 FUNC_3(VAR_12, VAR_16);

 return VAR_14;
}
