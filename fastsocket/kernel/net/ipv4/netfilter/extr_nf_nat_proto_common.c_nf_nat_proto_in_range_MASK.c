
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union nf_conntrack_man_proto {int all; } ;
struct TYPE_7__ {int all; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct TYPE_5__ {int all; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct nf_conntrack_tuple {TYPE_4__ dst; TYPE_2__ src; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

bool FUNC_1(const struct nf_conntrack_tuple *VAR_1,
      enum nf_nat_manip_type VAR_2,
      const union nf_conntrack_man_proto *VAR_3,
      const union nf_conntrack_man_proto *VAR_4)
{
 __be16 VAR_5;

 if (VAR_2 == VAR_0)
  VAR_5 = VAR_1->src.u.all;
 else
  VAR_5 = VAR_1->dst.u.all;

 return FUNC_0(VAR_5) >= FUNC_0(VAR_3->all) &&
        FUNC_0(VAR_5) <= FUNC_0(VAR_4->all);
}
