
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {scalar_t__ iftype; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int ,int const*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int const*) ;

bool FUNC_4(struct net_device *VAR_4,
     const u8 *VAR_5, gfp_t VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_4->ieee80211_ptr;
 bool VAR_8;

 FUNC_3(VAR_4, VAR_5);

 if (FUNC_0(VAR_7->iftype != VAR_1 &&
      VAR_7->iftype != VAR_3 &&
      VAR_7->iftype != VAR_2)) {
  FUNC_2(0);
  return 0;
 }
 VAR_8 = FUNC_1(VAR_4,
      VAR_0,
      VAR_5, VAR_6);
 FUNC_2(VAR_8);
 return VAR_8;
}
