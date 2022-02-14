
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rx_ampdu {int rxa_flags; void* rxa_start; int rxa_wnd; } ;
struct ieee80211_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (struct ieee80211_rx_ampdu*) ;
 int FUNC_2 (struct ieee80211_rx_ampdu*,int ,int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_node *VAR_5, struct ieee80211_rx_ampdu *VAR_6,
 int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10 = FUNC_0(VAR_7, VAR_3);

 if (VAR_6->rxa_flags & VAR_1) {




  FUNC_1(VAR_6);
 }
 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->rxa_wnd = (VAR_10 == 0) ?
     VAR_0 : FUNC_3(VAR_10, VAR_0);
 VAR_6->rxa_start = FUNC_0(VAR_9, VAR_4);
 VAR_6->rxa_flags |= VAR_1 | VAR_2;

 return 0;
}
