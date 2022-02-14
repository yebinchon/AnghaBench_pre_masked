
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er {int dummy; } ;
struct wpabuf {int dummy; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct http_request {int dummy; } ;
typedef enum httpread_hdr_type { ____Placeholder_httpread_hdr_type } httpread_hdr_type ;



 int VAR_0 ;
 int FUNC_0 (struct wpabuf*) ;
 int FUNC_1 (struct http_request*) ;
 struct sockaddr_in* FUNC_2 (struct http_request*) ;
 int FUNC_3 (struct http_request*) ;
 int FUNC_4 (struct http_request*) ;
 int FUNC_5 (struct http_request*,struct wpabuf*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,...) ;
 struct wpabuf* FUNC_9 (int) ;
 int FUNC_10 (struct wpabuf*,char*) ;
 int FUNC_11 (struct wps_er*,struct http_request*) ;

__attribute__((used)) static void FUNC_12(void *VAR_1, struct http_request *VAR_2)
{
 struct wps_er *VAR_3 = VAR_1;
 struct sockaddr_in *VAR_4 = FUNC_2(VAR_2);
 enum httpread_hdr_type VAR_5 = FUNC_3(VAR_2);
 struct wpabuf *VAR_6;

 FUNC_8(VAR_0, "WPS ER: HTTP request: '%s' (type %d) from "
     "%s:%d",
     FUNC_4(VAR_2), VAR_5,
     FUNC_6(VAR_4->sin_addr), FUNC_7(VAR_4->sin_port));

 switch (VAR_5) {
 case 128:
  FUNC_11(VAR_3, VAR_2);
  break;
 default:
  FUNC_8(VAR_0, "WPS ER: Unsupported HTTP request type "
      "%d", VAR_5);
  VAR_6 = FUNC_9(200);
  if (VAR_6 == ((void*)0)) {
   FUNC_1(VAR_2);
   return;
  }
  FUNC_10(VAR_6,
          "HTTP/1.1 501 Unimplemented\r\n"
          "Connection: close\r\n");
  FUNC_0(VAR_6);
  FUNC_10(VAR_6, "\r\n");
  FUNC_5(VAR_2, VAR_6);
  break;
 }
}
