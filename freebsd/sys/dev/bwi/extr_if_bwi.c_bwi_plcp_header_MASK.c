
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_rate_table {int dummy; } ;
typedef enum ieee80211_phytype { ____Placeholder_ieee80211_phytype } ieee80211_phytype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int,int ) ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (struct ieee80211_rate_table const*,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static __inline void
FUNC_4(const struct ieee80211_rate_table *VAR_2,
 void *VAR_3, int VAR_4, uint8_t VAR_5)
{
 enum ieee80211_phytype VAR_6;




 VAR_6 = FUNC_2(VAR_2, VAR_5);
 if (VAR_6 == VAR_1)
  FUNC_1(VAR_3, VAR_4, VAR_5);
 else if (VAR_6 == VAR_0)
  FUNC_0(VAR_3, VAR_4, VAR_5);
 else
  FUNC_3("unsupport modulation type %u\n", VAR_6);
}
