
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_table {int st_newscan; int st_scangen; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_scan_state {scalar_t__ ss_mindwell; scalar_t__ ss_maxdwell; struct sta_table* ss_priv; } ;


 int FUNC_0 (struct ieee80211_scan_state*,struct ieee80211vap*,int ) ;
 void* FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct ieee80211_scan_state *VAR_1, struct ieee80211vap *VAR_2)
{
 struct sta_table *VAR_3 = VAR_1->ss_priv;

 FUNC_0(VAR_1, VAR_2, VAR_0);

 if (VAR_1->ss_mindwell == 0)
  VAR_1->ss_mindwell = FUNC_1(200);
 if (VAR_1->ss_maxdwell == 0)
  VAR_1->ss_maxdwell = FUNC_1(200);

 VAR_3->st_scangen++;
 VAR_3->st_newscan = 1;

 return 0;
}
