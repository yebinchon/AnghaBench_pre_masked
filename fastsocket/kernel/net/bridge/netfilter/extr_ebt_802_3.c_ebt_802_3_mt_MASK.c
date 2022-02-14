
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_match_param {struct ebt_802_3_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ebt_802_3_info {int bitmask; scalar_t__ sap; scalar_t__ type; } ;
struct TYPE_5__ {int ctrl; scalar_t__ type; scalar_t__ ssap; scalar_t__ dsap; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_2__ ui; TYPE_1__ ni; } ;
struct ebt_802_3_hdr {TYPE_3__ llc; } ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_3 ;
 struct ebt_802_3_hdr* FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static bool
FUNC_2(const struct sk_buff *VAR_4, const struct xt_match_param *VAR_5)
{
 const struct ebt_802_3_info *VAR_6 = VAR_5->matchinfo;
 const struct ebt_802_3_hdr *VAR_7 = FUNC_1(VAR_4);
 __be16 VAR_8 = VAR_7->llc.ui.ctrl & VAR_3 ? VAR_7->llc.ui.type : VAR_7->llc.ni.type;

 if (VAR_6->bitmask & VAR_1) {
  if (FUNC_0(VAR_6->sap != VAR_7->llc.ui.ssap, VAR_1))
   return 0;
  if (FUNC_0(VAR_6->sap != VAR_7->llc.ui.dsap, VAR_1))
   return 0;
 }

 if (VAR_6->bitmask & VAR_2) {
  if (!(VAR_7->llc.ui.dsap == VAR_0 && VAR_7->llc.ui.ssap == VAR_0))
   return 0;
  if (FUNC_0(VAR_6->type != VAR_8, VAR_2))
   return 0;
 }

 return 1;
}
