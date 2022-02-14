
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_button_pushed_ctx {int count; int const* p2p_dev_addr; } ;
struct hostapd_data {int dummy; } ;
typedef int ctx ;


 int FUNC_0 (struct hostapd_data*,int ,struct wps_button_pushed_ctx*) ;
 int FUNC_1 (struct wps_button_pushed_ctx*,int ,int) ;
 int VAR_0 ;

int FUNC_2(struct hostapd_data *VAR_1,
         const u8 *VAR_2)
{
 struct wps_button_pushed_ctx VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.p2p_dev_addr = VAR_2;
 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_3);
 if (VAR_4 == 0 && !VAR_3.count)
  VAR_4 = -1;
 return VAR_4;
}
