
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wps_data {int dummy; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_2(struct wps_data *VAR_6, struct wpabuf *VAR_7)
{
 u16 VAR_8 = VAR_2;
 VAR_8 &= ~VAR_3;
 FUNC_0(VAR_1, "WPS:  * Encryption Type Flags (0x%x)",
     VAR_8);
 FUNC_1(VAR_7, VAR_0);
 FUNC_1(VAR_7, 2);
 FUNC_1(VAR_7, VAR_8);
 return 0;
}
