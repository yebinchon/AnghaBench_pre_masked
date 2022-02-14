
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_devcaps_req {int dummy; } ;


 int FUNC_0 (struct ieee80211_devcaps_req*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int,int ,struct ieee80211_devcaps_req*,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, struct ieee80211_devcaps_req *VAR_2)
{
 if (FUNC_2(VAR_1, VAR_0, VAR_2,
     FUNC_0(VAR_2)) < 0)
  FUNC_1(1, "unable to get device capabilities");
}
