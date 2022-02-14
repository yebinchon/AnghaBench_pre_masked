
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct msghdr {int dummy; } ;
struct inet_sock {unsigned int cmsg_flags; } ;


 struct inet_sock* FUNC_0 (int ) ;
 int FUNC_1 (struct msghdr*,struct sk_buff*) ;
 int FUNC_2 (struct msghdr*,struct sk_buff*) ;
 int FUNC_3 (struct msghdr*,struct sk_buff*) ;
 int FUNC_4 (struct msghdr*,struct sk_buff*) ;
 int FUNC_5 (struct msghdr*,struct sk_buff*) ;
 int FUNC_6 (struct msghdr*,struct sk_buff*) ;
 int FUNC_7 (struct msghdr*,struct sk_buff*) ;

void FUNC_8(struct msghdr *VAR_0, struct sk_buff *VAR_1)
{
 struct inet_sock *VAR_2 = FUNC_0(VAR_1->sk);
 unsigned VAR_3 = VAR_2->cmsg_flags;


 if (VAR_3 & 1)
  FUNC_3(VAR_0, VAR_1);
 if ((VAR_3 >>= 1) == 0)
  return;

 if (VAR_3 & 1)
  FUNC_7(VAR_0, VAR_1);
 if ((VAR_3 >>= 1) == 0)
  return;

 if (VAR_3 & 1)
  FUNC_6(VAR_0, VAR_1);
 if ((VAR_3 >>= 1) == 0)
  return;

 if (VAR_3 & 1)
  FUNC_2(VAR_0, VAR_1);
 if ((VAR_3 >>= 1) == 0)
  return;

 if (VAR_3 & 1)
  FUNC_4(VAR_0, VAR_1);
 if ((VAR_3 >>= 1) == 0)
  return;

 if (VAR_3 & 1)
  FUNC_5(VAR_0, VAR_1);

 if ((VAR_3 >>= 1) == 0)
  return;
 if (VAR_3 & 1)
  FUNC_1(VAR_0, VAR_1);

}
