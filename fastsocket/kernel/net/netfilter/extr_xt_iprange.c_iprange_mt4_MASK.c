
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xt_match_param {struct xt_iprange_mtinfo* matchinfo; } ;
struct TYPE_8__ {int ip; } ;
struct TYPE_7__ {int ip; } ;
struct TYPE_6__ {int ip; } ;
struct TYPE_5__ {int ip; } ;
struct xt_iprange_mtinfo {int flags; TYPE_4__ dst_max; TYPE_3__ dst_min; TYPE_2__ src_max; TYPE_1__ src_min; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int daddr; int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iphdr* FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,char*,int *,int *) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_4, const struct xt_match_param *VAR_5)
{
 const struct xt_iprange_mtinfo *VAR_6 = VAR_5->matchinfo;
 const struct iphdr *VAR_7 = FUNC_0(VAR_4);
 bool VAR_8;

 if (VAR_6->flags & VAR_2) {
  VAR_8 = FUNC_1(VAR_7->saddr) < FUNC_1(VAR_6->src_min.ip);
  VAR_8 |= FUNC_1(VAR_7->saddr) > FUNC_1(VAR_6->src_max.ip);
  VAR_8 ^= !!(VAR_6->flags & VAR_3);
  if (VAR_8) {
   FUNC_2("src IP %pI4 NOT in range %s%pI4-%pI4\n",
            &VAR_7->saddr,
            (VAR_6->flags & VAR_3) ? "(INV) " : "",
            &VAR_6->src_max.ip,
            &VAR_6->src_max.ip);
   return 0;
  }
 }
 if (VAR_6->flags & VAR_0) {
  VAR_8 = FUNC_1(VAR_7->daddr) < FUNC_1(VAR_6->dst_min.ip);
  VAR_8 |= FUNC_1(VAR_7->daddr) > FUNC_1(VAR_6->dst_max.ip);
  VAR_8 ^= !!(VAR_6->flags & VAR_1);
  if (VAR_8) {
   FUNC_2("dst IP %pI4 NOT in range %s%pI4-%pI4\n",
            &VAR_7->daddr,
            (VAR_6->flags & VAR_1) ? "(INV) " : "",
            &VAR_6->dst_min.ip,
            &VAR_6->dst_max.ip);
   return 0;
  }
 }
 return 1;
}
