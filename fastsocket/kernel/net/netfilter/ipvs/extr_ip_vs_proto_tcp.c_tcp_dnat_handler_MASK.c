
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcphdr {scalar_t__ check; int dest; } ;
struct sk_buff {unsigned int len; scalar_t__ ip_summed; int csum; } ;
struct ipv6hdr {int dummy; } ;
struct ip_vs_protocol {int (* csum_check ) (scalar_t__,struct sk_buff*,struct ip_vs_protocol*) ;} ;
struct TYPE_5__ {int ip; int in6; } ;
struct TYPE_4__ {int ip; int in6; } ;
struct ip_vs_conn {scalar_t__ af; int protocol; TYPE_2__ daddr; TYPE_1__ caddr; int dport; int vport; int vaddr; int * app; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,unsigned int,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,unsigned int,int ,int ) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ip_vs_conn*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,unsigned int,unsigned int,int ) ;
 int FUNC_6 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (scalar_t__,struct sk_buff*,struct ip_vs_protocol*) ;
 int FUNC_9 (scalar_t__,struct tcphdr*,int *,TYPE_2__*,int ,int ) ;
 int FUNC_10 (scalar_t__,struct tcphdr*,int *,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(struct sk_buff *VAR_5,
   struct ip_vs_protocol *VAR_6, struct ip_vs_conn *VAR_7)
{
 struct tcphdr *VAR_8;
 unsigned int VAR_9;
 int VAR_10;






  VAR_9 = FUNC_3(VAR_5);
 VAR_10 = VAR_5->len - VAR_9;


 if (!FUNC_6(VAR_5, VAR_9+sizeof(*VAR_8)))
  return 0;

 if (FUNC_11(VAR_7->app != ((void*)0))) {

  if (VAR_6->csum_check && !VAR_6->csum_check(VAR_7->af, VAR_5, VAR_6))
   return 0;





  if (!FUNC_4(VAR_7, VAR_5))
   return 0;
 }

 VAR_8 = (void *)FUNC_7(VAR_5) + VAR_9;
 VAR_8->dest = VAR_7->dport;




 if (VAR_5->ip_summed == VAR_3) {
  FUNC_10(VAR_7->af, VAR_8, &VAR_7->vaddr, &VAR_7->daddr,
     FUNC_2(VAR_10),
     FUNC_2(VAR_5->len - VAR_9));
 } else if (!VAR_7->app) {

  FUNC_9(VAR_7->af, VAR_8, &VAR_7->vaddr, &VAR_7->daddr,
         VAR_7->vport, VAR_7->dport);
  if (VAR_5->ip_summed == VAR_1)
   VAR_5->ip_summed = VAR_2;
 } else {

  VAR_8->check = 0;
  VAR_5->csum = FUNC_5(VAR_5, VAR_9, VAR_5->len - VAR_9, 0);
   VAR_8->check = FUNC_1(VAR_7->caddr.ip,
       VAR_7->daddr.ip,
       VAR_5->len - VAR_9,
       VAR_7->protocol,
       VAR_5->csum);
  VAR_5->ip_summed = VAR_4;
 }
 return 1;
}
