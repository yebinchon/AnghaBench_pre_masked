
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prism2_hostapd_param {int cmd; } ;
struct hostap_driver_data {int dummy; } ;
typedef int param ;


 int VAR_0 ;
 int FUNC_0 (struct hostap_driver_data*,struct prism2_hostapd_param*,int) ;
 int FUNC_1 (struct prism2_hostapd_param*,int ,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 struct hostap_driver_data *VAR_2 = VAR_1;
 struct prism2_hostapd_param VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.cmd = VAR_0;
 return FUNC_0(VAR_2, &VAR_3, sizeof(VAR_3));
}
