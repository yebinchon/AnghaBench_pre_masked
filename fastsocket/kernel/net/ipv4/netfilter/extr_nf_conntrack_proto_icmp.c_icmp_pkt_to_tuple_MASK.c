
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_14__ {int code; int type; } ;
struct TYPE_16__ {TYPE_6__ icmp; } ;
struct TYPE_15__ {TYPE_8__ u; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_10__ {TYPE_1__ icmp; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_7__ dst; TYPE_3__ src; } ;
struct TYPE_12__ {int id; } ;
struct TYPE_13__ {TYPE_4__ echo; } ;
struct icmphdr {int code; TYPE_5__ un; int type; } ;
typedef int _hdr ;


 struct icmphdr* FUNC_0 (struct sk_buff const*,unsigned int,int,struct icmphdr*) ;

__attribute__((used)) static bool FUNC_1(const struct sk_buff *VAR_0, unsigned int VAR_1,
         struct nf_conntrack_tuple *VAR_2)
{
 const struct icmphdr *VAR_3;
 struct icmphdr VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, sizeof(VAR_4), &VAR_4);
 if (VAR_3 == ((void*)0))
  return 0;

 VAR_2->dst.u.icmp.type = VAR_3->type;
 VAR_2->src.u.icmp.id = VAR_3->un.echo.id;
 VAR_2->dst.u.icmp.code = VAR_3->code;

 return 1;
}
