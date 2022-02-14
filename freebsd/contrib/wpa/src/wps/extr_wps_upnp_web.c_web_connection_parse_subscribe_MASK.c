
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct upnp_wps_device_sm {int dummy; } ;
struct subscription {int * uuid; } ;
struct http_request {int dummy; } ;
typedef int str ;
typedef enum http_reply_code { ____Placeholder_http_reply_code } http_reply_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (char*,int) ;
 char* VAR_8 ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*,int ) ;
 int FUNC_4 (struct http_request*) ;
 char* FUNC_5 (struct http_request*) ;
 int FUNC_6 (struct http_request*,struct wpabuf*) ;
 char* VAR_9 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,int ) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;
 struct subscription* FUNC_12 (struct upnp_wps_device_sm*,int *) ;
 struct subscription* FUNC_13 (struct upnp_wps_device_sm*,char*) ;
 int FUNC_14 (int *,char*,int) ;
 scalar_t__ FUNC_15 (char*,int *) ;
 int FUNC_16 (int ,char*,int *,int) ;
 int FUNC_17 (int ,char*,...) ;
 struct wpabuf* FUNC_18 (int) ;
 int FUNC_19 (struct wpabuf*,char*,int ) ;
 char* FUNC_20 (struct wpabuf*,int) ;
 int FUNC_21 (struct wpabuf*,char*) ;

__attribute__((used)) static void FUNC_22(struct upnp_wps_device_sm *VAR_10,
        struct http_request *VAR_11,
        const char *VAR_12)
{
 struct wpabuf *VAR_13;
 char *VAR_14;
 char *VAR_15 = FUNC_5(VAR_11);
 char *VAR_16;
 char *VAR_17;
 int VAR_18;
 char *VAR_19;
 int VAR_20;
 int VAR_21 = 0;
 u8 VAR_22[VAR_7];
 int VAR_23 = 0;
 char *VAR_24 = ((void*)0);
 struct subscription *VAR_25 = ((void*)0);
 enum http_reply_code VAR_26 = VAR_1;

 VAR_13 = FUNC_18(1000);
 if (VAR_13 == ((void*)0)) {
  FUNC_4(VAR_11);
  return;
 }

 FUNC_16(VAR_4, "WPS UPnP: HTTP SUBSCRIBE",
     (u8 *) VAR_15, FUNC_10(VAR_15));


 VAR_16 = VAR_15;



 if (FUNC_8(VAR_12, VAR_6) != 0) {
  VAR_26 = VAR_3;
  goto error;
 }
 FUNC_17(VAR_4, "WPS UPnP: HTTP SUBSCRIBE for event");
 VAR_19 = FUNC_9(VAR_16, '\n');

 while (VAR_19) {

  VAR_16 = VAR_19 + 1;
  VAR_19 = FUNC_9(VAR_16, '\n');
  if (VAR_19 == ((void*)0))
   break;




  VAR_17 = "NT:";
  VAR_18 = FUNC_10(VAR_17);
  if (FUNC_11(VAR_16, VAR_17, VAR_18) == 0) {
   VAR_16 += VAR_18;
   while (*VAR_16 == ' ' || *VAR_16 == '\t')
    VAR_16++;
   VAR_17 = "upnp:event";
   VAR_18 = FUNC_10(VAR_17);
   if (FUNC_11(VAR_16, VAR_17, VAR_18) != 0) {
    VAR_26 = VAR_0;
    goto error;
   }
   VAR_21 = 1;
   continue;
  }
  VAR_17 = "CALLBACK:";
  VAR_18 = FUNC_10(VAR_17);
  if (FUNC_11(VAR_16, VAR_17, VAR_18) == 0) {
   VAR_16 += VAR_18;
   while (*VAR_16 == ' ' || *VAR_16 == '\t')
    VAR_16++;
   VAR_20 = VAR_19 - VAR_16;
   FUNC_7(VAR_24);
   VAR_24 = FUNC_0(VAR_16, VAR_20);
   if (VAR_24 == ((void*)0)) {
    VAR_26 = VAR_1;
    goto error;
   }
   if (VAR_20 > 0 && VAR_24[VAR_20 - 1] == '\r')
    VAR_24[VAR_20 - 1] = '\0';
   continue;
  }

  VAR_17 = "SID:";
  VAR_18 = FUNC_10(VAR_17);
  if (FUNC_11(VAR_16, VAR_17, VAR_18) == 0) {
   VAR_16 += VAR_18;
   while (*VAR_16 == ' ' || *VAR_16 == '\t')
    VAR_16++;
   VAR_17 = "uuid:";
   VAR_18 = FUNC_10(VAR_17);
   if (FUNC_11(VAR_16, VAR_17, VAR_18) != 0) {
    VAR_26 = VAR_0;
    goto error;
   }
   VAR_16 += VAR_18;
   while (*VAR_16 == ' ' || *VAR_16 == '\t')
    VAR_16++;
   if (FUNC_15(VAR_16, VAR_22)) {
    VAR_26 = VAR_0;
    goto error;
   }
   VAR_23 = 1;
   continue;
  }



 }

 if (VAR_23) {

  FUNC_17(VAR_4, "WPS UPnP: Subscription renewal");
  if (VAR_24) {
   VAR_26 = VAR_0;
   goto error;
  }
  VAR_25 = FUNC_12(VAR_10, VAR_22);
  if (VAR_25 == ((void*)0)) {
   char VAR_27[80];
   FUNC_14(VAR_22, VAR_27, sizeof(VAR_27));
   FUNC_17(VAR_4, "WPS UPnP: Could not find "
       "SID %s", VAR_27);
   VAR_26 = VAR_3;
   goto error;
  }
 } else if (VAR_24) {
  FUNC_17(VAR_4, "WPS UPnP: New subscription");
  if (!VAR_21) {
   VAR_26 = VAR_3;
   goto error;
  }
  VAR_25 = FUNC_13(VAR_10, VAR_24);
  if (VAR_25 == ((void*)0)) {
   VAR_26 = VAR_1;
   goto error;
  }
 } else {
  VAR_26 = VAR_3;
  goto error;
 }


 FUNC_3(VAR_13, VAR_2);
 FUNC_21(VAR_13, VAR_9);
 FUNC_21(VAR_13, VAR_8);
 FUNC_21(VAR_13, "Content-Length: 0\r\n");
 FUNC_21(VAR_13, "SID: uuid:");

 VAR_14 = FUNC_20(VAR_13, 0);
 FUNC_14(VAR_25->uuid, VAR_14, 80);
 FUNC_17(VAR_4, "WPS UPnP: Assigned SID %s", VAR_14);
 FUNC_20(VAR_13, FUNC_10(VAR_14));
 FUNC_21(VAR_13, "\r\n");
 FUNC_19(VAR_13, "Timeout: Second-%d\r\n", VAR_5);
 FUNC_1(VAR_13);

 FUNC_21(VAR_13, "\r\n");

 FUNC_7(VAR_24);
 FUNC_6(VAR_11, VAR_13);
 return;

error:
 FUNC_17(VAR_4, "WPS UPnP: SUBSCRIBE failed - return %d", VAR_26);
 FUNC_2(VAR_13, VAR_26);
 FUNC_6(VAR_11, VAR_13);
 FUNC_7(VAR_24);
}
