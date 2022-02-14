
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ip6; } ;
struct TYPE_8__ {TYPE_3__ u3; } ;
struct TYPE_5__ {int ip6; } ;
struct TYPE_6__ {TYPE_1__ u3; } ;
struct nf_conntrack_tuple {TYPE_4__ src; TYPE_2__ dst; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_1(struct nf_conntrack_tuple *VAR_0,
         const struct nf_conntrack_tuple *VAR_1)
{
 FUNC_0(VAR_0->src.u3.ip6, VAR_1->dst.u3.ip6, sizeof(VAR_0->src.u3.ip6));
 FUNC_0(VAR_0->dst.u3.ip6, VAR_1->src.u3.ip6, sizeof(VAR_0->dst.u3.ip6));

 return 1;
}
