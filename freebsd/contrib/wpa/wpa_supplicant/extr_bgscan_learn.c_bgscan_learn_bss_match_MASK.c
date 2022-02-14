
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpa_scan_res {int dummy; } ;
struct bgscan_learn_data {TYPE_1__* ssid; } ;
struct TYPE_2__ {scalar_t__ const ssid_len; int ssid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__ const*,scalar_t__ const) ;
 scalar_t__* FUNC_1 (struct wpa_scan_res*,int ) ;

__attribute__((used)) static int FUNC_2(struct bgscan_learn_data *VAR_1,
      struct wpa_scan_res *VAR_2)
{
 const u8 *VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3 == ((void*)0))
  return 0;

 if (VAR_1->ssid->ssid_len != VAR_3[1] ||
     FUNC_0(VAR_1->ssid->ssid, VAR_3 + 2, VAR_3[1]) != 0)
  return 0;

 return 1;
}
