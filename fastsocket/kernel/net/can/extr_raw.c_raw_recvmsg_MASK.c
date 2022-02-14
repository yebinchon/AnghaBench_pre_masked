
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_can {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {size_t len; int cb; int data; } ;
struct msghdr {int msg_namelen; scalar_t__ msg_name; int msg_iov; int msg_flags; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sock*,int,int,int*) ;
 int FUNC_4 (struct msghdr*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct kiocb *VAR_2, struct socket *VAR_3,
         struct msghdr *VAR_4, size_t VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_3->sk;
 struct sk_buff *VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 VAR_10 = VAR_6 & VAR_0;
 VAR_6 &= ~VAR_0;

 VAR_4->msg_namelen = 0;

 VAR_8 = FUNC_3(VAR_7, VAR_6, VAR_10, &VAR_9);
 if (!VAR_8)
  return VAR_9;

 if (VAR_5 < VAR_8->len)
  VAR_4->msg_flags |= VAR_1;
 else
  VAR_5 = VAR_8->len;

 VAR_9 = FUNC_1(VAR_4->msg_iov, VAR_8->data, VAR_5);
 if (VAR_9 < 0) {
  FUNC_2(VAR_7, VAR_8);
  return VAR_9;
 }

 FUNC_4(VAR_4, VAR_7, VAR_8);

 if (VAR_4->msg_name) {
  VAR_4->msg_namelen = sizeof(struct sockaddr_can);
  FUNC_0(VAR_4->msg_name, VAR_8->cb, VAR_4->msg_namelen);
 }

 FUNC_2(VAR_7, VAR_8);

 return VAR_5;
}
