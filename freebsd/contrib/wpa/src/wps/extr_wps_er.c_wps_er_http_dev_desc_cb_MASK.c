
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
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wps_er_ap*) ;
 int FUNC_4 (struct wps_er_ap*,struct wpabuf*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, struct http_client *VAR_2,
        enum http_client_event VAR_3)
{
 struct wps_er_ap *VAR_4 = VAR_1;
 struct wpabuf *VAR_5;
 int VAR_6 = 0;

 switch (VAR_3) {
 case 129:
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5 == ((void*)0))
   break;
  FUNC_4(VAR_4, VAR_5);
  VAR_6 = 1;
  break;
 case 131:
 case 130:
 case 128:
  FUNC_2(VAR_0, "WPS ER: Failed to fetch device info");
  break;
 }
 FUNC_0(VAR_4->http);
 VAR_4->http = ((void*)0);
 if (VAR_6)
  FUNC_3(VAR_4);
}
