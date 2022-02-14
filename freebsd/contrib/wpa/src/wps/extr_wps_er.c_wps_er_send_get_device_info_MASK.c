
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {void (* m1_handler ) (struct wps_er_ap*,struct wpabuf*) ;int * http; int * control_url; } ;
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
 struct wpabuf* FUNC_6 (int *,char*,int *,char*,struct sockaddr_in*,char**,char**) ;

__attribute__((used)) static int FUNC_7(struct wps_er_ap *VAR_2,
           void (*VAR_3)(struct wps_er_ap *VAR_4,
         struct wpabuf *VAR_5))
{
 struct wpabuf *VAR_6;
 char *VAR_7, *VAR_8;
 struct sockaddr_in VAR_9;
 char *VAR_10, *VAR_11;

 if (VAR_2->http) {
  FUNC_3(VAR_0, "WPS ER: Pending HTTP operation ongoing "
      "with the AP - cannot get device info");
  return -1;
 }

 if (VAR_2->control_url == ((void*)0)) {
  FUNC_3(VAR_0, "WPS ER: No controlURL for AP");
  return -1;
 }

 VAR_10 = FUNC_1(VAR_2->control_url, &VAR_9, &VAR_11);
 if (VAR_10 == ((void*)0)) {
  FUNC_3(VAR_0, "WPS ER: Failed to parse controlURL");
  return -1;
 }

 VAR_6 = FUNC_6(((void*)0), "GetDeviceInfo", ((void*)0), VAR_11, &VAR_9,
         &VAR_7, &VAR_8);
 FUNC_2(VAR_10);
 if (VAR_6 == ((void*)0))
  return -1;

 FUNC_5(VAR_6, "GetDeviceInfo", VAR_7, VAR_8);

 VAR_2->http = FUNC_0(&VAR_9, VAR_6, 10000,
        VAR_1, VAR_2);
 if (VAR_2->http == ((void*)0)) {
  FUNC_4(VAR_6);
  return -1;
 }

 VAR_2->m1_handler = VAR_3;

 return 0;
}
