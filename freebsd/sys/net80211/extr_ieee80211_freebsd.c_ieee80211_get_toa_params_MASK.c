
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct ieee80211_toa_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct m_tag* FUNC_0 (struct mbuf*,int ,int ,int *) ;
 int FUNC_1 (struct ieee80211_toa_params*,struct ieee80211_toa_params*,int) ;

int
FUNC_2(struct mbuf *VAR_2, struct ieee80211_toa_params *VAR_3)
{
 struct m_tag *VAR_4;
 struct ieee80211_toa_params *VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_1,
     ((void*)0));
 if (VAR_4 == ((void*)0))
  return (0);
 VAR_5 = (struct ieee80211_toa_params *)(VAR_4 + 1);
 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_3, VAR_5, sizeof(*VAR_3));
 return (1);
}
