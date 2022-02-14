
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct TYPE_5__ {TYPE_1__ sin_addr; int sin_family; int sin_port; } ;
union sctp_addr {TYPE_2__ v4; } ;
struct sk_buff {int dummy; } ;
struct sctphdr {int dest; int source; } ;
struct in_addr {int dummy; } ;
typedef int __be16 ;
struct TYPE_6__ {int daddr; int saddr; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,void*,int) ;
 struct sctphdr* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(union sctp_addr *VAR_1, struct sk_buff *VAR_2,
        int VAR_3)
{
 void *VAR_4;
 __be16 *VAR_5;
 struct sctphdr *VAR_6;

 VAR_5 = &VAR_1->v4.sin_port;
 VAR_1->v4.sin_family = VAR_0;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_3) {
  *VAR_5 = VAR_6->source;
  VAR_4 = &FUNC_0(VAR_2)->saddr;
 } else {
  *VAR_5 = VAR_6->dest;
  VAR_4 = &FUNC_0(VAR_2)->daddr;
 }
 FUNC_1(&VAR_1->v4.sin_addr.s_addr, VAR_4, sizeof(struct in_addr));
}
