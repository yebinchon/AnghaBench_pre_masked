
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_local {scalar_t__ open_count; int use_chanctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_local*,int) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 () ;

int FUNC_3(struct ieee80211_local *VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;

 FUNC_2();

 if (!VAR_2->use_chanctx)
  VAR_3 |= FUNC_1(VAR_2);
 else
  VAR_3 &= ~(VAR_0 |
        VAR_1);

 if (VAR_3 && VAR_2->open_count) {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
 }

 return VAR_4;
}
