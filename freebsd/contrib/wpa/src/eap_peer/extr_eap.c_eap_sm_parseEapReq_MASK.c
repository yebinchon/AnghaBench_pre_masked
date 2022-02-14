
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {void* rxFailure; int eap_method_priv; TYPE_1__* m; void* rxSuccess; int reqId; void* reqMethod; void* rxResp; int selectedMethod; void* reqVendorMethod; int reqVendor; void* rxReq; int req_sha1; scalar_t__ workaround; } ;
struct eap_hdr {int code; int identifier; int length; } ;
struct TYPE_2__ {int (* get_error_code ) (int ) ;} ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (void* const*) ;
 void* FUNC_1 (void* const*) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct eap_sm*,char*,char*) ;
 int FUNC_4 (struct eap_sm*,struct eap_hdr const*,size_t) ;
 int FUNC_5 (struct eap_sm*,struct eap_hdr const*,size_t) ;
 int FUNC_6 (struct eap_sm*,int) ;
 int FUNC_7 (int,void* const**,size_t*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 void* FUNC_10 (struct wpabuf const*) ;
 size_t FUNC_11 (struct wpabuf const*) ;

__attribute__((used)) static void FUNC_12(struct eap_sm *VAR_8, const struct wpabuf *VAR_9)
{
 const struct eap_hdr *VAR_10;
 size_t VAR_11;
 const u8 *VAR_12;

 VAR_8->rxReq = VAR_8->rxResp = VAR_8->rxSuccess = VAR_8->rxFailure = VAR_4;
 VAR_8->reqId = 0;
 VAR_8->reqMethod = VAR_2;
 VAR_8->reqVendor = VAR_3;
 VAR_8->reqVendorMethod = VAR_2;

 if (VAR_9 == ((void*)0) || FUNC_11(VAR_9) < sizeof(*VAR_10))
  return;

 VAR_10 = FUNC_10(VAR_9);
 VAR_11 = FUNC_2(VAR_10->length);
 if (VAR_11 > FUNC_11(VAR_9)) {
  FUNC_9(VAR_5, "EAP: Ignored truncated EAP-Packet "
      "(len=%lu plen=%lu)",
      (unsigned long) FUNC_11(VAR_9),
      (unsigned long) VAR_11);
  return;
 }

 VAR_8->reqId = VAR_10->identifier;

 if (VAR_8->workaround) {
  const u8 *VAR_13[1];
  VAR_13[0] = FUNC_10(VAR_9);
  FUNC_7(1, VAR_13, &VAR_11, VAR_8->req_sha1);
 }

 switch (VAR_10->code) {
 case 130:
  if (VAR_11 < sizeof(*VAR_10) + 1) {
   FUNC_9(VAR_5, "EAP: Too short EAP-Request - "
       "no Type field");
   return;
  }
  VAR_8->rxReq = VAR_7;
  VAR_12 = (const u8 *) (VAR_10 + 1);
  VAR_8->reqMethod = *VAR_12++;
  if (VAR_8->reqMethod == VAR_0) {
   if (VAR_11 < sizeof(*VAR_10) + 8) {
    FUNC_9(VAR_5, "EAP: Ignored truncated "
        "expanded EAP-Packet (plen=%lu)",
        (unsigned long) VAR_11);
    return;
   }
   VAR_8->reqVendor = FUNC_0(VAR_12);
   VAR_12 += 3;
   VAR_8->reqVendorMethod = FUNC_1(VAR_12);
  }
  FUNC_9(VAR_5, "EAP: Received EAP-Request id=%d "
      "method=%u vendor=%u vendorMethod=%u",
      VAR_8->reqId, VAR_8->reqMethod, VAR_8->reqVendor,
      VAR_8->reqVendorMethod);
  break;
 case 129:
  if (VAR_8->selectedMethod == VAR_1) {





   if (VAR_11 < sizeof(*VAR_10) + 1) {
    FUNC_9(VAR_5, "EAP: Too short "
        "EAP-Response - no Type field");
    return;
   }
   VAR_8->rxResp = VAR_7;
   VAR_12 = (const u8 *) (VAR_10 + 1);
   VAR_8->reqMethod = *VAR_12;
   FUNC_9(VAR_5, "EAP: Received EAP-Response for "
       "LEAP method=%d id=%d",
       VAR_8->reqMethod, VAR_8->reqId);
   break;
  }
  FUNC_9(VAR_5, "EAP: Ignored EAP-Response");
  break;
 case 128:
  FUNC_9(VAR_5, "EAP: Received EAP-Success");
  FUNC_3(VAR_8, "completion", "success");
  VAR_8->rxSuccess = VAR_7;
  break;
 case 133:
  FUNC_9(VAR_5, "EAP: Received EAP-Failure");
  FUNC_3(VAR_8, "completion", "failure");


  if (VAR_8->m && VAR_8->m->get_error_code) {
   int VAR_14;

   VAR_14 = VAR_8->m->get_error_code(VAR_8->eap_method_priv);
   if (VAR_14 != VAR_6)
    FUNC_6(VAR_8, VAR_14);
  }
  VAR_8->rxFailure = VAR_7;
  break;
 case 131:
  FUNC_5(VAR_8, VAR_10, VAR_11);
  break;
 case 132:
  FUNC_4(VAR_8, VAR_10, VAR_11);
  break;
 default:
  FUNC_9(VAR_5, "EAP: Ignored EAP-Packet with unknown "
      "code %d", VAR_10->code);
  break;
 }
}
