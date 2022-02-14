
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

int FUNC_2(struct wps_data *VAR_8, struct wpabuf *VAR_9)
{
 u16 VAR_10 = VAR_3;

 VAR_10 &= ~VAR_4;
 VAR_10 &= ~VAR_5;
 VAR_10 &= ~VAR_2;
 FUNC_0(VAR_1, "WPS:  * Authentication Type Flags (0x%x)",
     VAR_10);
 FUNC_1(VAR_9, VAR_0);
 FUNC_1(VAR_9, 2);
 FUNC_1(VAR_9, VAR_10);
 return 0;
}
