
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int mark; } ;
struct nf_queue_entry {scalar_t__ hook; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct ip6_rt_info {int mark; int saddr; int daddr; } ;


 scalar_t__ VAR_0 ;
 struct ipv6hdr* FUNC_0 (struct sk_buff const*) ;
 struct ip6_rt_info* FUNC_1 (struct nf_queue_entry*) ;

__attribute__((used)) static void FUNC_2(const struct sk_buff *VAR_1,
        struct nf_queue_entry *VAR_2)
{
 struct ip6_rt_info *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->hook == VAR_0) {
  struct ipv6hdr *VAR_4 = FUNC_0(VAR_1);

  VAR_3->daddr = VAR_4->daddr;
  VAR_3->saddr = VAR_4->saddr;
  VAR_3->mark = VAR_1->mark;
 }
}
