
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef struct wpabuf const wpabuf ;
struct eap_method_ret {int dummy; } ;
struct eap_eke_data {scalar_t__ state; scalar_t__ const dhgroup; scalar_t__ const encr; scalar_t__ const prf; scalar_t__ const mac; int serverid_len; int peerid_len; scalar_t__ const* peerid; struct wpabuf const* msgs; int * serverid; int sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct wpabuf const* FUNC_0 (struct eap_eke_data*,struct eap_method_ret*,scalar_t__,int ) ;
 struct wpabuf const* FUNC_1 (struct eap_eke_data*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const) ;
 int FUNC_3 (struct eap_eke_data*,int ) ;
 int FUNC_4 (scalar_t__ const) ;
 int FUNC_5 (scalar_t__ const) ;
 int FUNC_6 (scalar_t__ const) ;
 int FUNC_7 (scalar_t__ const) ;
 scalar_t__ FUNC_8 (struct wpabuf const*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (scalar_t__ const*,int) ;
 int FUNC_11 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_12 (int ,char*,...) ;
 struct wpabuf const* FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct wpabuf const*) ;
 scalar_t__ FUNC_15 (struct wpabuf const*) ;
 int FUNC_16 (struct wpabuf const*,struct wpabuf const*) ;
 int FUNC_17 (struct wpabuf const*,scalar_t__ const*,int) ;
 int FUNC_18 (struct wpabuf const*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_19(struct eap_eke_data *VAR_8,
       struct eap_method_ret *VAR_9,
       const struct wpabuf *VAR_10,
       const u8 *VAR_11,
       size_t VAR_12)
{
 struct wpabuf *VAR_13;
 unsigned VAR_14, VAR_15;
 const u8 *VAR_16, *VAR_17;
 const u8 *VAR_18 = ((void*)0);
 u8 VAR_19;
 u8 VAR_20 = FUNC_8(VAR_10);

 if (VAR_8->state != VAR_6) {
  return FUNC_0(VAR_8, VAR_9, VAR_20,
       VAR_3);
 }

 FUNC_12(VAR_7, "EAP-EKE: Received EAP-EKE-ID/Request");

 if (VAR_12 < 2 + 4) {
  FUNC_12(VAR_7, "EAP-EKE: Too short ID/Request Data");
  return FUNC_0(VAR_8, VAR_9, VAR_20,
       VAR_3);
 }

 VAR_16 = VAR_11;
 VAR_17 = VAR_11 + VAR_12;

 VAR_14 = *VAR_16++;
 VAR_16++;

 if (VAR_16 + VAR_14 * 4 > VAR_17) {
  FUNC_12(VAR_7, "EAP-EKE: Too short ID/Request Data (num_prop=%u)",
      VAR_14);
  return FUNC_0(VAR_8, VAR_9, VAR_20,
       VAR_3);
 }

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  const u8 *VAR_21 = VAR_16;

  FUNC_12(VAR_7, "EAP-EKE: Proposal #%u: dh=%u encr=%u prf=%u mac=%u",
      VAR_15, VAR_16[0], VAR_16[1], VAR_16[2], VAR_16[3]);
  VAR_16 += 4;

  if ((VAR_8->dhgroup && VAR_8->dhgroup != *VAR_21) ||
      !FUNC_4(*VAR_21))
   continue;
  VAR_21++;
  if ((VAR_8->encr && VAR_8->encr != *VAR_21) ||
      !FUNC_5(*VAR_21))
   continue;
  VAR_21++;
  if ((VAR_8->prf && VAR_8->prf != *VAR_21) ||
      !FUNC_7(*VAR_21))
   continue;
  VAR_21++;
  if ((VAR_8->mac && VAR_8->mac != *VAR_21) ||
      !FUNC_6(*VAR_21))
   continue;

  VAR_18 = VAR_21 - 3;
  if (FUNC_2(&VAR_8->sess, VAR_18[0], VAR_18[1], VAR_18[2],
      VAR_18[3]) < 0) {
   VAR_18 = ((void*)0);
   continue;
  }

  FUNC_12(VAR_7, "EAP-EKE: Selected proposal");
  break;
 }

 if (VAR_18 == ((void*)0)) {
  FUNC_12(VAR_7, "EAP-EKE: No acceptable proposal found");
  return FUNC_0(VAR_8, VAR_9, VAR_20,
       VAR_1);
 }

 VAR_16 += (VAR_14 - VAR_15 - 1) * 4;

 if (VAR_16 == VAR_17) {
  FUNC_12(VAR_7, "EAP-EKE: Too short ID/Request Data to include IDType/Identity");
  return FUNC_0(VAR_8, VAR_9, VAR_20,
       VAR_3);
 }

 VAR_19 = *VAR_16++;
 FUNC_12(VAR_7, "EAP-EKE: Server IDType %u", VAR_19);
 FUNC_11(VAR_7, "EAP-EKE: Server Identity",
     VAR_16, VAR_17 - VAR_16);
 FUNC_9(VAR_8->serverid);
 VAR_8->serverid = FUNC_10(VAR_16, VAR_17 - VAR_16);
 if (VAR_8->serverid == ((void*)0)) {
  return FUNC_0(VAR_8, VAR_9, VAR_20,
       VAR_2);
 }
 VAR_8->serverid_len = VAR_17 - VAR_16;

 FUNC_12(VAR_7, "EAP-EKE: Sending EAP-EKE-ID/Response");

 VAR_13 = FUNC_1(VAR_8, VAR_20,
     2 + 4 + 1 + VAR_8->peerid_len,
     VAR_4);
 if (VAR_13 == ((void*)0)) {
  return FUNC_0(VAR_8, VAR_9, VAR_20,
       VAR_2);
 }

 FUNC_18(VAR_13, 1);
 FUNC_18(VAR_13, 0);
 FUNC_17(VAR_13, VAR_18, 4);
 FUNC_18(VAR_13, VAR_5);
 if (VAR_8->peerid)
  FUNC_17(VAR_13, VAR_8->peerid, VAR_8->peerid_len);

 FUNC_14(VAR_8->msgs);
 VAR_8->msgs = FUNC_13(FUNC_15(VAR_10) + FUNC_15(VAR_13));
 if (VAR_8->msgs == ((void*)0)) {
  FUNC_14(VAR_13);
  return FUNC_0(VAR_8, VAR_9, VAR_20,
       VAR_2);
 }
 FUNC_16(VAR_8->msgs, VAR_10);
 FUNC_16(VAR_8->msgs, VAR_13);

 FUNC_3(VAR_8, VAR_0);

 return VAR_13;
}
