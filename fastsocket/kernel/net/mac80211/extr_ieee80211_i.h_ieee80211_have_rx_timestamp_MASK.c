
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rx_status {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline bool
FUNC_1(struct ieee80211_rx_status *VAR_2)
{
 FUNC_0(VAR_2->flag & VAR_1 &&
       VAR_2->flag & VAR_0);
 return VAR_2->flag & (VAR_1 | VAR_0);
}
