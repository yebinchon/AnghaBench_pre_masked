
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_wps_device_sm {int dummy; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct http_request {int dummy; } ;
typedef enum httpread_hdr_type { ____Placeholder_httpread_hdr_type } httpread_hdr_type ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct http_request*) ;
 struct sockaddr_in* FUNC_2 (struct http_request*) ;
 int FUNC_3 (struct http_request*) ;
 char* FUNC_4 (struct http_request*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct upnp_wps_device_sm*,struct http_request*,char*) ;
 int FUNC_7 (struct upnp_wps_device_sm*,struct sockaddr_in*,struct http_request*,char*) ;
 int FUNC_8 (struct upnp_wps_device_sm*,struct http_request*,char*) ;
 int FUNC_9 (struct upnp_wps_device_sm*,struct http_request*,char*) ;
 int FUNC_10 (struct http_request*) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static void FUNC_12(void *VAR_2, struct http_request *VAR_3)
{
 struct upnp_wps_device_sm *VAR_4 = VAR_2;
 enum httpread_hdr_type VAR_5 = FUNC_3(VAR_3);
 char *VAR_6 = FUNC_4(VAR_3);
 struct sockaddr_in *VAR_7 = FUNC_2(VAR_3);

 if (!VAR_6) {
  FUNC_11(VAR_1, "WPS UPnP: Could not get HTTP URI");
  FUNC_1(VAR_3);
  return;
 }

 while (*VAR_6 == '/')
  VAR_6++;

 FUNC_11(VAR_0, "WPS UPnP: Got HTTP request type %d from %s:%d",
     VAR_5, FUNC_5(VAR_7->sin_addr), FUNC_0(VAR_7->sin_port));

 switch (VAR_5) {
 case 131:
  FUNC_6(VAR_4, VAR_3, VAR_6);
  break;
 case 130:
  FUNC_7(VAR_4, VAR_7, VAR_3, VAR_6);
  break;
 case 129:
  FUNC_8(VAR_4, VAR_3, VAR_6);
  break;
 case 128:
  FUNC_9(VAR_4, VAR_3, VAR_6);
  break;






 default:

  FUNC_10(VAR_3);
  break;
 }
}
