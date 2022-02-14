
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rx_data {int sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_rx_data *VAR_2)
{
 if (FUNC_1(!VAR_2->sta || !FUNC_0(VAR_2->sta, VAR_1)))
  return -VAR_0;

 return 0;
}
