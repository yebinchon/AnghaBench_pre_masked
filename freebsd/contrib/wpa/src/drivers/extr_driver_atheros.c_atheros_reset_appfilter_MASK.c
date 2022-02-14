
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req_set_filter {scalar_t__ app_filterype; } ;
struct atheros_driver_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct atheros_driver_data*,int ,struct ieee80211req_set_filter*,int) ;

__attribute__((used)) static int FUNC_1(struct atheros_driver_data *VAR_1)
{
 struct ieee80211req_set_filter VAR_2;
 VAR_2.app_filterype = 0;
 return FUNC_0(VAR_1, VAR_0, &VAR_2,
       sizeof(struct ieee80211req_set_filter));
}
