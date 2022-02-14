
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct prism2_hostapd_param {int sta_addr; int cmd; } ;
struct hostap_driver_data {int dummy; } ;
typedef int param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostap_driver_data*,int const*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct hostap_driver_data*,struct prism2_hostapd_param*,int) ;
 int FUNC_2 (int ,int const*,int ) ;
 int FUNC_3 (struct prism2_hostapd_param*,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_3, const u8 *VAR_4)
{
 struct hostap_driver_data *VAR_5 = VAR_3;
 struct prism2_hostapd_param VAR_6;

 FUNC_0(VAR_5, VAR_4, 0, 0, ~VAR_2);

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cmd = VAR_1;
 FUNC_2(VAR_6.sta_addr, VAR_4, VAR_0);
 if (FUNC_1(VAR_5, &VAR_6, sizeof(VAR_6))) {
  FUNC_4("Could not remove station from kernel driver.\n");
  return -1;
 }
 return 0;
}
