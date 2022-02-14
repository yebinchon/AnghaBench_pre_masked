
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int dh; } ;
struct ikev2_responder_data {int error_type; TYPE_1__ proposal; } ;
struct ikev2_payload_hdr {int payload_length; scalar_t__ flags; int next_payload; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,char*,...) ;
 struct ikev2_payload_hdr* FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*,int) ;
 int FUNC_4 (struct wpabuf*,int ) ;

__attribute__((used)) static int FUNC_5(struct ikev2_responder_data *VAR_2,
        struct wpabuf *VAR_3, u8 VAR_4)
{
 struct ikev2_payload_hdr *VAR_5;
 size_t VAR_6;

 FUNC_1(VAR_0, "IKEV2: Adding Notification payload");

 if (VAR_2->error_type == 0) {
  FUNC_1(VAR_1, "IKEV2: No Notify Message Type "
      "available");
  return -1;
 }


 VAR_5 = FUNC_2(VAR_3, sizeof(*VAR_5));
 VAR_5->next_payload = VAR_4;
 VAR_5->flags = 0;
 FUNC_4(VAR_3, 0);
 FUNC_4(VAR_3, 0);
 FUNC_3(VAR_3, VAR_2->error_type);

 switch (VAR_2->error_type) {
 case 128:
  if (VAR_2->proposal.dh == -1) {
   FUNC_1(VAR_1, "IKEV2: No DH Group selected for "
       "INVALID_KE_PAYLOAD notifications");
   return -1;
  }
  FUNC_3(VAR_3, VAR_2->proposal.dh);
  FUNC_1(VAR_0, "IKEV2: INVALID_KE_PAYLOAD - request "
      "DH Group #%d", VAR_2->proposal.dh);
  break;
 case 129:

  break;
 default:
  FUNC_1(VAR_1, "IKEV2: Unsupported Notify Message Type "
      "%d", VAR_2->error_type);
  return -1;
 }

 VAR_6 = (u8 *) FUNC_2(VAR_3, 0) - (u8 *) VAR_5;
 FUNC_0(VAR_5->payload_length, VAR_6);
 return 0;
}
