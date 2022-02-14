
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmediareq {int ifm_current; int ifm_name; } ;
typedef int ifmr ;
typedef enum ieee80211_opmode { ____Placeholder_ieee80211_opmode } ieee80211_opmode ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct ifmediareq*,int ,int) ;
 int VAR_13 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static enum ieee80211_opmode
FUNC_3(int VAR_14)
{
 struct ifmediareq VAR_15;

 (void) FUNC_1(&VAR_15, 0, sizeof(VAR_15));
 (void) FUNC_2(VAR_15.ifm_name, VAR_13, sizeof(VAR_15.ifm_name));

 if (FUNC_0(VAR_14, VAR_12, (caddr_t)&VAR_15) >= 0) {
  if (VAR_15.ifm_current & VAR_7) {
   if (VAR_15.ifm_current & VAR_6)
    return VAR_0;
   else
    return VAR_2;
  }
  if (VAR_15.ifm_current & VAR_8)
   return VAR_1;
  if (VAR_15.ifm_current & VAR_9)
   return VAR_2;
  if (VAR_15.ifm_current & VAR_11)
   return VAR_4;
  if (VAR_15.ifm_current & VAR_10)
   return VAR_3;
 }
 return VAR_5;
}
