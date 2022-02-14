
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int seq; int dest; int source; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int daddr; int saddr; } ;
typedef int __u32 ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ const* VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int,int) ;
 int FUNC_4 (struct sock*) ;
 struct tcphdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*) ;

__u32 FUNC_7(struct sock *VAR_4, struct sk_buff *VAR_5, __u16 *VAR_6)
{
 const struct iphdr *VAR_7 = FUNC_1(VAR_5);
 const struct tcphdr *VAR_8 = FUNC_5(VAR_5);
 int VAR_9;
 const __u16 VAR_10 = *VAR_6;

 FUNC_6(VAR_4);


 for (VAR_9 = 0; VAR_10 > VAR_3[VAR_9 + 1]; VAR_9++)
  ;
 *VAR_6 = VAR_3[VAR_9] + 1;

 FUNC_0(FUNC_4(VAR_4), VAR_1);

 return FUNC_3(VAR_7->saddr, VAR_7->daddr,
         VAR_8->source, VAR_8->dest, FUNC_2(VAR_8->seq),
         VAR_2 / (VAR_0 * 60), VAR_9);
}
