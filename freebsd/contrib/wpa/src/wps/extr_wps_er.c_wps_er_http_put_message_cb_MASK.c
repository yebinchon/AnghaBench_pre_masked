
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {int * wps; int * http; } ;
struct wpabuf {int dummy; } ;
struct http_client {int dummy; } ;
typedef enum http_reply_code { ____Placeholder_http_reply_code } http_reply_code ;
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
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct wps_er_ap*,struct wpabuf*) ;
 struct wpabuf* FUNC_11 (char*,char*,int*) ;

__attribute__((used)) static void FUNC_12(void *VAR_1, struct http_client *VAR_2,
           enum http_client_event VAR_3)
{
 struct wps_er_ap *VAR_4 = VAR_1;
 struct wpabuf *VAR_5;
 char *VAR_6 = ((void*)0);

 switch (VAR_3) {
 case 129:
  FUNC_5(VAR_0, "WPS ER: PutMessage OK");
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5)
   VAR_6 = FUNC_4(FUNC_8(VAR_5) + 1);
  if (VAR_6 == ((void*)0)) {
   if (VAR_4->wps) {
    FUNC_9(VAR_4->wps);
    VAR_4->wps = ((void*)0);
   }
   break;
  }
  FUNC_3(VAR_6, FUNC_7(VAR_5), FUNC_8(VAR_5));
  break;
 case 131:
 case 130:
 case 128:
  FUNC_5(VAR_0, "WPS ER: PutMessage failed");
  if (VAR_4->wps) {
   FUNC_9(VAR_4->wps);
   VAR_4->wps = ((void*)0);
  }
  break;
 }
 FUNC_0(VAR_4->http);
 VAR_4->http = ((void*)0);

 if (VAR_6) {
  struct wpabuf *VAR_7;
  enum http_reply_code VAR_8;
  VAR_7 = FUNC_11(VAR_6, "NewOutMessage", &VAR_8);
  FUNC_2(VAR_6);
  if (VAR_7 == ((void*)0)) {
   FUNC_5(VAR_0, "WPS ER: Could not extract "
       "NewOutMessage from PutMessage response");
   FUNC_9(VAR_4->wps);
   VAR_4->wps = ((void*)0);
   return;
  }
  FUNC_10(VAR_4, VAR_7);
  FUNC_6(VAR_7);
 }
}
