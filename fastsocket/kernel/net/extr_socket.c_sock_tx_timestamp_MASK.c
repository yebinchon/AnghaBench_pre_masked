
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union skb_shared_tx {int hardware; int software; scalar_t__ flags; } ;
struct sock {int dummy; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sock*,int ) ;

int FUNC_1(struct msghdr *VAR_2, struct sock *VAR_3,
        union skb_shared_tx *VAR_4)
{
 VAR_4->flags = 0;
 if (FUNC_0(VAR_3, VAR_0))
  VAR_4->hardware = 1;
 if (FUNC_0(VAR_3, VAR_1))
  VAR_4->software = 1;
 return 0;
}
