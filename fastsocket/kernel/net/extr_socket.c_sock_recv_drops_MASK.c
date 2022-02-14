
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {scalar_t__ dropcount; } ;
struct msghdr {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msghdr*,int ,int ,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct sock*,int ) ;

inline void FUNC_2(struct msghdr *VAR_3, struct sock *VAR_4, struct sk_buff *VAR_5)
{
 if (FUNC_1(VAR_4, VAR_0) && VAR_5 && VAR_5->dropcount)
  FUNC_0(VAR_3, VAR_1, VAR_2,
   sizeof(__u32), &VAR_5->dropcount);
}
