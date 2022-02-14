
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {int ic_chan_avail; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int const) ;

__attribute__((used)) static uint8_t *
FUNC_1(uint8_t *VAR_1, struct ieee80211com *VAR_2)
{
 static const int VAR_3 = 26;

 VAR_1[0] = VAR_0;
 VAR_1[1] = VAR_3;

 FUNC_0(VAR_1+2, VAR_2->ic_chan_avail, VAR_3);
 return VAR_1 + 2 + VAR_3;
}
