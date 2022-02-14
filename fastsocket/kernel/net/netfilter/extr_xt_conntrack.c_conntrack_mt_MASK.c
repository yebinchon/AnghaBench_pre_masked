
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct xt_match_param {int family; struct xt_conntrack_mtinfo2* matchinfo; } ;
struct xt_conntrack_mtinfo2 {int match_flags; int invert_flags; unsigned long expires_min; unsigned long expires_max; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {unsigned long expires; } ;
struct nf_conn {unsigned int status; TYPE_1__ timeout; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 scalar_t__ FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct nf_conn const*,struct xt_conntrack_mtinfo2 const*,int ) ;
 int FUNC_3 (struct nf_conn const*,struct xt_conntrack_mtinfo2 const*,int ) ;
 int FUNC_4 (struct nf_conn const*,struct xt_conntrack_mtinfo2 const*,int ) ;
 int FUNC_5 (struct nf_conn const*,struct xt_conntrack_mtinfo2 const*,int ) ;
 int FUNC_6 (struct xt_conntrack_mtinfo2 const*,struct nf_conn const*) ;
 unsigned long VAR_16 ;
 struct nf_conn const VAR_17 ;
 struct nf_conn* FUNC_7 (struct sk_buff const*,int*) ;
 scalar_t__ FUNC_8 (int ,unsigned int*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_10(const struct sk_buff *VAR_18, const struct xt_match_param *VAR_19,
             u16 VAR_20, u16 VAR_21)
{
 const struct xt_conntrack_mtinfo2 *VAR_22 = VAR_19->matchinfo;
 enum ip_conntrack_info VAR_23;
 const struct nf_conn *VAR_24;
 unsigned int VAR_25;

 VAR_24 = FUNC_7(VAR_18, &VAR_23);

 if (VAR_24 == &VAR_17)
  VAR_25 = VAR_14;
 else if (VAR_24 != ((void*)0))
  VAR_25 = FUNC_1(VAR_23);
 else
  VAR_25 = VAR_12;

 if (VAR_22->match_flags & VAR_10) {
  if (VAR_24 != ((void*)0)) {
   if (FUNC_8(VAR_2, &VAR_24->status))
    VAR_25 |= VAR_13;
   if (FUNC_8(VAR_1, &VAR_24->status))
    VAR_25 |= VAR_11;
  }
  if (!!(VAR_20 & VAR_25) ^
      !(VAR_22->invert_flags & VAR_10))
   return 0;
 }

 if (VAR_24 == ((void*)0))
  return VAR_22->match_flags & VAR_10;
 if ((VAR_22->match_flags & VAR_4) &&
     (FUNC_0(VAR_23) == VAR_3) ^
     !!(VAR_22->invert_flags & VAR_4))
  return 0;

 if (VAR_22->match_flags & VAR_7)
  if (FUNC_3(VAR_24, VAR_22, VAR_19->family) ^
      !(VAR_22->invert_flags & VAR_7))
   return 0;

 if (VAR_22->match_flags & VAR_6)
  if (FUNC_2(VAR_24, VAR_22, VAR_19->family) ^
      !(VAR_22->invert_flags & VAR_6))
   return 0;

 if (VAR_22->match_flags & VAR_9)
  if (FUNC_5(VAR_24, VAR_22, VAR_19->family) ^
      !(VAR_22->invert_flags & VAR_9))
   return 0;

 if (VAR_22->match_flags & VAR_8)
  if (FUNC_4(VAR_24, VAR_22, VAR_19->family) ^
      !(VAR_22->invert_flags & VAR_8))
   return 0;

 if (!FUNC_6(VAR_22, VAR_24))
  return 0;

 if ((VAR_22->match_flags & VAR_15) &&
     (!!(VAR_21 & VAR_24->status) ^
     !(VAR_22->invert_flags & VAR_15)))
  return 0;

 if (VAR_22->match_flags & VAR_5) {
  unsigned long VAR_26 = 0;

  if (FUNC_9(&VAR_24->timeout))
   VAR_26 = (VAR_24->timeout.expires - VAR_16) / VAR_0;
  if ((VAR_26 >= VAR_22->expires_min &&
      VAR_26 <= VAR_22->expires_max) ^
      !(VAR_22->invert_flags & VAR_5))
   return 0;
 }
 return 1;
}
