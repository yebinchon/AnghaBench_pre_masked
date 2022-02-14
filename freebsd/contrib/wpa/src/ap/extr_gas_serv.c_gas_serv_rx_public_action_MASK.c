
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ category; } ;
struct TYPE_5__ {TYPE_1__ action; } ;
struct ieee80211_mgmt {int* sa; int bssid; TYPE_2__ u; } ;
struct hostapd_data {TYPE_3__* conf; } ;
struct TYPE_6__ {int gas_address3; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (struct hostapd_data*,int const*,int const*,size_t,int,int) ;
 int FUNC_1 (struct hostapd_data*,int const*,int const*,size_t,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, const u8 *VAR_4, size_t VAR_5,
          int VAR_6)
{
 struct hostapd_data *VAR_7 = VAR_3;
 const struct ieee80211_mgmt *VAR_8;
 const u8 *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = (const struct ieee80211_mgmt *) VAR_4;
 if (VAR_5 < VAR_0 + 2)
  return;
 if (VAR_8->u.action.category != VAR_2 &&
     VAR_8->u.action.category != VAR_1)
  return;





 VAR_11 = VAR_8->u.action.category == VAR_1;
 VAR_9 = VAR_8->sa;
 if (VAR_7->conf->gas_address3 == 1)
  VAR_12 = 1;
 else if (VAR_7->conf->gas_address3 == 2)
  VAR_12 = 0;
 else
  VAR_12 = FUNC_2(VAR_8->bssid);
 VAR_5 -= VAR_0 + 1;
 VAR_10 = VAR_4 + VAR_0 + 1;
 switch (VAR_10[0]) {
 case 128:
  FUNC_1(VAR_7, VAR_9, VAR_10 + 1, VAR_5 - 1, VAR_11,
         VAR_12);
  break;
 case 129:
  FUNC_0(VAR_7, VAR_9, VAR_10 + 1, VAR_5 - 1, VAR_11,
          VAR_12);
  break;
 }
}
