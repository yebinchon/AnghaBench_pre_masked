
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifmediareq {int ifm_current; int ifm_name; } ;
struct bsd_driver_data {TYPE_1__* global; int ifname; } ;
typedef int ifmr ;
typedef enum ieee80211_opmode { ____Placeholder_ieee80211_opmode } ieee80211_opmode ;
typedef int caddr_t ;
struct TYPE_2__ {int sock; } ;


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
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ifmediareq*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static enum ieee80211_opmode
FUNC_3(struct bsd_driver_data *VAR_13)
{
 struct ifmediareq VAR_14;

 (void) FUNC_1(&VAR_14, 0, sizeof(VAR_14));
 (void) FUNC_2(VAR_14.ifm_name, VAR_13->ifname, sizeof(VAR_14.ifm_name));

 if (FUNC_0(VAR_13->global->sock, VAR_12, (caddr_t)&VAR_14) >= 0) {
  if (VAR_14.ifm_current & VAR_7) {
   if (VAR_14.ifm_current & VAR_6)
    return VAR_0;
   else
    return VAR_2;
  }
  if (VAR_14.ifm_current & VAR_8)
   return VAR_1;
  if (VAR_14.ifm_current & VAR_9)
   return VAR_2;
  if (VAR_14.ifm_current & VAR_11)
   return VAR_4;




 }
 return VAR_5;
}
