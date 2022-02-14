
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_cancel_ctx {int count; } ;
struct hostapd_data {int dummy; } ;
typedef int ctx ;


 int FUNC_0 (struct hostapd_data*,int ,struct wps_cancel_ctx*) ;
 int FUNC_1 (struct wps_cancel_ctx*,int ,int) ;
 int VAR_0 ;

int FUNC_2(struct hostapd_data *VAR_1)
{
 struct wps_cancel_ctx VAR_2;
 int VAR_3;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_2);
 if (VAR_3 == 0 && !VAR_2.count)
  VAR_3 = -1;
 return VAR_3;
}
