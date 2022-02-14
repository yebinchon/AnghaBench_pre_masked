
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_nss; void* chan_width; void* smps_mode; int addr; } ;
union wpa_event_data {TYPE_1__ sta_opmode; } ;
typedef int u8 ;
struct wpa_driver_nl80211_data {int ctx; } ;
struct nlattr {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_4(struct wpa_driver_nl80211_data *VAR_16,
         struct nlattr **VAR_17)
{
 union wpa_event_data VAR_18;
 u8 VAR_19, VAR_20;

 if (!VAR_17[VAR_9] ||
     (!VAR_17[VAR_8] &&
      !VAR_17[VAR_11] &&
      !VAR_17[VAR_10]))
  return;

 VAR_18.sta_opmode.smps_mode = VAR_13;
 VAR_18.sta_opmode.chan_width = VAR_6;
 VAR_18.sta_opmode.rx_nss = 0xff;
 VAR_18.sta_opmode.addr = FUNC_0(VAR_17[VAR_9]);

 if (VAR_17[VAR_11]) {
  VAR_19 = FUNC_2(VAR_17[VAR_11]);
  switch (VAR_19) {
  case 129:
   VAR_18.sta_opmode.smps_mode = VAR_14;
   break;
  case 128:
   VAR_18.sta_opmode.smps_mode = VAR_15;
   break;
  case 130:
   VAR_18.sta_opmode.smps_mode = VAR_12;
   break;
  default:
   VAR_18.sta_opmode.smps_mode = VAR_13;
   break;
  }
 }

 if (VAR_17[VAR_8]) {
  VAR_20 = FUNC_1(VAR_17[VAR_8]);
  switch (VAR_20) {
  case 134:
   VAR_18.sta_opmode.chan_width = VAR_2;
   break;
  case 135:
   VAR_18.sta_opmode.chan_width = VAR_1;
   break;
  case 133:
   VAR_18.sta_opmode.chan_width = VAR_3;
   break;
  case 132:
   VAR_18.sta_opmode.chan_width = VAR_4;
   break;
  case 131:
   VAR_18.sta_opmode.chan_width = VAR_5;
   break;
  case 136:
   VAR_18.sta_opmode.chan_width = VAR_0;
   break;
  default:
   VAR_18.sta_opmode.chan_width = VAR_6;
   break;

  }
 }

 if (VAR_17[VAR_10])
  VAR_18.sta_opmode.rx_nss = FUNC_2(VAR_17[VAR_10]);

 FUNC_3(VAR_16->ctx, VAR_7, &VAR_18);
}
