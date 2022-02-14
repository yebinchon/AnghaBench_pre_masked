
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; } ;
struct sk_buff {size_t len; } ;
struct msghdr {int msg_iov; int msg_flags; scalar_t__ msg_namelen; } ;
struct kiocb {int dummy; } ;


 int FUNC_0 (char*,struct socket*,struct sock*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*,int ,int ,size_t) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sock*,int,int,int*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct msghdr*,struct sock*,struct sk_buff*) ;

int FUNC_6(struct kiocb *VAR_5, struct socket *VAR_6,
    struct msghdr *VAR_7, size_t VAR_8, int VAR_9)
{
 int VAR_10 = VAR_9 & VAR_1;
 struct sock *VAR_11 = VAR_6->sk;
 struct sk_buff *VAR_12;
 size_t VAR_13;
 int VAR_14;

 FUNC_0("sock %p sk %p len %zu", VAR_6, VAR_11, VAR_8);

 if (VAR_9 & (VAR_2))
  return -VAR_0;

 VAR_7->msg_namelen = 0;

 if (!(VAR_12 = FUNC_3(VAR_11, VAR_9, VAR_10, &VAR_14))) {
  if (VAR_11->sk_shutdown & VAR_4)
   return 0;
  return VAR_14;
 }

 VAR_13 = VAR_12->len;
 if (VAR_8 < VAR_13) {
  VAR_7->msg_flags |= VAR_3;
  VAR_13 = VAR_8;
 }

 FUNC_4(VAR_12);
 VAR_14 = FUNC_1(VAR_12, 0, VAR_7->msg_iov, VAR_13);
 if (VAR_14 == 0)
  FUNC_5(VAR_7, VAR_11, VAR_12);

 FUNC_2(VAR_11, VAR_12);

 return VAR_14 ? : VAR_13;
}
