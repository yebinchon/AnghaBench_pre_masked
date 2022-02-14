
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {scalar_t__ source; scalar_t__ dest; int check; } ;
struct sk_buff {int dummy; } ;
struct ovs_key_tcp {scalar_t__ tcp_src; scalar_t__ tcp_dst; } ;


 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,scalar_t__*,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct tcphdr* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0, const struct ovs_key_tcp *VAR_1)
{
 struct tcphdr *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, FUNC_2(VAR_0) +
     sizeof(struct tcphdr));
 if (FUNC_4(VAR_3))
  return VAR_3;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_1->tcp_src != VAR_2->source)
  FUNC_1(VAR_0, &VAR_2->source, VAR_1->tcp_src, &VAR_2->check);

 if (VAR_1->tcp_dst != VAR_2->dest)
  FUNC_1(VAR_0, &VAR_2->dest, VAR_1->tcp_dst, &VAR_2->check);

 return 0;
}
