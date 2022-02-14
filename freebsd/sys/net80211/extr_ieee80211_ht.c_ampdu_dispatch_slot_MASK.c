
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211_rx_ampdu {int rxa_qframes; int rxa_qbytes; struct mbuf** rxa_m; } ;
struct ieee80211_node {int dummy; } ;


 int FUNC_0 (struct ieee80211_node*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211_rx_ampdu *VAR_0, struct ieee80211_node *VAR_1,
    int VAR_2)
{
 struct mbuf *VAR_3;

 if (VAR_0->rxa_m[VAR_2] == ((void*)0))
  return (0);

 VAR_3 = VAR_0->rxa_m[VAR_2];
 VAR_0->rxa_m[VAR_2] = ((void*)0);
 VAR_0->rxa_qbytes -= VAR_3->m_pkthdr.len;
 VAR_0->rxa_qframes--;

 FUNC_0(VAR_1, VAR_3);

 return (1);
}
