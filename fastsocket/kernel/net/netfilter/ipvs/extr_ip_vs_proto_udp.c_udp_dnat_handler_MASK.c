
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udphdr {scalar_t__ check; int dest; } ;
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
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,int *,unsigned int,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,unsigned int,int ,int ) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ip_vs_conn*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,unsigned int,unsigned int,int ) ;
 int FUNC_6 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (scalar_t__,struct sk_buff*,struct ip_vs_protocol*) ;
 int FUNC_9 (scalar_t__,struct udphdr*,int *,TYPE_2__*,int ,int ) ;
 int FUNC_10 (scalar_t__,struct udphdr*,int *,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(struct sk_buff *VAR_6,
   struct ip_vs_protocol *VAR_7, struct ip_vs_conn *VAR_8)
{
 struct udphdr *VAR_9;
 unsigned int VAR_10;
 int VAR_11;






  VAR_10 = FUNC_3(VAR_6);
 VAR_11 = VAR_6->len - VAR_10;


 if (!FUNC_6(VAR_6, VAR_10+sizeof(*VAR_9)))
  return 0;

 if (FUNC_11(VAR_8->app != ((void*)0))) {

  if (VAR_7->csum_check && !VAR_7->csum_check(VAR_8->af, VAR_6, VAR_7))
   return 0;





  if (!FUNC_4(VAR_8, VAR_6))
   return 0;
 }

 VAR_9 = (void *)FUNC_7(VAR_6) + VAR_10;
 VAR_9->dest = VAR_8->dport;




 if (VAR_6->ip_summed == VAR_3) {
  FUNC_10(VAR_8->af, VAR_9, &VAR_8->vaddr, &VAR_8->daddr,
     FUNC_2(VAR_11),
     FUNC_2(VAR_6->len - VAR_10));
 } else if (!VAR_8->app && (VAR_9->check != 0)) {

  FUNC_9(VAR_8->af, VAR_9, &VAR_8->vaddr, &VAR_8->daddr,
         VAR_8->vport, VAR_8->dport);
  if (VAR_6->ip_summed == VAR_1)
   VAR_6->ip_summed = VAR_2;
 } else {

  VAR_9->check = 0;
  VAR_6->csum = FUNC_5(VAR_6, VAR_10, VAR_6->len - VAR_10, 0);
   VAR_9->check = FUNC_1(VAR_8->caddr.ip,
       VAR_8->daddr.ip,
       VAR_6->len - VAR_10,
       VAR_8->protocol,
       VAR_6->csum);
  if (VAR_9->check == 0)
   VAR_9->check = VAR_5;
  VAR_6->ip_summed = VAR_4;
 }
 return 1;
}
