
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_credential {int ssid_len; int ssid; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*,int ) ;
 int FUNC_3 (struct wpabuf*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct wpabuf *VAR_2,
          const struct wps_credential *VAR_3)
{
 FUNC_1(VAR_1, "WPS:  * SSID");
 FUNC_0(VAR_1, "WPS: SSID for Credential",
     VAR_3->ssid, VAR_3->ssid_len);
 FUNC_2(VAR_2, VAR_0);
 FUNC_2(VAR_2, VAR_3->ssid_len);
 FUNC_3(VAR_2, VAR_3->ssid, VAR_3->ssid_len);
 return 0;
}
