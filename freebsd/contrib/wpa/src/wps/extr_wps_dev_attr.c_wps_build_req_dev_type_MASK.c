
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_device_data {int dummy; } ;
struct wpabuf {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,int const*,unsigned int) ;
 int FUNC_1 (struct wpabuf*,unsigned int) ;
 int FUNC_2 (struct wpabuf*,int const*,unsigned int) ;

int FUNC_3(struct wps_device_data *VAR_3, struct wpabuf *VAR_4,
      unsigned int VAR_5,
      const u8 *VAR_6)
{
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  FUNC_0(VAR_1, "WPS: * Requested Device Type",
       VAR_6 + VAR_7 * VAR_2,
       VAR_2);
  FUNC_1(VAR_4, VAR_0);
  FUNC_1(VAR_4, VAR_2);
  FUNC_2(VAR_4, VAR_6 + VAR_7 * VAR_2,
    VAR_2);
 }

 return 0;
}
