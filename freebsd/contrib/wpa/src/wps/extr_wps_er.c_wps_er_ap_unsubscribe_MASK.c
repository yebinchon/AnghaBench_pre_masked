
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {int er; int * http; int sid; int * event_sub_url; } ;
struct wps_er {int dummy; } ;
struct wpabuf {int dummy; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
typedef int sid ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct sockaddr_in*,struct wpabuf*,int,int ,struct wps_er_ap*) ;
 char* FUNC_1 (int *,struct sockaddr_in*,char**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ,char*) ;
 struct wpabuf* FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*) ;
 int FUNC_13 (struct wpabuf*,char*,char*,int ,int ,char*) ;
 int FUNC_14 (int ,struct wps_er_ap*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_15(struct wps_er *VAR_3, struct wps_er_ap *VAR_4)
{
 struct wpabuf *VAR_5;
 struct sockaddr_in VAR_6;
 char *VAR_7, *VAR_8;
 char VAR_9[100];

 if (VAR_4->event_sub_url == ((void*)0)) {
  FUNC_8(VAR_0, "WPS ER: No eventSubURL - cannot "
      "subscribe");
  goto fail;
 }
 if (VAR_4->http) {
  FUNC_8(VAR_0, "WPS ER: Pending HTTP request - cannot "
      "send subscribe request");
  goto fail;
 }

 VAR_7 = FUNC_1(VAR_4->event_sub_url, &VAR_6, &VAR_8);
 if (VAR_7 == ((void*)0)) {
  FUNC_8(VAR_0, "WPS ER: Failed to parse eventSubURL");
  goto fail;
 }

 VAR_5 = FUNC_9(FUNC_5(VAR_4->event_sub_url) + 1000);
 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_7);
  goto fail;
 }
 FUNC_6(VAR_4->sid, VAR_9, sizeof(VAR_9));
 FUNC_13(VAR_5,
        "UNSUBSCRIBE %s HTTP/1.1\r\n"
        "HOST: %s:%d\r\n"
        "SID: uuid:%s\r\n"
        "\r\n",
        VAR_8, FUNC_2(VAR_6.sin_addr), FUNC_3(VAR_6.sin_port), VAR_9);
 FUNC_4(VAR_7);
 FUNC_7(VAR_1, "WPS ER: Unsubscription request",
     FUNC_11(VAR_5), FUNC_12(VAR_5));

 VAR_4->http = FUNC_0(&VAR_6, VAR_5, 1000,
        VAR_2, VAR_4);
 if (VAR_4->http == ((void*)0)) {
  FUNC_10(VAR_5);
  goto fail;
 }
 return;

fail:




 FUNC_14(VAR_4->er, VAR_4);
}
