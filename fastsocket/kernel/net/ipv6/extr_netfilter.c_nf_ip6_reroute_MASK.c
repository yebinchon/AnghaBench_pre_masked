
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ mark; } ;
struct nf_queue_entry {scalar_t__ hook; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct ip6_rt_info {scalar_t__ mark; int saddr; int daddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int *) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 struct ip6_rt_info* FUNC_3 (struct nf_queue_entry const*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1,
     const struct nf_queue_entry *VAR_2)
{
 struct ip6_rt_info *VAR_3 = FUNC_3(VAR_2);

 if (VAR_2->hook == VAR_0) {
  struct ipv6hdr *VAR_4 = FUNC_2(VAR_1);
  if (!FUNC_1(&VAR_4->daddr, &VAR_3->daddr) ||
      !FUNC_1(&VAR_4->saddr, &VAR_3->saddr) ||
      VAR_1->mark != VAR_3->mark)
   return FUNC_0(VAR_1);
 }
 return 0;
}
