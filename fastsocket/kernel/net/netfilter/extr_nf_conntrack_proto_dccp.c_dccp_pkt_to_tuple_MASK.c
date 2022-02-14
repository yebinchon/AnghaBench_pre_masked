
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_10__ {int port; } ;
struct TYPE_11__ {TYPE_4__ dccp; } ;
struct TYPE_12__ {TYPE_5__ u; } ;
struct TYPE_7__ {int port; } ;
struct TYPE_8__ {TYPE_1__ dccp; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_6__ dst; TYPE_3__ src; } ;
struct dccp_hdr {int dccph_dport; int dccph_sport; } ;
typedef int _hdr ;


 struct dccp_hdr* FUNC_0 (struct sk_buff const*,unsigned int,int,struct dccp_hdr*) ;

__attribute__((used)) static bool FUNC_1(const struct sk_buff *VAR_0, unsigned int VAR_1,
         struct nf_conntrack_tuple *VAR_2)
{
 struct dccp_hdr VAR_3, *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, sizeof(VAR_3), &VAR_3);
 if (VAR_4 == ((void*)0))
  return 0;

 VAR_2->src.u.dccp.port = VAR_4->dccph_sport;
 VAR_2->dst.u.dccp.port = VAR_4->dccph_dport;
 return 1;
}
