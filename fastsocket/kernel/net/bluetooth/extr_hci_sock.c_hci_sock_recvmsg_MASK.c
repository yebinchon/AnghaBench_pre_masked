
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int len; } ;
struct msghdr {int msg_iov; int msg_flags; scalar_t__ msg_namelen; } ;
struct kiocb {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sock*,struct msghdr*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sock*,int,int,int*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct kiocb *VAR_5, struct socket *VAR_6,
    struct msghdr *VAR_7, size_t VAR_8, int VAR_9)
{
 int VAR_10 = VAR_9 & VAR_2;
 struct sock *VAR_11 = VAR_6->sk;
 struct sk_buff *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0("sock %p, sk %p", VAR_6, VAR_11);

 if (VAR_9 & (VAR_3))
  return -VAR_1;

 VAR_7->msg_namelen = 0;

 if (VAR_11->sk_state == VAR_0)
  return 0;

 if (!(VAR_12 = FUNC_4(VAR_11, VAR_9, VAR_10, &VAR_14)))
  return VAR_14;

 VAR_13 = VAR_12->len;
 if (VAR_8 < VAR_13) {
  VAR_7->msg_flags |= VAR_4;
  VAR_13 = VAR_8;
 }

 FUNC_5(VAR_12);
 VAR_14 = FUNC_2(VAR_12, 0, VAR_7->msg_iov, VAR_13);

 FUNC_1(VAR_11, VAR_7, VAR_12);

 FUNC_3(VAR_11, VAR_12);

 return VAR_14 ? : VAR_13;
}
