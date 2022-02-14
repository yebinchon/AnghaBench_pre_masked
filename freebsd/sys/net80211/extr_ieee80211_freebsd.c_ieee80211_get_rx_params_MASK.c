
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct ieee80211_rx_stats {int dummy; } ;
struct ieee80211_rx_params {int params; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct m_tag* FUNC_0 (struct mbuf*,int ,int ,int *) ;
 int FUNC_1 (struct ieee80211_rx_stats*,int *,int) ;

int
FUNC_2(struct mbuf *VAR_2, struct ieee80211_rx_stats *VAR_3)
{
 struct m_tag *VAR_4;
 struct ieee80211_rx_params *VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_1,
     ((void*)0));
 if (VAR_4 == ((void*)0))
  return (-1);
 VAR_5 = (struct ieee80211_rx_params *)(VAR_4 + 1);
 FUNC_1(VAR_3, &VAR_5->params, sizeof(*VAR_3));
 return (0);
}
