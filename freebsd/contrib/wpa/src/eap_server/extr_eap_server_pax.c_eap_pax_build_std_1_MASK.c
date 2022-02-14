
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
struct TYPE_3__ {int * x; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct eap_pax_data {void* state; int mac_id; TYPE_2__ rand; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct wpabuf* FUNC_0 (int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ,scalar_t__,int *,int ,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,char*,int *,scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;
 void* FUNC_8 (struct wpabuf*,int) ;
 int FUNC_9 (struct wpabuf*,scalar_t__) ;
 int FUNC_10 (struct wpabuf*,int *,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_11(struct eap_sm *VAR_13,
        struct eap_pax_data *VAR_14, u8 VAR_15)
{
 struct wpabuf *VAR_16;
 struct eap_pax_hdr *VAR_17;
 u8 *VAR_18;

 FUNC_4(VAR_10, "EAP-PAX: PAX_STD-1 (sending)");

 if (FUNC_2(VAR_14->rand.r.x, VAR_6)) {
  FUNC_4(VAR_11, "EAP-PAX: Failed to get random data");
  VAR_14->state = VAR_9;
  return ((void*)0);
 }

 VAR_16 = FUNC_0(VAR_8, VAR_7,
       sizeof(*VAR_17) + 2 + VAR_6 +
       VAR_2, VAR_0, VAR_15);
 if (VAR_16 == ((void*)0)) {
  FUNC_4(VAR_11, "EAP-PAX: Failed to allocate memory "
      "request");
  VAR_14->state = VAR_9;
  return ((void*)0);
 }

 VAR_17 = FUNC_8(VAR_16, sizeof(*VAR_17));
 VAR_17->op_code = VAR_4;
 VAR_17->flags = 0;
 VAR_17->mac_id = VAR_14->mac_id;
 VAR_17->dh_group_id = VAR_1;
 VAR_17->public_key_id = VAR_5;

 FUNC_9(VAR_16, VAR_6);
 FUNC_10(VAR_16, VAR_14->rand.r.x, VAR_6);
 FUNC_3(VAR_12, "EAP-PAX: A = X (server rand)",
      VAR_14->rand.r.x, VAR_6);

 VAR_18 = FUNC_8(VAR_16, VAR_3);
 if (FUNC_1(VAR_14->mac_id, (u8 *) "", 0,
   FUNC_7(VAR_16), FUNC_6(VAR_16) - VAR_2,
   ((void*)0), 0, ((void*)0), 0, VAR_18) < 0) {
  FUNC_4(VAR_11, "EAP-PAX: Failed to calculate ICV");
  VAR_14->state = VAR_9;
  FUNC_5(VAR_16);
  return ((void*)0);
 }
 FUNC_3(VAR_12, "EAP-PAX: ICV", VAR_18, VAR_2);

 return VAR_16;
}
