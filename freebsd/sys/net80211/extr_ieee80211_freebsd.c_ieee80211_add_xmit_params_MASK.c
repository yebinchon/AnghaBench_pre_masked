
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct ieee80211_tx_params {int params; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct m_tag* FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (struct mbuf*,struct m_tag*) ;
 int FUNC_2 (int *,struct ieee80211_bpf_params const*,int) ;

int
FUNC_3(struct mbuf *VAR_3,
    const struct ieee80211_bpf_params *VAR_4)
{
 struct m_tag *VAR_5;
 struct ieee80211_tx_params *VAR_6;

 VAR_5 = FUNC_0(VAR_0, VAR_2,
     sizeof(struct ieee80211_tx_params), VAR_1);
 if (VAR_5 == ((void*)0))
  return (0);

 VAR_6 = (struct ieee80211_tx_params *)(VAR_5+1);
 FUNC_2(&VAR_6->params, VAR_4, sizeof(struct ieee80211_bpf_params));
 FUNC_1(VAR_3, VAR_5);
 return (1);
}
