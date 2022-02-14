
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int id; } ;
union nf_conntrack_man_proto {TYPE_4__ icmp; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ icmp; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_3__ src; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(const struct nf_conntrack_tuple *VAR_0,
       enum nf_nat_manip_type VAR_1,
       const union nf_conntrack_man_proto *VAR_2,
       const union nf_conntrack_man_proto *VAR_3)
{
 return FUNC_0(VAR_0->src.u.icmp.id) >= FUNC_0(VAR_2->icmp.id) &&
        FUNC_0(VAR_0->src.u.icmp.id) <= FUNC_0(VAR_3->icmp.id);
}
