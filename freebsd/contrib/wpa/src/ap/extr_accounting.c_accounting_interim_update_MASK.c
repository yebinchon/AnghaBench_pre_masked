
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int acct_interim_interval; } ;
struct hostapd_data {int dummy; } ;
struct hostap_sta_driver_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_data*,struct sta_info*) ;
 int FUNC_1 (struct hostapd_data*,struct sta_info*,struct hostap_sta_driver_data*) ;
 int FUNC_2 (int,int ,void (*) (void*,void*),struct hostapd_data*,struct sta_info*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, void *VAR_2)
{
 struct hostapd_data *VAR_3 = VAR_1;
 struct sta_info *VAR_4 = VAR_2;
 int VAR_5;

 if (VAR_4->acct_interim_interval) {
  FUNC_0(VAR_3, VAR_4);
  VAR_5 = VAR_4->acct_interim_interval;
 } else {
  struct hostap_sta_driver_data VAR_6;
  FUNC_1(VAR_3, VAR_4, &VAR_6);
  VAR_5 = VAR_0;
 }

 FUNC_2(VAR_5, 0, FUNC_3,
          VAR_3, VAR_4);
}
