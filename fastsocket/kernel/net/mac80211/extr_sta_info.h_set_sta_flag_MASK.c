
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int _flags; } ;
typedef enum ieee80211_sta_info_flags { ____Placeholder_ieee80211_sta_info_flags } ieee80211_sta_info_flags ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static inline void FUNC_2(struct sta_info *VAR_3,
    enum ieee80211_sta_info_flags VAR_4)
{
 FUNC_0(VAR_4 == VAR_1 ||
  VAR_4 == VAR_0 ||
  VAR_4 == VAR_2);
 FUNC_1(VAR_4, &VAR_3->_flags);
}
