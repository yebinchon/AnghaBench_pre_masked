
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_driver_scan_params {size_t num_ssids; TYPE_1__* ssids; } ;
struct wpa_driver_nl80211_data {TYPE_2__* global; } ;
struct ifreq {char* buf; int used_len; int total_len; struct ifreq* ifr_data; int ifr_name; } ;
struct i802_bss {int ifname; struct wpa_driver_nl80211_data* drv; } ;
typedef int priv_cmd ;
typedef int ifr ;
typedef int buf ;
typedef struct ifreq android_wifi_priv_cmd ;
struct TYPE_4__ {int ioctl_sock; } ;
struct TYPE_3__ {char ssid_len; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 char VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 char VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 char VAR_18 ;
 int VAR_19 ;
 char VAR_20 ;
 char VAR_21 ;
 char VAR_22 ;
 char VAR_23 ;
 char VAR_24 ;
 int FUNC_0 (struct i802_bss*,char*) ;
 scalar_t__ VAR_25 ;
 int FUNC_1 (int ,scalar_t__,struct ifreq*) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,scalar_t__,char*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct wpa_driver_nl80211_data*) ;
 int FUNC_7 (int ,char*,int ,char) ;
 int FUNC_8 (int ,char*,int) ;

int FUNC_9(struct i802_bss *VAR_26,
        struct wpa_driver_scan_params *VAR_27)
{
 struct wpa_driver_nl80211_data *VAR_28 = VAR_26->drv;
 struct ifreq VAR_29;
 android_wifi_priv_cmd VAR_30;
 int VAR_31 = 0, VAR_32 = 0, VAR_33;
 char VAR_34[VAR_8];

 VAR_33 = VAR_6;
 FUNC_3(VAR_34, VAR_5, VAR_33);
 VAR_34[VAR_33++] = VAR_21;
 VAR_34[VAR_33++] = VAR_24;
 VAR_34[VAR_33++] = VAR_23;
 VAR_34[VAR_33++] = VAR_22;

 while (VAR_32 < VAR_7 && (size_t) VAR_32 < VAR_27->num_ssids) {


  if ((VAR_33 + VAR_19 + VAR_1 +
       VAR_12 + 1) >= (int) sizeof(VAR_34))
   break;
  FUNC_7(VAR_2, "For PNO Scan",
      VAR_27->ssids[VAR_32].ssid,
      VAR_27->ssids[VAR_32].ssid_len);
  VAR_34[VAR_33++] = VAR_20;
  VAR_34[VAR_33++] = VAR_27->ssids[VAR_32].ssid_len;
  FUNC_3(&VAR_34[VAR_33], VAR_27->ssids[VAR_32].ssid,
     VAR_27->ssids[VAR_32].ssid_len);
  VAR_33 += VAR_27->ssids[VAR_32].ssid_len;
  VAR_32++;
 }

 VAR_34[VAR_33++] = VAR_18;
 FUNC_4(&VAR_34[VAR_33], VAR_17 + 1, "%x",
      VAR_16);
 VAR_33 += VAR_17;

 VAR_34[VAR_33++] = VAR_15;
 FUNC_4(&VAR_34[VAR_33], VAR_14 + 1, "%x",
      VAR_13);
 VAR_33 += VAR_14;

 VAR_34[VAR_33++] = VAR_11;
 FUNC_4(&VAR_34[VAR_33], VAR_10 + 1, "%x",
      VAR_9);
 VAR_33 += VAR_10 + 1;

 FUNC_2(&VAR_29, 0, sizeof(VAR_29));
 FUNC_2(&VAR_30, 0, sizeof(VAR_30));
 FUNC_5(VAR_29.ifr_name, VAR_26->ifname, VAR_0);

 VAR_30.buf = VAR_34;
 VAR_30.used_len = VAR_33;
 VAR_30.total_len = VAR_33;
 VAR_29.ifr_data = &VAR_30;

 VAR_31 = FUNC_1(VAR_28->global->ioctl_sock, VAR_4 + 1, &VAR_29);

 if (VAR_31 < 0) {
  FUNC_8(VAR_3, "ioctl[SIOCSIWPRIV] (pnosetup): %d",
      VAR_31);
  FUNC_6(VAR_28);
  return VAR_31;
 }

 VAR_25 = 0;

 return FUNC_0(VAR_26, "PNOFORCE 1");
}
