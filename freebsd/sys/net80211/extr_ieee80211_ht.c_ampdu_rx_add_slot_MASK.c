
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct TYPE_4__ {int is_rx_dup; int is_ampdu_rx_reorder; } ;
struct ieee80211vap {TYPE_2__ iv_stats; } ;
struct ieee80211_rx_ampdu {scalar_t__ rxa_wnd; int rxa_start; int rxa_qbytes; int rxa_qframes; struct mbuf** rxa_m; } ;
struct ieee80211_node {int ni_macaddr; struct ieee80211vap* ni_vap; } ;
typedef int ieee80211_seq ;


 int FUNC_0 (struct ieee80211vap*,int,int ,char*,char*,int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_node*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct mbuf*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_rx_ampdu *VAR_3, int VAR_4, int VAR_5,
    ieee80211_seq VAR_6,
    struct ieee80211_node *VAR_7,
    struct mbuf *VAR_8)
{
 struct ieee80211vap *VAR_9 = VAR_7->ni_vap;

 if (VAR_3->rxa_m[VAR_4] == ((void*)0)) {
  VAR_3->rxa_m[VAR_4] = VAR_8;
  VAR_3->rxa_qframes++;
  VAR_3->rxa_qbytes += VAR_8->m_pkthdr.len;
  VAR_9->iv_stats.is_ampdu_rx_reorder++;
  return (0);
 } else {
  FUNC_0(VAR_9,
      VAR_1 | VAR_0,
      VAR_7->ni_macaddr, "a-mpdu duplicate",
      "seqno %u tid %u BA win <%u:%u>",
      VAR_6, VAR_5, VAR_3->rxa_start,
      FUNC_2(VAR_3->rxa_start, VAR_3->rxa_wnd-1));
  VAR_9->iv_stats.is_rx_dup++;
  FUNC_1(VAR_7, VAR_2);
  FUNC_3(VAR_8);
  return (-1);
 }
}
