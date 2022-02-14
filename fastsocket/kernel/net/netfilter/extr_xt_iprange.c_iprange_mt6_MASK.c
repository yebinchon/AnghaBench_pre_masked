
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xt_match_param {struct xt_iprange_mtinfo* matchinfo; } ;
struct TYPE_8__ {int in6; } ;
struct TYPE_7__ {int in6; } ;
struct TYPE_6__ {int in6; } ;
struct TYPE_5__ {int in6; } ;
struct xt_iprange_mtinfo {int flags; TYPE_4__ dst_max; TYPE_3__ dst_min; TYPE_2__ src_max; TYPE_1__ src_min; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int daddr; int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static bool
FUNC_2(const struct sk_buff *VAR_4, const struct xt_match_param *VAR_5)
{
 const struct xt_iprange_mtinfo *VAR_6 = VAR_5->matchinfo;
 const struct ipv6hdr *VAR_7 = FUNC_1(VAR_4);
 bool VAR_8;

 if (VAR_6->flags & VAR_2) {
  VAR_8 = FUNC_0(&VAR_7->saddr, &VAR_6->src_min.in6) < 0;
  VAR_8 |= FUNC_0(&VAR_7->saddr, &VAR_6->src_max.in6) > 0;
  VAR_8 ^= !!(VAR_6->flags & VAR_3);
  if (VAR_8)
   return 0;
 }
 if (VAR_6->flags & VAR_0) {
  VAR_8 = FUNC_0(&VAR_7->daddr, &VAR_6->dst_min.in6) < 0;
  VAR_8 |= FUNC_0(&VAR_7->daddr, &VAR_6->dst_max.in6) > 0;
  VAR_8 ^= !!(VAR_6->flags & VAR_1);
  if (VAR_8)
   return 0;
 }
 return 1;
}
