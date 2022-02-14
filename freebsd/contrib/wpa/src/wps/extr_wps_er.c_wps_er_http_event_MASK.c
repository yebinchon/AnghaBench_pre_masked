
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {int dummy; } ;
struct wps_er {int dummy; } ;
struct wpabuf {int dummy; } ;
struct http_request {int dummy; } ;
typedef enum http_reply_code { ____Placeholder_http_reply_code } http_reply_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct http_request*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct wpabuf*) ;
 struct wps_er_ap* FUNC_3 (struct wps_er*,unsigned int) ;
 int FUNC_4 (struct http_request*) ;
 int FUNC_5 (struct http_request*) ;
 int FUNC_6 (struct wps_er_ap*,struct wpabuf*) ;
 struct wpabuf* FUNC_7 (int ,char*,int*) ;

__attribute__((used)) static void FUNC_8(struct wps_er *VAR_2, struct http_request *VAR_3,
         unsigned int VAR_4)
{
 struct wps_er_ap *VAR_5 = FUNC_3(VAR_2, VAR_4);
 struct wpabuf *VAR_6;
 enum http_reply_code VAR_7;

 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_0, "WPS ER: HTTP event from unknown AP id "
      "%u", VAR_4);
  FUNC_4(VAR_3);
  return;
 }
 FUNC_1(VAR_1, "WPS ER: HTTP event from AP id %u: %s",
     VAR_4, FUNC_0(VAR_3));

 VAR_6 = FUNC_7(FUNC_0(VAR_3), "WLANEvent",
        &VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_0, "WPS ER: Could not extract WLANEvent "
      "from the event notification");




  FUNC_5(VAR_3);
  return;
 }

 FUNC_6(VAR_5, VAR_6);

 FUNC_2(VAR_6);
 FUNC_5(VAR_3);
}
