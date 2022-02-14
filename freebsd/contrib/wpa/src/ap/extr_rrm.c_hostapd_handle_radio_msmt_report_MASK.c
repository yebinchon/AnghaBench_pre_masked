
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int dialog_token; int* variable; } ;
struct TYPE_6__ {TYPE_1__ rrm; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {int sa; TYPE_4__ u; } ;
struct hostapd_data {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int const*,int,int ) ;
 int FUNC_1 (struct hostapd_data*,int ,int,int,int const*,int const) ;
 int FUNC_2 (struct hostapd_data*,int,int const*,int const) ;
 int FUNC_3 (struct hostapd_data*,int,int const*,int const) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static void FUNC_5(struct hostapd_data *VAR_2,
          const u8 *VAR_3, size_t VAR_4)
{
 const struct ieee80211_mgmt *VAR_5 = (const struct ieee80211_mgmt *) VAR_3;
 const u8 *VAR_6, *VAR_7, *VAR_8;
 u8 VAR_9, VAR_10;

 VAR_8 = VAR_3 + VAR_4;
 VAR_9 = VAR_5->u.action.u.rrm.dialog_token;
 VAR_6 = VAR_5->u.action.u.rrm.variable;

 while ((VAR_7 = FUNC_0(VAR_6, VAR_8 - VAR_6, VAR_1))) {
  if (VAR_7[1] < 3) {
   FUNC_4(VAR_0, "Bad Measurement Report element");
   break;
  }

  VAR_10 = VAR_7[3];
  FUNC_4(VAR_0, "Measurement report mode 0x%x type %u",
      VAR_10, VAR_7[4]);

  switch (VAR_7[4]) {
  case 128:
   FUNC_2(VAR_2, VAR_9, VAR_7 + 2, VAR_7[1]);
   break;
  case 129:
   FUNC_3(VAR_2, VAR_9, VAR_7 + 2, VAR_7[1]);
   break;
  case 130:
   FUNC_1(VAR_2, VAR_5->sa, VAR_9,
           VAR_10, VAR_7 + 2, VAR_7[1]);
   break;
  default:
   FUNC_4(VAR_0,
       "Measurement report type %u is not supported",
       VAR_7[4]);
   break;
  }

  VAR_6 = VAR_7 + VAR_7[1] + 2;
 }
}
