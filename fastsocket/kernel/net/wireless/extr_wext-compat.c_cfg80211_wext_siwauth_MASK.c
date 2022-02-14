
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int privacy; } ;
struct TYPE_4__ {TYPE_1__ connect; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_2__ wext; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; } ;


 int VAR_0 ;




 int VAR_1 ;






 scalar_t__ VAR_2 ;
 int FUNC_0 (struct wireless_dev*,int ) ;
 int FUNC_1 (struct wireless_dev*,int ) ;
 int FUNC_2 (struct wireless_dev*,int ) ;
 int FUNC_3 (struct wireless_dev*,int ) ;
 int FUNC_4 (struct wireless_dev*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
     struct iw_request_info *VAR_4,
     struct iw_param *VAR_5, char *VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_3->ieee80211_ptr;

 if (VAR_7->iftype != VAR_2)
  return -VAR_0;

 switch (VAR_5->flags & VAR_1) {
 case 131:
  VAR_7->wext.connect.privacy = VAR_5->value;
  return 0;
 case 128:
  return FUNC_4(VAR_7, VAR_5->value);
 case 136:
  return FUNC_1(VAR_7, VAR_5->value);
 case 133:
  return FUNC_3(VAR_7, VAR_5->value);
 case 135:
  return FUNC_2(VAR_7, VAR_5->value);
 case 137:
  return FUNC_0(VAR_7, VAR_5->value);
 case 129:
 case 130:
 case 134:
 case 132:
  return 0;
 default:
  return -VAR_0;
 }
}
