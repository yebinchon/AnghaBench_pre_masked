
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dest; int source; int seq; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int daddr; int saddr; } ;
typedef size_t __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (size_t,int ,int ,int ,int ,size_t,int,int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int* VAR_4 ;
 size_t FUNC_2 (int ) ;
 struct tcphdr* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_4(struct sk_buff *VAR_5, __u32 VAR_6)
{
 const struct iphdr *VAR_7 = FUNC_1(VAR_5);
 const struct tcphdr *VAR_8 = FUNC_3(VAR_5);
 __u32 VAR_9 = FUNC_2(VAR_8->seq) - 1;
 __u32 VAR_10 = FUNC_0(VAR_6, VAR_7->saddr, VAR_7->daddr,
         VAR_8->source, VAR_8->dest, VAR_9,
         VAR_3 / (VAR_1 * 60),
         VAR_0);

 return VAR_10 < VAR_2 ? VAR_4[VAR_10] + 1 : 0;
}
