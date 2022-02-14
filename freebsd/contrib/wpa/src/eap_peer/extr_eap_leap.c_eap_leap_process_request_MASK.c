
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {void* ignore; } ;
struct eap_leap_data {int state; int peer_response; int peer_challenge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ const VAR_4 ;
 scalar_t__ const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,scalar_t__ const*,scalar_t__*) ;
 scalar_t__* FUNC_1 (struct eap_sm*,size_t*) ;
 scalar_t__* FUNC_2 (struct eap_sm*,size_t*,int*) ;
 int FUNC_3 (struct wpabuf const*) ;
 scalar_t__* FUNC_4 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_5 (int ,int ,scalar_t__ const,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__ const*,scalar_t__ const*,size_t,scalar_t__*) ;
 int FUNC_7 (int ,scalar_t__ const*,scalar_t__ const) ;
 int FUNC_8 (int ,char*,scalar_t__ const*,scalar_t__ const) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct wpabuf*) ;
 scalar_t__ FUNC_11 (struct wpabuf const*) ;
 scalar_t__* FUNC_12 (struct wpabuf*,scalar_t__ const) ;
 int FUNC_13 (struct wpabuf*,scalar_t__ const*,size_t) ;
 int FUNC_14 (struct wpabuf*,scalar_t__ const) ;

__attribute__((used)) static struct wpabuf * FUNC_15(struct eap_sm *VAR_12, void *VAR_13,
      struct eap_method_ret *VAR_14,
      const struct wpabuf *VAR_15)
{
 struct eap_leap_data *VAR_16 = VAR_13;
 struct wpabuf *VAR_17;
 const u8 *VAR_18, *VAR_19, *VAR_20, *VAR_21;
 u8 VAR_22, *VAR_23;
 size_t VAR_24, VAR_25, VAR_26;
 int VAR_27;

 FUNC_9(VAR_7, "EAP-LEAP: Processing EAP-Request");

 VAR_20 = FUNC_1(VAR_12, &VAR_24);
 VAR_21 = FUNC_2(VAR_12, &VAR_25, &VAR_27);
 if (VAR_20 == ((void*)0) || VAR_21 == ((void*)0))
  return ((void*)0);

 VAR_18 = FUNC_4(VAR_2, VAR_1, VAR_15, &VAR_26);
 if (VAR_18 == ((void*)0) || VAR_26 < 3) {
  FUNC_9(VAR_8, "EAP-LEAP: Invalid EAP-Request frame");
  VAR_14->ignore = VAR_11;
  return ((void*)0);
 }

 if (*VAR_18 != VAR_5) {
  FUNC_9(VAR_10, "EAP-LEAP: Unsupported LEAP version "
      "%d", *VAR_18);
  VAR_14->ignore = VAR_11;
  return ((void*)0);
 }
 VAR_18++;

 VAR_18++;

 VAR_22 = *VAR_18++;
 if (VAR_22 != VAR_3 || VAR_22 > VAR_26 - 3) {
  FUNC_9(VAR_8, "EAP-LEAP: Invalid challenge "
      "(challenge_len=%d reqDataLen=%lu)",
      VAR_22, (unsigned long) FUNC_11(VAR_15));
  VAR_14->ignore = VAR_11;
  return ((void*)0);
 }
 VAR_19 = VAR_18;
 FUNC_7(VAR_16->peer_challenge, VAR_19, VAR_3);
 FUNC_8(VAR_9, "EAP-LEAP: Challenge from AP",
      VAR_19, VAR_3);

 FUNC_9(VAR_7, "EAP-LEAP: Generating Challenge Response");

 VAR_17 = FUNC_5(VAR_2, VAR_1,
        3 + VAR_4 + VAR_24,
        VAR_0, FUNC_3(VAR_15));
 if (VAR_17 == ((void*)0))
  return ((void*)0);
 FUNC_14(VAR_17, VAR_5);
 FUNC_14(VAR_17, 0);
 FUNC_14(VAR_17, VAR_4);
 VAR_23 = FUNC_12(VAR_17, VAR_4);
 if ((VAR_27 && FUNC_0(VAR_19, VAR_21, VAR_23)) ||
     (!VAR_27 &&
      FUNC_6(VAR_19, VAR_21, VAR_25, VAR_23))) {
  FUNC_9(VAR_7, "EAP-LEAP: Failed to derive response");
  VAR_14->ignore = VAR_11;
  FUNC_10(VAR_17);
  return ((void*)0);
 }
 FUNC_7(VAR_16->peer_response, VAR_23, VAR_4);
 FUNC_8(VAR_9, "EAP-LEAP: Response",
      VAR_23, VAR_4);
 FUNC_13(VAR_17, VAR_20, VAR_24);

 VAR_16->state = VAR_6;

 return VAR_17;
}
