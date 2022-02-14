
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {int * wps; int * http; int * control_url; } ;
struct wpabuf {int dummy; } ;
struct sockaddr_in {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct sockaddr_in*,struct wpabuf*,int,int ,struct wps_er_ap*) ;
 char* FUNC_1 (int *,struct sockaddr_in*,char**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (struct wpabuf*,char*,char*,char*) ;
 struct wpabuf* FUNC_7 (struct wpabuf const*,char*,char*,char*,struct sockaddr_in*,char**,char**) ;

__attribute__((used)) static void FUNC_8(struct wps_er_ap *VAR_2,
      const struct wpabuf *VAR_3)
{
 struct wpabuf *VAR_4;
 char *VAR_5, *VAR_6;
 struct sockaddr_in VAR_7;
 char *VAR_8, *VAR_9;

 if (VAR_2->http) {
  FUNC_3(VAR_0, "WPS ER: Pending HTTP operation ongoing "
      "with the AP - cannot continue learn");
  return;
 }

 if (VAR_2->control_url == ((void*)0)) {
  FUNC_3(VAR_0, "WPS ER: No controlURL for AP");
  return;
 }

 VAR_8 = FUNC_1(VAR_2->control_url, &VAR_7, &VAR_9);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_0, "WPS ER: Failed to parse controlURL");
  goto fail;
 }

 VAR_4 = FUNC_7(VAR_3, "PutMessage", "NewInMessage", VAR_9, &VAR_7,
         &VAR_5, &VAR_6);
 FUNC_2(VAR_8);
 if (VAR_4 == ((void*)0))
  goto fail;

 FUNC_6(VAR_4, "PutMessage", VAR_5, VAR_6);

 VAR_2->http = FUNC_0(&VAR_7, VAR_4, 10000,
        VAR_1, VAR_2);
 if (VAR_2->http == ((void*)0)) {
  FUNC_4(VAR_4);
  goto fail;
 }
 return;

fail:
 if (VAR_2->wps) {
  FUNC_5(VAR_2->wps);
  VAR_2->wps = ((void*)0);
 }
}
