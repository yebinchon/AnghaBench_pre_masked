
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ieee80211_node {int ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_2(struct ieee80211_node *VAR_1, struct mbuf *VAR_2,
 const struct ieee80211_bpf_params *VAR_3)
{

 FUNC_0(VAR_1->ni_ic, "missing ic_raw_xmit callback, drop frame\n");
 FUNC_1(VAR_2);
 return VAR_0;
}
