
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const u8 ;
struct wpabuf {int dummy; } ;
struct eap_pax_hdr {int flags; int public_key_id; int dh_group_id; int mac_id; } ;
struct TYPE_3__ {int const* y; int const* x; } ;
struct TYPE_4__ {TYPE_1__ r; int e; } ;
struct eap_pax_data {scalar_t__ state; int cid_len; int public_key_id; int dh_group_id; int mac_id; int ick; int const* cid; TYPE_2__ rand; int ck; int mid; int mk; int ak; } ;
struct eap_method_ret {void* ignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 int FUNC_0 (int const*) ;
 struct wpabuf* FUNC_1 (struct eap_pax_hdr const*,int const,int ,size_t) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int const*,int,int const*,int,int const*,int,int const*) ;
 int FUNC_4 (int const*,int const*,int) ;
 scalar_t__ FUNC_5 (int const*,int) ;
 int FUNC_6 (int ,char*,int const*,int) ;
 int FUNC_7 (int ,char*,int const*,int) ;
 int FUNC_8 (int ,char*,...) ;
 int const* FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;
 int const* FUNC_11 (struct wpabuf*,int) ;
 int FUNC_12 (struct wpabuf*,int) ;
 int FUNC_13 (struct wpabuf*,int const*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_14(struct eap_pax_data *VAR_14,
          struct eap_method_ret *VAR_15, u8 VAR_16,
          const struct eap_pax_hdr *VAR_17,
          size_t VAR_18)
{
 struct wpabuf *VAR_19;
 const u8 *VAR_20;
 u8 *VAR_21;
 size_t VAR_22, VAR_23;

 FUNC_8(VAR_7, "EAP-PAX: PAX_STD-1 (received)");

 if (VAR_14->state != VAR_11) {
  FUNC_8(VAR_9, "EAP-PAX: PAX_STD-1 received in "
      "unexpected state (%d) - ignored", VAR_14->state);
  VAR_15->ignore = VAR_13;
  return ((void*)0);
 }

 if (VAR_17->flags & VAR_1) {
  FUNC_8(VAR_9, "EAP-PAX: PAX_STD-1 with CE flag set - "
      "ignored");
  VAR_15->ignore = VAR_13;
  return ((void*)0);
 }

 VAR_22 = VAR_18 - sizeof(*VAR_17);

 if (VAR_22 < 2 + VAR_6) {
  FUNC_8(VAR_9, "EAP-PAX: PAX_STD-1 with too short "
      "payload");
  VAR_15->ignore = VAR_13;
  return ((void*)0);
 }

 VAR_20 = (const u8 *) (VAR_17 + 1);
 if (FUNC_0(VAR_20) != VAR_6) {
  FUNC_8(VAR_9, "EAP-PAX: PAX_STD-1 with incorrect A "
      "length %d (expected %d)",
      FUNC_0(VAR_20), VAR_6);
  VAR_15->ignore = VAR_13;
  return ((void*)0);
 }

 VAR_20 += 2;
 VAR_22 -= 2;
 FUNC_4(VAR_14->rand.r.x, VAR_20, VAR_6);
 FUNC_6(VAR_10, "EAP-PAX: X (server rand)",
      VAR_14->rand.r.x, VAR_6);
 VAR_20 += VAR_6;
 VAR_22 -= VAR_6;

 if (VAR_22 > 0) {
  FUNC_6(VAR_10, "EAP-PAX: ignored extra payload",
       VAR_20, VAR_22);
 }

 if (FUNC_5(VAR_14->rand.r.y, VAR_6)) {
  FUNC_8(VAR_8, "EAP-PAX: Failed to get random data");
  VAR_15->ignore = VAR_13;
  return ((void*)0);
 }
 FUNC_6(VAR_10, "EAP-PAX: Y (client rand)",
      VAR_14->rand.r.y, VAR_6);

 if (FUNC_2(VAR_17->mac_id, VAR_14->ak, VAR_14->rand.e,
        VAR_14->mk, VAR_14->ck, VAR_14->ick,
        VAR_14->mid) < 0) {
  VAR_15->ignore = VAR_13;
  return ((void*)0);
 }

 FUNC_8(VAR_7, "EAP-PAX: PAX_STD-2 (sending)");

 VAR_23 = 2 + VAR_6 + 2 + VAR_14->cid_len + 2 + VAR_4 +
  VAR_3;
 VAR_19 = FUNC_1(VAR_17, VAR_16, VAR_5, VAR_23);
 if (VAR_19 == ((void*)0))
  return ((void*)0);

 FUNC_12(VAR_19, VAR_6);
 FUNC_13(VAR_19, VAR_14->rand.r.y, VAR_6);
 FUNC_6(VAR_10, "EAP-PAX: B = Y (client rand)",
      VAR_14->rand.r.y, VAR_6);

 FUNC_12(VAR_19, VAR_14->cid_len);
 FUNC_13(VAR_19, VAR_14->cid, VAR_14->cid_len);
 FUNC_7(VAR_10, "EAP-PAX: CID",
     (u8 *) VAR_14->cid, VAR_14->cid_len);

 FUNC_12(VAR_19, VAR_4);
 VAR_21 = FUNC_11(VAR_19, VAR_4);
 FUNC_3(VAR_17->mac_id, VAR_14->ck, VAR_0,
      VAR_14->rand.r.x, VAR_6,
      VAR_14->rand.r.y, VAR_6,
      (u8 *) VAR_14->cid, VAR_14->cid_len, VAR_21);
 FUNC_6(VAR_10, "EAP-PAX: MAC_CK(A, B, CID)",
      VAR_21, VAR_4);



 VAR_21 = FUNC_11(VAR_19, VAR_3);
 FUNC_3(VAR_17->mac_id, VAR_14->ick, VAR_2,
      FUNC_9(VAR_19), FUNC_10(VAR_19) - VAR_3,
      ((void*)0), 0, ((void*)0), 0, VAR_21);
 FUNC_6(VAR_10, "EAP-PAX: ICV", VAR_21, VAR_3);

 VAR_14->state = VAR_12;
 VAR_14->mac_id = VAR_17->mac_id;
 VAR_14->dh_group_id = VAR_17->dh_group_id;
 VAR_14->public_key_id = VAR_17->public_key_id;

 return VAR_19;
}
