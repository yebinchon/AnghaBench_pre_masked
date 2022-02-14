
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int u_int16_t ;
struct TYPE_13__ {int id; } ;
struct TYPE_14__ {TYPE_6__ icmp; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_9__ {TYPE_1__ icmp; } ;
struct nf_nat_range {int flags; TYPE_7__ min; TYPE_2__ max; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_11__ {TYPE_3__ icmp; } ;
struct TYPE_12__ {TYPE_4__ u; } ;
struct nf_conntrack_tuple {TYPE_5__ src; } ;
struct nf_conn {int dummy; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nf_conntrack_tuple*,struct nf_conn const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(struct nf_conntrack_tuple *VAR_1,
    const struct nf_nat_range *VAR_2,
    enum nf_nat_manip_type VAR_3,
    const struct nf_conn *VAR_4)
{
 static u_int16_t VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_2(VAR_2->max.icmp.id) - FUNC_2(VAR_2->min.icmp.id) + 1;

 if (!(VAR_2->flags & VAR_0))
  VAR_6 = 0xFFFF;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++, VAR_5++) {
  VAR_1->src.u.icmp.id = FUNC_0(FUNC_2(VAR_2->min.icmp.id) +
          (VAR_5 % VAR_6));
  if (!FUNC_1(VAR_1, VAR_4))
   return 1;
 }
 return 0;
}
