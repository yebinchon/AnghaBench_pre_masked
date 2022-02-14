
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef unsigned int u_int16_t ;
struct TYPE_20__ {int key; } ;
struct TYPE_11__ {TYPE_9__ gre; } ;
struct TYPE_18__ {int key; } ;
struct TYPE_19__ {TYPE_7__ gre; } ;
struct nf_nat_range {int flags; TYPE_10__ max; TYPE_8__ min; } ;
struct TYPE_15__ {int key; } ;
struct TYPE_16__ {TYPE_4__ gre; } ;
struct TYPE_17__ {TYPE_5__ u; } ;
struct TYPE_12__ {int key; } ;
struct TYPE_13__ {TYPE_1__ gre; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_6__ dst; TYPE_3__ src; } ;
struct nf_conn {int master; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct nf_conntrack_tuple*,struct nf_conn const*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static bool
FUNC_4(struct nf_conntrack_tuple *VAR_2,
   const struct nf_nat_range *VAR_3,
   enum nf_nat_manip_type VAR_4,
   const struct nf_conn *VAR_5)
{
 static u_int16_t VAR_6;
 __be16 *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;



 if (!VAR_5->master)
  return 0;

 if (VAR_4 == VAR_0)
  VAR_7 = &VAR_2->src.u.gre.key;
 else
  VAR_7 = &VAR_2->dst.u.gre.key;

 if (!(VAR_3->flags & VAR_1)) {
  FUNC_3("%p: NATing GRE PPTP\n", VAR_5);
  VAR_8 = 1;
  VAR_10 = 0xffff;
 } else {
  VAR_8 = FUNC_2(VAR_3->min.gre.key);
  VAR_10 = FUNC_2(VAR_3->max.gre.key) - VAR_8 + 1;
 }

 FUNC_3("min = %u, range_size = %u\n", VAR_8, VAR_10);

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++, VAR_6++) {
  *VAR_7 = FUNC_0(VAR_8 + VAR_6 % VAR_10);
  if (!FUNC_1(VAR_2, VAR_5))
   return 1;
 }

 FUNC_3("%p: no NAT mapping\n", VAR_5);
 return 0;
}
