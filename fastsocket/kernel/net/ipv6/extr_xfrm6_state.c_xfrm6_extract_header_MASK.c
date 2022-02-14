
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ipv6hdr {int flow_lbl; int hop_limit; } ;
struct TYPE_2__ {int ihl; int flow_lbl; scalar_t__ optlen; int ttl; int tos; int frag_off; scalar_t__ id; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipv6hdr*) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,int) ;

int FUNC_5(struct sk_buff *VAR_1)
{
 struct ipv6hdr *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_1)->ihl = sizeof(*VAR_2);
 FUNC_0(VAR_1)->id = 0;
 FUNC_0(VAR_1)->frag_off = FUNC_1(VAR_0);
 FUNC_0(VAR_1)->tos = FUNC_2(VAR_2);
 FUNC_0(VAR_1)->ttl = VAR_2->hop_limit;
 FUNC_0(VAR_1)->optlen = 0;
 FUNC_4(FUNC_0(VAR_1)->flow_lbl, VAR_2->flow_lbl,
        sizeof(FUNC_0(VAR_1)->flow_lbl));

 return 0;
}
