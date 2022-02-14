
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct upnp_wps_device_sm {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct http_request {int dummy; } ;
typedef enum http_reply_code { ____Placeholder_http_reply_code } http_reply_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct http_request*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (struct http_request*,int,char const*,size_t,struct wpabuf*,char const*) ;
 char* FUNC_4 (struct http_request*,size_t*) ;
 int FUNC_5 (struct upnp_wps_device_sm*,struct wpabuf**,char const**) ;
 int FUNC_6 (struct upnp_wps_device_sm*,char*,struct wpabuf**,char const**) ;
 int FUNC_7 (struct upnp_wps_device_sm*,char*,struct wpabuf**,char const**) ;
 int FUNC_8 (struct upnp_wps_device_sm*,struct sockaddr_in*,char*,struct wpabuf**,char const**) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_11(struct upnp_wps_device_sm *VAR_5,
          struct sockaddr_in *VAR_6,
          struct http_request *VAR_7,
          const char *VAR_8)
{
 enum http_reply_code VAR_9;
 char *VAR_10 = FUNC_0(VAR_7);
 const char *VAR_11 = ((void*)0);
 size_t VAR_12 = 0;
 const char *VAR_13 = ((void*)0);
 struct wpabuf *VAR_14 = ((void*)0);

 if (FUNC_1(VAR_8, VAR_4)) {
  FUNC_9(VAR_2, "WPS UPnP: Invalid POST filename %s",
      VAR_8);
  VAR_9 = VAR_0;
  goto bad;
 }

 VAR_9 = VAR_3;
 VAR_11 = FUNC_4(VAR_7, &VAR_12);
 if (VAR_11 == ((void*)0))
  goto bad;

 if (!FUNC_2("GetDeviceInfo", VAR_11, VAR_12))
  VAR_9 = FUNC_5(VAR_5, &VAR_14, &VAR_13);
 else if (!FUNC_2("PutMessage", VAR_11, VAR_12))
  VAR_9 = FUNC_6(VAR_5, VAR_10, &VAR_14, &VAR_13);
 else if (!FUNC_2("PutWLANResponse", VAR_11, VAR_12))
  VAR_9 = FUNC_7(VAR_5, VAR_10, &VAR_14,
          &VAR_13);
 else if (!FUNC_2("SetSelectedRegistrar", VAR_11, VAR_12))
  VAR_9 = FUNC_8(VAR_5, VAR_6, VAR_10, &VAR_14,
        &VAR_13);
 else
  FUNC_9(VAR_2, "WPS UPnP: Unknown POST type");

bad:
 if (VAR_9 != VAR_1)
  FUNC_9(VAR_2, "WPS UPnP: POST failure ret=%d", VAR_9);
 FUNC_3(VAR_7, VAR_9, VAR_11, VAR_12, VAR_14,
      VAR_13);
 FUNC_10(VAR_14);
}
