
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union nf_inet_addr {int in6; int ip; } ;
typedef scalar_t__ u_int8_t ;
struct xt_recent_mtinfo {int invert; scalar_t__ side; int check_set; unsigned long seconds; unsigned int hit_count; int name; } ;
struct xt_match_param {int* hotdrop; TYPE_1__* match; int * out; struct xt_recent_mtinfo* matchinfo; } ;
struct sk_buff {int * sk; } ;
struct recent_table {int dummy; } ;
struct recent_entry {unsigned int nstamps; scalar_t__ ttl; int * stamps; } ;
struct ipv6hdr {scalar_t__ hop_limit; int saddr; int daddr; } ;
struct iphdr {scalar_t__ ttl; int saddr; int daddr; } ;
struct TYPE_2__ {int family; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct iphdr* FUNC_0 (struct sk_buff const*) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff const*) ;
 unsigned long VAR_8 ;
 int FUNC_2 (int *,int *,int) ;
 struct recent_entry* FUNC_3 (struct recent_table*,union nf_inet_addr*,int ,scalar_t__) ;
 struct recent_entry* FUNC_4 (struct recent_table*,union nf_inet_addr*,int ,scalar_t__) ;
 int FUNC_5 (struct recent_table*,struct recent_entry*) ;
 int FUNC_6 (struct recent_table*,struct recent_entry*) ;
 int VAR_9 ;
 struct recent_table* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (unsigned long,int ) ;

__attribute__((used)) static bool
FUNC_11(const struct sk_buff *VAR_10, const struct xt_match_param *VAR_11)
{
 const struct xt_recent_mtinfo *VAR_12 = VAR_11->matchinfo;
 struct recent_table *VAR_13;
 struct recent_entry *VAR_14;
 union nf_inet_addr VAR_15 = {};
 u_int8_t VAR_16;
 bool VAR_17 = VAR_12->invert;

 if (VAR_11->match->family == VAR_1) {
  const struct iphdr *VAR_18 = FUNC_0(VAR_10);

  if (VAR_12->side == VAR_3)
   VAR_15.ip = VAR_18->daddr;
  else
   VAR_15.ip = VAR_18->saddr;

  VAR_16 = VAR_18->ttl;
 } else {
  const struct ipv6hdr *VAR_19 = FUNC_1(VAR_10);

  if (VAR_12->side == VAR_3)
   FUNC_2(&VAR_15.in6, &VAR_19->daddr, sizeof(VAR_15.in6));
  else
   FUNC_2(&VAR_15.in6, &VAR_19->saddr, sizeof(VAR_15.in6));

  VAR_16 = VAR_19->hop_limit;
 }


 if (VAR_11->out != ((void*)0) && VAR_10->sk == ((void*)0))
  VAR_16++;

 FUNC_8(&VAR_9);
 VAR_13 = FUNC_7(VAR_12->name);
 VAR_14 = FUNC_4(VAR_13, &VAR_15, VAR_11->match->family,
    (VAR_12->check_set & VAR_6) ? VAR_16 : 0);
 if (VAR_14 == ((void*)0)) {
  if (!(VAR_12->check_set & VAR_5))
   goto out;
  VAR_14 = FUNC_3(VAR_13, &VAR_15, VAR_11->match->family, VAR_16);
  if (VAR_14 == ((void*)0))
   *VAR_11->hotdrop = 1;
  VAR_17 = !VAR_17;
  goto out;
 }

 if (VAR_12->check_set & VAR_5)
  VAR_17 = !VAR_17;
 else if (VAR_12->check_set & VAR_4) {
  FUNC_5(VAR_13, VAR_14);
  VAR_17 = !VAR_17;
 } else if (VAR_12->check_set & (VAR_2 | VAR_7)) {
  unsigned long VAR_20 = VAR_8 - VAR_12->seconds * VAR_0;
  unsigned int VAR_21, VAR_22 = 0;

  for (VAR_21 = 0; VAR_21 < VAR_14->nstamps; VAR_21++) {
   if (VAR_12->seconds && FUNC_10(VAR_20, VAR_14->stamps[VAR_21]))
    continue;
   if (!VAR_12->hit_count || ++VAR_22 >= VAR_12->hit_count) {
    VAR_17 = !VAR_17;
    break;
   }
  }
 }

 if (VAR_12->check_set & VAR_5 ||
     (VAR_12->check_set & VAR_7 && VAR_17)) {
  FUNC_6(VAR_13, VAR_14);
  VAR_14->ttl = VAR_16;
 }
out:
 FUNC_9(&VAR_9);
 return VAR_17;
}
