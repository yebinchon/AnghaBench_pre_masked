
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {int * http; } ;
struct wpabuf {int dummy; } ;
struct http_client {int dummy; } ;
typedef enum http_client_event { ____Placeholder_http_client_event } http_client_event ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct wpabuf* FUNC_1 (struct http_client*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wps_er_ap*,char*) ;

__attribute__((used)) static void FUNC_9(void *VAR_1, struct http_client *VAR_2,
     enum http_client_event VAR_3)
{
 struct wps_er_ap *VAR_4 = VAR_1;
 struct wpabuf *VAR_5;
 char *VAR_6 = ((void*)0);

 switch (VAR_3) {
 case 129:
  FUNC_5(VAR_0, "WPS ER: GetDeviceInfo OK");
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5 == ((void*)0))
   break;
  VAR_6 = FUNC_4(FUNC_7(VAR_5) + 1);
  if (VAR_6 == ((void*)0))
   break;
  FUNC_3(VAR_6, FUNC_6(VAR_5), FUNC_7(VAR_5));
  break;
 case 131:
 case 130:
 case 128:
  FUNC_5(VAR_0, "WPS ER: GetDeviceInfo failed");
  break;
 }
 FUNC_0(VAR_4->http);
 VAR_4->http = ((void*)0);

 if (VAR_6) {
  FUNC_8(VAR_4, VAR_6);
  FUNC_2(VAR_6);
 }
}
