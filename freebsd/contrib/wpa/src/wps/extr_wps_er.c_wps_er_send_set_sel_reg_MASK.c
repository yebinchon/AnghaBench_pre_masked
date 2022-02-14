
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {int * http; int * control_url; scalar_t__ wps; } ;
struct wpabuf {int dummy; } ;
struct sockaddr_in {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct sockaddr_in*,struct wpabuf*,int,int ,struct wps_er_ap*) ;
 char* FUNC_1 (int *,struct sockaddr_in*,char**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpabuf*) ;
 int VAR_1 ;
 int FUNC_5 (struct wpabuf*,char*,char*,char*) ;
 struct wpabuf* FUNC_6 (struct wpabuf*,char*,char*,char*,struct sockaddr_in*,char**,char**) ;

__attribute__((used)) static void FUNC_7(struct wps_er_ap *VAR_2, struct wpabuf *VAR_3)
{
 struct wpabuf *VAR_4;
 char *VAR_5, *VAR_6;
 struct sockaddr_in VAR_7;
 char *VAR_8, *VAR_9;

 if (VAR_2->control_url == ((void*)0)) {
  FUNC_3(VAR_0, "WPS ER: No controlURL for AP");
  return;
 }

 if (VAR_2->http) {
  FUNC_3(VAR_0, "WPS ER: Pending HTTP request for AP - "
      "ignore new request");
  return;
 }

 if (VAR_2->wps) {
  FUNC_3(VAR_0, "WPS ER: Pending WPS operation for AP - "
      "skip SetSelectedRegistrar");
  return;
 }

 VAR_8 = FUNC_1(VAR_2->control_url, &VAR_7, &VAR_9);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_0, "WPS ER: Failed to parse controlURL");
  return;
 }

 VAR_4 = FUNC_6(VAR_3, "SetSelectedRegistrar", "NewMessage", VAR_9,
         &VAR_7, &VAR_5, &VAR_6);
 FUNC_2(VAR_8);
 if (VAR_4 == ((void*)0))
  return;

 FUNC_5(VAR_4, "SetSelectedRegistrar", VAR_5, VAR_6);

 VAR_2->http = FUNC_0(&VAR_7, VAR_4, 1000,
        VAR_1, VAR_2);
 if (VAR_2->http == ((void*)0))
  FUNC_4(VAR_4);
}
