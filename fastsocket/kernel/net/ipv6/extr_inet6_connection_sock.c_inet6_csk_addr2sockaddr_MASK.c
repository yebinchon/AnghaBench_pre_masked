
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {scalar_t__ sin6_scope_id; int sin6_addr; scalar_t__ sin6_flowinfo; int sin6_port; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_bound_dev_if; } ;
struct ipv6_pinfo {int daddr; } ;
struct TYPE_2__ {int dport; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipv6_pinfo* FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct sock *VAR_2, struct sockaddr * VAR_3)
{
 struct ipv6_pinfo *VAR_4 = FUNC_0(VAR_2);
 struct sockaddr_in6 *VAR_5 = (struct sockaddr_in6 *) VAR_3;

 VAR_5->sin6_family = VAR_0;
 FUNC_2(&VAR_5->sin6_addr, &VAR_4->daddr);
 VAR_5->sin6_port = FUNC_1(VAR_2)->dport;

 VAR_5->sin6_flowinfo = 0;
 VAR_5->sin6_scope_id = 0;
 if (VAR_2->sk_bound_dev_if &&
     FUNC_3(&VAR_5->sin6_addr) & VAR_1)
  VAR_5->sin6_scope_id = VAR_2->sk_bound_dev_if;
}
