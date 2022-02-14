
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int ic_minpower; int ic_maxpower; int ic_maxregpower; } ;


 int FUNC_0 (struct ieee80211_channel const*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const struct ieee80211_channel *VAR_0)
{
 FUNC_0(VAR_0, 1);
 FUNC_1("min %4.1f dBm  max %3.1f dBm  reg %2d dBm",
     VAR_0->ic_minpower/2., VAR_0->ic_maxpower/2., VAR_0->ic_maxregpower);

 if (VAR_0->ic_maxpower > 2*VAR_0->ic_maxregpower)
  FUNC_1(" <");
}
