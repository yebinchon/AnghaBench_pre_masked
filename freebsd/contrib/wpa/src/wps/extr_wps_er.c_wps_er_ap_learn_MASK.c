
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {int (* m1_handler ) (struct wps_er_ap*,struct wpabuf*) ;} ;
struct wpabuf {int dummy; } ;
typedef enum http_reply_code { ____Placeholder_http_reply_code } http_reply_code ;


 int VAR_0 ;
 int FUNC_0 (struct wps_er_ap*,struct wpabuf*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*) ;
 struct wpabuf* FUNC_3 (char const*,char*,int*) ;

__attribute__((used)) static void FUNC_4(struct wps_er_ap *VAR_1, const char *VAR_2)
{
 struct wpabuf *VAR_3;
 enum http_reply_code VAR_4;

 FUNC_1(VAR_0, "WPS ER: Received GetDeviceInfo response (M1) "
     "from the AP");
 VAR_3 = FUNC_3(VAR_2, "NewDeviceInfo", &VAR_4);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_0, "WPS ER: Could not extract "
      "NewDeviceInfo from GetDeviceInfo response");
  return;
 }

 VAR_1->m1_handler(VAR_1, VAR_3);
 FUNC_2(VAR_3);
}
