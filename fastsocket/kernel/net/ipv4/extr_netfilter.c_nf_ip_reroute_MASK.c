
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ mark; } ;
struct nf_queue_entry {scalar_t__ hook; } ;
struct iphdr {scalar_t__ tos; scalar_t__ daddr; scalar_t__ saddr; } ;
struct ip_rt_info {scalar_t__ tos; scalar_t__ mark; scalar_t__ daddr; scalar_t__ saddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct iphdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 struct ip_rt_info* FUNC_2 (struct nf_queue_entry const*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2,
    const struct nf_queue_entry *VAR_3)
{
 const struct ip_rt_info *VAR_4 = FUNC_2(VAR_3);

 if (VAR_3->hook == VAR_0) {
  const struct iphdr *VAR_5 = FUNC_0(VAR_2);

  if (!(VAR_5->tos == VAR_4->tos
        && VAR_2->mark == VAR_4->mark
        && VAR_5->daddr == VAR_4->daddr
        && VAR_5->saddr == VAR_4->saddr))
   return FUNC_1(VAR_2, VAR_1);
 }
 return 0;
}
