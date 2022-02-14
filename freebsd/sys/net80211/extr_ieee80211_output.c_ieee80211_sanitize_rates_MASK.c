
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_bpf_params {scalar_t__ ibp_rate0; scalar_t__ ibp_rate1; scalar_t__ ibp_rate2; scalar_t__ ibp_rate3; } ;


 int FUNC_0 (struct ieee80211_node*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211_node *VAR_0, struct mbuf *VAR_1,
    const struct ieee80211_bpf_params *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return (0);


 if (VAR_2->ibp_rate0 != 0) {
  VAR_3 = FUNC_0(VAR_0, VAR_2->ibp_rate0);
  if (VAR_3 != 0)
   return (VAR_3);
 } else {


  (void) VAR_1;
 }

 if (VAR_2->ibp_rate1 != 0 &&
     (VAR_3 = FUNC_0(VAR_0, VAR_2->ibp_rate1)) != 0)
  return (VAR_3);

 if (VAR_2->ibp_rate2 != 0 &&
     (VAR_3 = FUNC_0(VAR_0, VAR_2->ibp_rate2)) != 0)
  return (VAR_3);

 if (VAR_2->ibp_rate3 != 0 &&
     (VAR_3 = FUNC_0(VAR_0, VAR_2->ibp_rate3)) != 0)
  return (VAR_3);

 return (0);
}
