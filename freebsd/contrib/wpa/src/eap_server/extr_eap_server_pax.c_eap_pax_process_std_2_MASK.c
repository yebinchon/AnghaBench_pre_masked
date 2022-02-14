
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {TYPE_4__* user; } ;
struct eap_pax_hdr {int dummy; } ;
struct TYPE_5__ {int const* y; int x; } ;
struct TYPE_6__ {TYPE_1__ r; int e; } ;
struct eap_pax_data {scalar_t__ state; size_t cid_len; int keys_set; int ick; int mac_id; int * cid; TYPE_2__ rand; int ck; int mid; int mk; int const* ak; } ;
struct TYPE_8__ {int password_len; int const* password; TYPE_3__* methods; } ;
struct TYPE_7__ {scalar_t__ vendor; scalar_t__ method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int const*) ;
 int const* FUNC_1 (scalar_t__,scalar_t__,struct wpabuf*,size_t*) ;
 scalar_t__ FUNC_2 (int ,int const*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int,int const*,int,int const*,int,int const*) ;
 scalar_t__ FUNC_4 (struct eap_sm*,int const*,int,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int const*,int const*,int) ;
 int FUNC_7 (int const*,int const*,int) ;
 int * FUNC_8 (int const*,size_t) ;
 int FUNC_9 (int ,char*,int const*,size_t) ;
 int FUNC_10 (int ,char*,int const*,int) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct wpabuf*) ;
 int FUNC_13 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_14(struct eap_sm *VAR_16,
      struct eap_pax_data *VAR_17,
      struct wpabuf *VAR_18)
{
 struct eap_pax_hdr *VAR_19;
 u8 VAR_20[VAR_5], VAR_21[VAR_4];
 const u8 *VAR_22;
 size_t VAR_23, VAR_24, VAR_25;
 int VAR_26;

 if (VAR_17->state != VAR_14)
  return;

 FUNC_11(VAR_11, "EAP-PAX: Received PAX_STD-2");

 VAR_22 = FUNC_1(VAR_9, VAR_8, VAR_18, &VAR_23);
 if (VAR_22 == ((void*)0) || VAR_23 < sizeof(*VAR_19) + VAR_4)
  return;

 VAR_19 = (struct eap_pax_hdr *) VAR_22;
 VAR_22 = (u8 *) (VAR_19 + 1);
 VAR_24 = VAR_23 - sizeof(*VAR_19);

 if (VAR_24 < 2 + VAR_6 ||
     FUNC_0(VAR_22) != VAR_6) {
  FUNC_11(VAR_12, "EAP-PAX: Too short PAX_STD-2 (B)");
  return;
 }
 VAR_22 += 2;
 VAR_24 -= 2;
 FUNC_7(VAR_17->rand.r.y, VAR_22, VAR_6);
 FUNC_9(VAR_13, "EAP-PAX: Y (client rand)",
      VAR_17->rand.r.y, VAR_6);
 VAR_22 += VAR_6;
 VAR_24 -= VAR_6;

 if (VAR_24 < 2 || (size_t) 2 + FUNC_0(VAR_22) > VAR_24) {
  FUNC_11(VAR_12, "EAP-PAX: Too short PAX_STD-2 (CID)");
  return;
 }
 VAR_25 = FUNC_0(VAR_22);
 if (VAR_25 > 1500) {
  FUNC_11(VAR_12, "EAP-PAX: Too long CID");
  return;
 }
 VAR_17->cid_len = VAR_25;
 FUNC_5(VAR_17->cid);
 VAR_17->cid = FUNC_8(VAR_22 + 2, VAR_17->cid_len);
 if (VAR_17->cid == ((void*)0)) {
  FUNC_11(VAR_12, "EAP-PAX: Failed to allocate memory for "
      "CID");
  return;
 }
 VAR_22 += 2 + VAR_17->cid_len;
 VAR_24 -= 2 + VAR_17->cid_len;
 FUNC_10(VAR_13, "EAP-PAX: CID",
     (u8 *) VAR_17->cid, VAR_17->cid_len);

 if (VAR_24 < 2 + VAR_5 ||
     FUNC_0(VAR_22) != VAR_5) {
  FUNC_11(VAR_12, "EAP-PAX: Too short PAX_STD-2 (MAC_CK)");
  return;
 }
 VAR_22 += 2;
 VAR_24 -= 2;
 FUNC_9(VAR_13, "EAP-PAX: MAC_CK(A, B, CID)",
      VAR_22, VAR_5);

 if (FUNC_4(VAR_16, (u8 *) VAR_17->cid, VAR_17->cid_len, 0) < 0) {
  FUNC_10(VAR_11, "EAP-PAX: unknown CID",
      (u8 *) VAR_17->cid, VAR_17->cid_len);
  VAR_17->state = VAR_10;
  return;
 }

 for (VAR_26 = 0;
      VAR_26 < VAR_0 &&
       (VAR_16->user->methods[VAR_26].vendor != VAR_9 ||
        VAR_16->user->methods[VAR_26].method != VAR_7);
      VAR_26++) {
  if (VAR_16->user->methods[VAR_26].vendor == VAR_9 &&
      VAR_16->user->methods[VAR_26].method == VAR_8)
   break;
 }

 if (VAR_26 >= VAR_0 ||
     VAR_16->user->methods[VAR_26].vendor != VAR_9 ||
     VAR_16->user->methods[VAR_26].method != VAR_8) {
  FUNC_10(VAR_11,
      "EAP-PAX: EAP-PAX not enabled for CID",
      (u8 *) VAR_17->cid, VAR_17->cid_len);
  VAR_17->state = VAR_10;
  return;
 }

 if (VAR_16->user->password == ((void*)0) ||
     VAR_16->user->password_len != VAR_1) {
  FUNC_10(VAR_11, "EAP-PAX: invalid password in "
      "user database for CID",
      (u8 *) VAR_17->cid, VAR_17->cid_len);
  VAR_17->state = VAR_10;
  return;
 }
 FUNC_7(VAR_17->ak, VAR_16->user->password, VAR_1);

 if (FUNC_2(VAR_17->mac_id, VAR_17->ak,
        VAR_17->rand.e, VAR_17->mk, VAR_17->ck,
        VAR_17->ick, VAR_17->mid) < 0) {
  FUNC_11(VAR_12, "EAP-PAX: Failed to complete initial "
      "key derivation");
  VAR_17->state = VAR_10;
  return;
 }
 VAR_17->keys_set = 1;

 if (FUNC_3(VAR_17->mac_id, VAR_17->ck, VAR_2,
   VAR_17->rand.r.x, VAR_6,
   VAR_17->rand.r.y, VAR_6,
   (u8 *) VAR_17->cid, VAR_17->cid_len, VAR_20) < 0) {
  FUNC_11(VAR_12, "EAP-PAX: Failed to calculate MAC_CK");
  VAR_17->state = VAR_10;
  return;
 }

 if (FUNC_6(VAR_20, VAR_22, VAR_5) != 0) {
  FUNC_11(VAR_12, "EAP-PAX: Invalid MAC_CK(A, B, CID) in "
      "PAX_STD-2");
  FUNC_9(VAR_13, "EAP-PAX: Expected MAC_CK(A, B, CID)",
       VAR_20, VAR_5);
  VAR_17->state = VAR_10;
  return;
 }

 VAR_22 += VAR_5;
 VAR_24 -= VAR_5;

 if (VAR_24 < VAR_4) {
  FUNC_11(VAR_12, "EAP-PAX: Too short ICV (%lu) in "
      "PAX_STD-2", (unsigned long) VAR_24);
  return;
 }
 FUNC_9(VAR_13, "EAP-PAX: ICV", VAR_22, VAR_4);
 if (FUNC_3(VAR_17->mac_id, VAR_17->ick, VAR_3,
   FUNC_12(VAR_18),
   FUNC_13(VAR_18) - VAR_4, ((void*)0), 0,
   ((void*)0), 0, VAR_21) < 0) {
  FUNC_11(VAR_12, "EAP-PAX: Failed to calculate ICV");
  return;
 }

 if (FUNC_6(VAR_21, VAR_22, VAR_4) != 0) {
  FUNC_11(VAR_12, "EAP-PAX: Invalid ICV in PAX_STD-2");
  FUNC_9(VAR_13, "EAP-PAX: Expected ICV",
       VAR_21, VAR_4);
  return;
 }
 VAR_22 += VAR_4;
 VAR_24 -= VAR_4;

 if (VAR_24 > 0) {
  FUNC_9(VAR_13, "EAP-PAX: ignored extra payload",
       VAR_22, VAR_24);
 }

 VAR_17->state = VAR_15;
}
