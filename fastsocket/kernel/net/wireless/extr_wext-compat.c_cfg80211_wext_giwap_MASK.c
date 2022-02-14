
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; } ;
struct sockaddr {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_device*,struct iw_request_info*,struct sockaddr*,char*) ;
 int FUNC_1 (struct net_device*,struct iw_request_info*,struct sockaddr*,char*) ;
 int FUNC_2 (struct net_device*,struct iw_request_info*,struct sockaddr*,char*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
          struct iw_request_info *VAR_2,
          struct sockaddr *VAR_3, char *VAR_4)
{
 struct wireless_dev *VAR_5 = VAR_1->ieee80211_ptr;

 switch (VAR_5->iftype) {
 case 130:
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 case 128:
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 default:
  return -VAR_0;
 }
}
