
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_pax_hdr {int public_key_id; int dh_group_id; int mac_id; scalar_t__ flags; int op_code; } ;
struct TYPE_3__ {int y; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct eap_pax_data {void* state; int ick; int mac_id; int cid_len; scalar_t__ cid; TYPE_2__ rand; int ck; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct wpabuf* FUNC_0 (int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,scalar_t__,int *,int ,int *,int ,int *) ;
 int FUNC_2 (int ,char*,int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;
 void* FUNC_7 (struct wpabuf*,int) ;
 int FUNC_8 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct eap_sm *VAR_15,
        struct eap_pax_data *VAR_16, u8 VAR_17)
{
 struct wpabuf *VAR_18;
 struct eap_pax_hdr *VAR_19;
 u8 *VAR_20;

 FUNC_3(VAR_12, "EAP-PAX: PAX_STD-3 (sending)");

 VAR_18 = FUNC_0(VAR_10, VAR_9,
       sizeof(*VAR_19) + 2 + VAR_5 +
       VAR_4, VAR_0, VAR_17);
 if (VAR_18 == ((void*)0)) {
  FUNC_3(VAR_13, "EAP-PAX: Failed to allocate memory "
      "request");
  VAR_16->state = VAR_11;
  return ((void*)0);
 }

 VAR_19 = FUNC_7(VAR_18, sizeof(*VAR_19));
 VAR_19->op_code = VAR_6;
 VAR_19->flags = 0;
 VAR_19->mac_id = VAR_16->mac_id;
 VAR_19->dh_group_id = VAR_2;
 VAR_19->public_key_id = VAR_7;

 FUNC_8(VAR_18, VAR_5);
 VAR_20 = FUNC_7(VAR_18, VAR_5);
 if (FUNC_1(VAR_16->mac_id, VAR_16->ck, VAR_1,
   VAR_16->rand.r.y, VAR_8,
   (u8 *) VAR_16->cid, VAR_16->cid_len, ((void*)0), 0, VAR_20) < 0) {
  FUNC_3(VAR_13, "EAP-PAX: Failed to calculate MAC");
  VAR_16->state = VAR_11;
  FUNC_4(VAR_18);
  return ((void*)0);
 }
 FUNC_2(VAR_14, "EAP-PAX: MAC_CK(B, CID)",
      VAR_20, VAR_5);



 VAR_20 = FUNC_7(VAR_18, VAR_5);
 if (FUNC_1(VAR_16->mac_id, VAR_16->ick, VAR_3,
   FUNC_6(VAR_18), FUNC_5(VAR_18) - VAR_4,
   ((void*)0), 0, ((void*)0), 0, VAR_20) < 0) {
  FUNC_3(VAR_13, "EAP-PAX: Failed to calculate ICV");
  VAR_16->state = VAR_11;
  FUNC_4(VAR_18);
  return ((void*)0);
 }
 FUNC_2(VAR_14, "EAP-PAX: ICV", VAR_20, VAR_4);

 return VAR_18;
}
