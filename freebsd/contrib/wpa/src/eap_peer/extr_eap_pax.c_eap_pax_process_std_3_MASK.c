
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const u8 ;
struct wpabuf {int dummy; } ;
struct eap_pax_hdr {int flags; } ;
struct TYPE_3__ {int y; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct eap_pax_data {scalar_t__ state; int ick; int mac_id; int cid_len; scalar_t__ cid; TYPE_2__ rand; int ck; } ;
struct eap_method_ret {int allowNotifications; void* decision; void* methodState; void* ignore; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 int FUNC_0 (int const*) ;
 struct wpabuf* FUNC_1 (struct eap_pax_hdr const*,int const,int ,size_t) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,scalar_t__,int const*,int ,int *,int ,int const*) ;
 scalar_t__ FUNC_3 (int const*,int const*,int) ;
 int FUNC_4 (int ,char*,int const*,size_t) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;
 scalar_t__ FUNC_8 (struct wpabuf*) ;
 int const* FUNC_9 (struct wpabuf*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_10(struct eap_pax_data *VAR_17,
          struct eap_method_ret *VAR_18, u8 VAR_19,
          const struct eap_pax_hdr *VAR_20,
          size_t VAR_21)
{
 struct wpabuf *VAR_22;
 u8 *VAR_23, VAR_24[VAR_6];
 const u8 *VAR_25;
 size_t VAR_26;

 FUNC_5(VAR_11, "EAP-PAX: PAX_STD-3 (received)");

 if (VAR_17->state != VAR_15) {
  FUNC_5(VAR_12, "EAP-PAX: PAX_STD-3 received in "
      "unexpected state (%d) - ignored", VAR_17->state);
  VAR_18->ignore = VAR_16;
  return ((void*)0);
 }

 if (VAR_20->flags & VAR_3) {
  FUNC_5(VAR_12, "EAP-PAX: PAX_STD-3 with CE flag set - "
      "ignored");
  VAR_18->ignore = VAR_16;
  return ((void*)0);
 }

 VAR_26 = VAR_21 - sizeof(*VAR_20);

 if (VAR_26 < 2 + VAR_6) {
  FUNC_5(VAR_12, "EAP-PAX: PAX_STD-3 with too short "
      "payload");
  VAR_18->ignore = VAR_16;
  return ((void*)0);
 }

 VAR_25 = (const u8 *) (VAR_20 + 1);
 if (FUNC_0(VAR_25) != VAR_6) {
  FUNC_5(VAR_12, "EAP-PAX: PAX_STD-3 with incorrect "
      "MAC_CK length %d (expected %d)",
      FUNC_0(VAR_25), VAR_6);
  VAR_18->ignore = VAR_16;
  return ((void*)0);
 }
 VAR_25 += 2;
 VAR_26 -= 2;
 FUNC_4(VAR_13, "EAP-PAX: MAC_CK(B, CID)",
      VAR_25, VAR_6);
 if (FUNC_2(VAR_17->mac_id, VAR_17->ck, VAR_2,
   VAR_17->rand.r.y, VAR_8,
   (u8 *) VAR_17->cid, VAR_17->cid_len, ((void*)0), 0, VAR_24) < 0) {
  FUNC_5(VAR_12,
      "EAP-PAX: Could not derive MAC_CK(B, CID)");
  VAR_18->methodState = VAR_10;
  VAR_18->decision = VAR_0;
  return ((void*)0);
 }

 if (FUNC_3(VAR_25, VAR_24, VAR_6) != 0) {
  FUNC_5(VAR_12, "EAP-PAX: Invalid MAC_CK(B, CID) "
      "received");
  FUNC_4(VAR_13, "EAP-PAX: expected MAC_CK(B, CID)",
       VAR_24, VAR_6);
  VAR_18->methodState = VAR_10;
  VAR_18->decision = VAR_0;
  return ((void*)0);
 }

 VAR_25 += VAR_6;
 VAR_26 -= VAR_6;

 if (VAR_26 > 0) {
  FUNC_4(VAR_13, "EAP-PAX: ignored extra payload",
       VAR_25, VAR_26);
 }

 FUNC_5(VAR_11, "EAP-PAX: PAX-ACK (sending)");

 VAR_22 = FUNC_1(VAR_20, VAR_19, VAR_7, VAR_5);
 if (VAR_22 == ((void*)0))
  return ((void*)0);



 VAR_23 = FUNC_9(VAR_22, VAR_5);
 if (FUNC_2(VAR_17->mac_id, VAR_17->ick, VAR_4,
   FUNC_7(VAR_22), FUNC_8(VAR_22) - VAR_5,
   ((void*)0), 0, ((void*)0), 0, VAR_23) < 0) {
  FUNC_6(VAR_22);
  return ((void*)0);
 }
 FUNC_4(VAR_13, "EAP-PAX: ICV", VAR_23, VAR_5);

 VAR_17->state = VAR_14;
 VAR_18->methodState = VAR_10;
 VAR_18->decision = VAR_1;
 VAR_18->allowNotifications = VAR_9;

 return VAR_22;
}
