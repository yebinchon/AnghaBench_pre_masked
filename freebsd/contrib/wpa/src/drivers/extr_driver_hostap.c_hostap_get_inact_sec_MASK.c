
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int inactive_sec; } ;
struct TYPE_4__ {TYPE_1__ get_info_sta; } ;
struct prism2_hostapd_param {TYPE_2__ u; int sta_addr; int cmd; } ;
struct hostap_driver_data {int dummy; } ;
typedef int param ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hostap_driver_data*,struct prism2_hostapd_param*,int) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (struct prism2_hostapd_param*,int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, const u8 *VAR_3)
{
 struct hostap_driver_data *VAR_4 = VAR_2;
 struct prism2_hostapd_param VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.cmd = VAR_1;
 FUNC_1(VAR_5.sta_addr, VAR_3, VAR_0);
 if (FUNC_0(VAR_4, &VAR_5, sizeof(VAR_5))) {
  return -1;
 }

 return VAR_5.u.get_info_sta.inactive_sec;
}
