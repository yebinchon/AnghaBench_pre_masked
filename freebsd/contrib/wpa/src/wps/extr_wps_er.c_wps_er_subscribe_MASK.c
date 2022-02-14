
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_er_ap {int * http; int id; TYPE_1__* er; int * event_sub_url; } ;
struct wpabuf {int dummy; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct TYPE_2__ {int event_id; int http_port; int ip_addr_text; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct sockaddr_in*,struct wpabuf*,int,int ,struct wps_er_ap*) ;
 char* FUNC_1 (int *,struct sockaddr_in*,char**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int ,char*) ;
 struct wpabuf* FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*,char*,char*,int ,int ,int ,int ,int ,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_13(struct wps_er_ap *VAR_3)
{
 struct wpabuf *VAR_4;
 struct sockaddr_in VAR_5;
 char *VAR_6, *VAR_7;

 if (VAR_3->event_sub_url == ((void*)0)) {
  FUNC_7(VAR_0, "WPS ER: No eventSubURL - cannot "
      "subscribe");
  return;
 }
 if (VAR_3->http) {
  FUNC_7(VAR_0, "WPS ER: Pending HTTP request - cannot "
      "send subscribe request");
  return;
 }

 VAR_6 = FUNC_1(VAR_3->event_sub_url, &VAR_5, &VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_7(VAR_0, "WPS ER: Failed to parse eventSubURL");
  return;
 }

 VAR_4 = FUNC_8(FUNC_5(VAR_3->event_sub_url) + 1000);
 if (VAR_4 == ((void*)0)) {
  FUNC_4(VAR_6);
  return;
 }
 FUNC_12(VAR_4,
        "SUBSCRIBE %s HTTP/1.1\r\n"
        "HOST: %s:%d\r\n"
        "CALLBACK: <http://%s:%d/event/%u/%u>\r\n"
        "NT: upnp:event\r\n"
        "TIMEOUT: Second-%d\r\n"
        "\r\n",
        VAR_7, FUNC_2(VAR_5.sin_addr), FUNC_3(VAR_5.sin_port),
        VAR_3->er->ip_addr_text, VAR_3->er->http_port,
        VAR_3->er->event_id, VAR_3->id, 1800);
 FUNC_4(VAR_6);
 FUNC_6(VAR_1, "WPS ER: Subscription request",
     FUNC_10(VAR_4), FUNC_11(VAR_4));

 VAR_3->http = FUNC_0(&VAR_5, VAR_4, 1000, VAR_2,
        VAR_3);
 if (VAR_3->http == ((void*)0))
  FUNC_9(VAR_4);
}
