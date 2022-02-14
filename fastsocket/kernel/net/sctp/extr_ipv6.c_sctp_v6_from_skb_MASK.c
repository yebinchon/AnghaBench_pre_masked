
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin6_addr; int sin6_scope_id; scalar_t__ sin6_flowinfo; int sin6_family; int sin6_port; } ;
union sctp_addr {TYPE_1__ v6; } ;
struct sk_buff {scalar_t__ cb; } ;
struct sctphdr {int dest; int source; } ;
struct inet6_skb_parm {int iif; } ;
typedef int __be16 ;
struct TYPE_4__ {int daddr; int saddr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,void*) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 struct sctphdr* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(union sctp_addr *VAR_1,struct sk_buff *VAR_2,
        int VAR_3)
{
 void *VAR_4;
 __be16 *VAR_5;
 struct sctphdr *VAR_6;

 VAR_5 = &VAR_1->v6.sin6_port;
 VAR_1->v6.sin6_family = VAR_0;
 VAR_1->v6.sin6_flowinfo = 0;
 VAR_1->v6.sin6_scope_id = ((struct inet6_skb_parm *)VAR_2->cb)->iif;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_3) {
  *VAR_5 = VAR_6->source;
  VAR_4 = &FUNC_1(VAR_2)->saddr;
 } else {
  *VAR_5 = VAR_6->dest;
  VAR_4 = &FUNC_1(VAR_2)->daddr;
 }
 FUNC_0(&VAR_1->v6.sin6_addr, VAR_4);
}
