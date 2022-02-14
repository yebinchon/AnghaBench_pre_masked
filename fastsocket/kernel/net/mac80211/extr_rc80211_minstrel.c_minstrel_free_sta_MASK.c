
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_sta_info {struct minstrel_sta_info* r; struct minstrel_sta_info* sample_table; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (struct minstrel_sta_info*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct ieee80211_sta *VAR_1, void *VAR_2)
{
 struct minstrel_sta_info *VAR_3 = VAR_2;

 FUNC_0(VAR_3->sample_table);
 FUNC_0(VAR_3->r);
 FUNC_0(VAR_3);
}
