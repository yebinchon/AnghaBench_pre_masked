
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


typedef unsigned int u_int16_t ;
struct TYPE_10__ {int all; } ;
struct TYPE_9__ {int all; } ;
struct nf_nat_range {int flags; TYPE_2__ max; TYPE_1__ min; } ;
struct TYPE_15__ {int all; } ;
struct TYPE_11__ {int ip; } ;
struct TYPE_16__ {TYPE_7__ u; TYPE_3__ u3; } ;
struct TYPE_13__ {int all; } ;
struct TYPE_12__ {int ip; } ;
struct TYPE_14__ {TYPE_5__ u; TYPE_4__ u3; } ;
struct nf_conntrack_tuple {TYPE_8__ src; TYPE_6__ dst; } ;
struct nf_conn {int dummy; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct nf_conntrack_tuple*,struct nf_conn const*) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ,int ,int ) ;

bool FUNC_4(struct nf_conntrack_tuple *VAR_4,
          const struct nf_nat_range *VAR_5,
          enum nf_nat_manip_type VAR_6,
          const struct nf_conn *VAR_7,
          u_int16_t *VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;
 __be16 *VAR_12;
 u_int16_t VAR_13;

 if (VAR_6 == VAR_1)
  VAR_12 = &VAR_4->src.u.all;
 else
  VAR_12 = &VAR_4->dst.u.all;


 if (!(VAR_5->flags & VAR_3)) {

  if (VAR_6 == VAR_0)
   return 0;

  if (FUNC_2(*VAR_12) < 1024) {

   if (FUNC_2(*VAR_12) < 512) {
    VAR_10 = 1;
    VAR_9 = 511 - VAR_10 + 1;
   } else {
    VAR_10 = 600;
    VAR_9 = 1023 - VAR_10 + 1;
   }
  } else {
   VAR_10 = 1024;
   VAR_9 = 65535 - 1024 + 1;
  }
 } else {
  VAR_10 = FUNC_2(VAR_5->min.all);
  VAR_9 = FUNC_2(VAR_5->max.all) - VAR_10 + 1;
 }

 if (VAR_5->flags & VAR_2)
  VAR_13 = FUNC_3(VAR_4->src.u3.ip, VAR_4->dst.u3.ip,
       VAR_6 == VAR_1
       ? VAR_4->dst.u.all
       : VAR_4->src.u.all);
 else
  VAR_13 = *VAR_8;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++, VAR_13++) {
  *VAR_12 = FUNC_0(VAR_10 + VAR_13 % VAR_9);
  if (FUNC_1(VAR_4, VAR_7))
   continue;
  if (!(VAR_5->flags & VAR_2))
   *VAR_8 = VAR_13;
  return 1;
 }
 return 0;
}
