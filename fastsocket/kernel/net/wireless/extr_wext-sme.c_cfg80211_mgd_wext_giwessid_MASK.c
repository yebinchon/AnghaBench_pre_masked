
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {scalar_t__ const* ssid; scalar_t__ ssid_len; } ;
struct TYPE_6__ {TYPE_2__ connect; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_3__ wext; TYPE_1__* current_bss; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; scalar_t__ length; } ;
struct TYPE_4__ {int pub; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__* FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,scalar_t__ const*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct wireless_dev*) ;
 int FUNC_6 (struct wireless_dev*) ;

int FUNC_7(struct net_device *VAR_3,
          struct iw_request_info *VAR_4,
          struct iw_point *VAR_5, char *VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_3->ieee80211_ptr;


 if (FUNC_0(VAR_7->iftype != VAR_1))
  return -VAR_0;

 VAR_5->flags = 0;

 FUNC_5(VAR_7);
 if (VAR_7->current_bss) {
  const u8 *VAR_8;

  FUNC_3();
  VAR_8 = FUNC_1(&VAR_7->current_bss->pub,
       VAR_2);
  if (VAR_8) {
   VAR_5->flags = 1;
   VAR_5->length = VAR_8[1];
   FUNC_2(VAR_6, VAR_8 + 2, VAR_5->length);
  }
  FUNC_4();
 } else if (VAR_7->wext.connect.ssid && VAR_7->wext.connect.ssid_len) {
  VAR_5->flags = 1;
  VAR_5->length = VAR_7->wext.connect.ssid_len;
  FUNC_2(VAR_6, VAR_7->wext.connect.ssid, VAR_5->length);
 }
 FUNC_6(VAR_7);

 return 0;
}
