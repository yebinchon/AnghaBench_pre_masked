
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sake_parse_attr {int serverid_len; scalar_t__ serverid; int rand_s; } ;
struct TYPE_2__ {int auth; } ;
struct eap_sake_data {scalar_t__ state; int peerid_len; scalar_t__ peerid; int serverid_len; int * serverid; scalar_t__ rand_p; scalar_t__ rand_s; TYPE_1__ tek; int emsk; int msk; int root_secret_b; int root_secret_a; } ;
struct eap_method_ret {int ignore; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct wpabuf*,int ,scalar_t__,int) ;
 struct wpabuf* FUNC_1 (struct eap_sake_data*,int ,size_t,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,int *,int ,scalar_t__,int,int,int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,scalar_t__,int *,int ,int ) ;
 scalar_t__ FUNC_4 (int const*,size_t,struct eap_sake_parse_attr*) ;
 int FUNC_5 (struct eap_sake_data*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,int ,int) ;
 int * FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (int ,char*,scalar_t__,int) ;
 int FUNC_11 (int ,char*,scalar_t__,int ) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (struct wpabuf*) ;
 int FUNC_14 (struct wpabuf*) ;
 int FUNC_15 (struct wpabuf*) ;
 int * FUNC_16 (struct wpabuf*,int) ;
 int FUNC_17 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_18(struct eap_sm *VAR_14,
        struct eap_sake_data *VAR_15,
        struct eap_method_ret *VAR_16,
        u8 VAR_17,
        const u8 *VAR_18,
        size_t VAR_19)
{
 struct eap_sake_parse_attr VAR_20;
 struct wpabuf *VAR_21;
 u8 *VAR_22;
 size_t VAR_23;

 if (VAR_15->state != VAR_8 && VAR_15->state != VAR_0) {
  FUNC_12(VAR_9, "EAP-SAKE: Request/Challenge received "
      "in unexpected state (%d)", VAR_15->state);
  VAR_16->ignore = VAR_13;
  return ((void*)0);
 }
 if (VAR_15->state == VAR_8)
  FUNC_5(VAR_15, VAR_0);

 FUNC_12(VAR_9, "EAP-SAKE: Received Request/Challenge");

 if (FUNC_4(VAR_18, VAR_19, &VAR_20))
  return ((void*)0);

 if (!VAR_20.rand_s) {
  FUNC_12(VAR_11, "EAP-SAKE: Request/Challenge did not "
      "include AT_RAND_S");
  return ((void*)0);
 }

 FUNC_7(VAR_15->rand_s, VAR_20.rand_s, VAR_6);
 FUNC_10(VAR_12, "EAP-SAKE: RAND_S (server rand)",
      VAR_15->rand_s, VAR_6);

 if (FUNC_9(VAR_15->rand_p, VAR_6)) {
  FUNC_12(VAR_10, "EAP-SAKE: Failed to get random data");
  return ((void*)0);
 }
 FUNC_10(VAR_12, "EAP-SAKE: RAND_P (peer rand)",
      VAR_15->rand_p, VAR_6);

 FUNC_6(VAR_15->serverid);
 VAR_15->serverid = ((void*)0);
 VAR_15->serverid_len = 0;
 if (VAR_20.serverid) {
  FUNC_11(VAR_12, "EAP-SAKE: SERVERID",
      VAR_20.serverid, VAR_20.serverid_len);
  VAR_15->serverid = FUNC_8(VAR_20.serverid, VAR_20.serverid_len);
  if (VAR_15->serverid == ((void*)0))
   return ((void*)0);
  VAR_15->serverid_len = VAR_20.serverid_len;
 }

 if (FUNC_3(VAR_15->root_secret_a, VAR_15->root_secret_b,
     VAR_15->rand_s, VAR_15->rand_p,
     (u8 *) &VAR_15->tek, VAR_15->msk,
     VAR_15->emsk) < 0) {
  FUNC_12(VAR_11, "EAP-SAKE: Failed to derive keys");
  return ((void*)0);
 }

 FUNC_12(VAR_9, "EAP-SAKE: Sending Response/Challenge");

 VAR_23 = 2 + VAR_6 + 2 + VAR_5;
 if (VAR_15->peerid)
  VAR_23 += 2 + VAR_15->peerid_len;
 VAR_21 = FUNC_1(VAR_15, VAR_17, VAR_23, VAR_7);
 if (VAR_21 == ((void*)0))
  return ((void*)0);

 FUNC_12(VAR_9, "EAP-SAKE: * AT_RAND_P");
 FUNC_0(VAR_21, VAR_4,
     VAR_15->rand_p, VAR_6);

 if (VAR_15->peerid) {
  FUNC_12(VAR_9, "EAP-SAKE: * AT_PEERID");
  FUNC_0(VAR_21, VAR_3,
      VAR_15->peerid, VAR_15->peerid_len);
 }

 FUNC_12(VAR_9, "EAP-SAKE: * AT_MIC_P");
 FUNC_17(VAR_21, VAR_2);
 FUNC_17(VAR_21, 2 + VAR_5);
 VAR_22 = FUNC_16(VAR_21, VAR_5);
 if (FUNC_2(VAR_15->tek.auth, VAR_15->rand_s, VAR_15->rand_p,
     VAR_15->serverid, VAR_15->serverid_len,
     VAR_15->peerid, VAR_15->peerid_len, 1,
     FUNC_14(VAR_21), FUNC_15(VAR_21), VAR_22,
     VAR_22)) {
  FUNC_12(VAR_11, "EAP-SAKE: Failed to compute MIC");
  FUNC_13(VAR_21);
  return ((void*)0);
 }

 FUNC_5(VAR_15, VAR_1);

 return VAR_21;
}
