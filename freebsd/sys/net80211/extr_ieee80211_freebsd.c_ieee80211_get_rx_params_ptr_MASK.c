
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct ieee80211_rx_stats {int dummy; } ;
struct ieee80211_rx_params {struct ieee80211_rx_stats const params; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct m_tag* FUNC_0 (struct mbuf*,int ,int ,int *) ;

const struct ieee80211_rx_stats *
FUNC_1(struct mbuf *VAR_2)
{
 struct m_tag *VAR_3;
 struct ieee80211_rx_params *VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_0, VAR_1,
     ((void*)0));
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 VAR_4 = (struct ieee80211_rx_params *)(VAR_3 + 1);
 return (&VAR_4->params);
}
