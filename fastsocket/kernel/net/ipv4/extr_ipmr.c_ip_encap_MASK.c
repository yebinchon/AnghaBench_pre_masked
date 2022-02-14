
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int network_header; int transport_header; } ;
struct iphdr {int version; int ihl; int tot_len; int protocol; void* saddr; void* daddr; scalar_t__ frag_off; int ttl; int tos; } ;
typedef void* __be32 ;
struct TYPE_2__ {int opt; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct iphdr*,int ,int *) ;
 int FUNC_4 (struct iphdr*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct sk_buff *VAR_1, __be32 VAR_2, __be32 VAR_3)
{
 struct iphdr *VAR_4;
 struct iphdr *VAR_5 = FUNC_2(VAR_1);

 FUNC_8(VAR_1, sizeof(struct iphdr));
 VAR_1->transport_header = VAR_1->network_header;
 FUNC_9(VAR_1);
 VAR_4 = FUNC_2(VAR_1);

 VAR_4->version = 4;
 VAR_4->tos = VAR_5->tos;
 VAR_4->ttl = VAR_5->ttl;
 VAR_4->frag_off = 0;
 VAR_4->daddr = VAR_3;
 VAR_4->saddr = VAR_2;
 VAR_4->protocol = VAR_0;
 VAR_4->ihl = 5;
 VAR_4->tot_len = FUNC_1(VAR_1->len);
 FUNC_3(VAR_4, FUNC_7(VAR_1), ((void*)0));
 FUNC_4(VAR_4);

 FUNC_5(&(FUNC_0(VAR_1)->opt), 0, sizeof(FUNC_0(VAR_1)->opt));
 FUNC_6(VAR_1);
}
