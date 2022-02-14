
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_can {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {size_t len; int cb; int data; } ;
struct msghdr {int msg_namelen; scalar_t__ msg_name; int msg_iov; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sock*,int,int,int*) ;
 int FUNC_4 (struct msghdr*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct kiocb *VAR_1, struct socket *VAR_2,
         struct msghdr *VAR_3, size_t VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_2->sk;
 struct sk_buff *VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;

 VAR_9 = VAR_5 & VAR_0;
 VAR_5 &= ~VAR_0;

 VAR_3->msg_namelen = 0;
 VAR_7 = FUNC_3(VAR_6, VAR_5, VAR_9, &VAR_8);
 if (!VAR_7)
  return VAR_8;

 if (VAR_7->len < VAR_4)
  VAR_4 = VAR_7->len;

 VAR_10 = FUNC_1(VAR_3->msg_iov, VAR_7->data, VAR_4);
 if (VAR_10 < 0) {
  FUNC_2(VAR_6, VAR_7);
  return VAR_10;
 }

 FUNC_4(VAR_3, VAR_6, VAR_7);

 if (VAR_3->msg_name) {
  VAR_3->msg_namelen = sizeof(struct sockaddr_can);
  FUNC_0(VAR_3->msg_name, VAR_7->cb, VAR_3->msg_namelen);
 }

 FUNC_2(VAR_6, VAR_7);

 return VAR_4;
}
