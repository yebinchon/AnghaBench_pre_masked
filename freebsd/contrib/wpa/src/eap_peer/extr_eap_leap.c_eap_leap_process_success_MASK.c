
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {void* ignore; } ;
struct eap_leap_data {scalar_t__ state; int ap_challenge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int * FUNC_0 (struct eap_sm*,size_t*) ;
 int FUNC_1 (struct wpabuf const*) ;
 struct wpabuf* FUNC_2 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int ,char*,int *,scalar_t__) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct wpabuf*) ;
 int * FUNC_8 (struct wpabuf*,scalar_t__) ;
 int FUNC_9 (struct wpabuf*,int const*,size_t) ;
 int FUNC_10 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_11(struct eap_sm *VAR_12, void *VAR_13,
      struct eap_method_ret *VAR_14,
      const struct wpabuf *VAR_15)
{
 struct eap_leap_data *VAR_16 = VAR_13;
 struct wpabuf *VAR_17;
 u8 *VAR_18;
 const u8 *VAR_19;
 size_t VAR_20;

 FUNC_6(VAR_7, "EAP-LEAP: Processing EAP-Success");

 VAR_19 = FUNC_0(VAR_12, &VAR_20);
 if (VAR_19 == ((void*)0))
  return ((void*)0);

 if (VAR_16->state != VAR_6) {
  FUNC_6(VAR_8, "EAP-LEAP: EAP-Success received in "
      "unexpected state (%d) - ignored", VAR_16->state);
  VAR_14->ignore = VAR_11;
  return ((void*)0);
 }

 VAR_17 = FUNC_2(VAR_2, VAR_1,
        3 + VAR_3 + VAR_20,
        VAR_0, FUNC_1(VAR_15));
 if (VAR_17 == ((void*)0))
  return ((void*)0);
 FUNC_10(VAR_17, VAR_4);
 FUNC_10(VAR_17, 0);
 FUNC_10(VAR_17, VAR_3);
 VAR_18 = FUNC_8(VAR_17, VAR_3);
 if (FUNC_4(VAR_18, VAR_3)) {
  FUNC_6(VAR_10, "EAP-LEAP: Failed to read random data "
      "for challenge");
  FUNC_7(VAR_17);
  VAR_14->ignore = VAR_11;
  return ((void*)0);
 }
 FUNC_3(VAR_16->ap_challenge, VAR_18, VAR_3);
 FUNC_5(VAR_9, "EAP-LEAP: Challenge to AP/AS", VAR_18,
      VAR_3);
 FUNC_9(VAR_17, VAR_19, VAR_20);

 VAR_16->state = VAR_5;

 return VAR_17;
}
