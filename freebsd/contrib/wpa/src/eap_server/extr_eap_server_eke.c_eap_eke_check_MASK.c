
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_eke_data {scalar_t__ state; } ;
typedef int Boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__* FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static Boolean FUNC_2(struct eap_sm *VAR_13, void *VAR_14,
        struct wpabuf *VAR_15)
{
 struct eap_eke_data *VAR_16 = VAR_14;
 size_t VAR_17;
 const u8 *VAR_18;
 u8 VAR_19;

 VAR_18 = FUNC_0(VAR_7, VAR_6, VAR_15, &VAR_17);
 if (VAR_18 == ((void*)0) || VAR_17 < 1) {
  FUNC_1(VAR_11, "EAP-EKE: Invalid frame");
  return VAR_12;
 }

 VAR_19 = *VAR_18;
 FUNC_1(VAR_10, "EAP-EKE: Received frame: EKE-Exch=%d", VAR_19);

 if (VAR_16->state == VAR_9 && VAR_19 == VAR_5)
  return VAR_8;

 if (VAR_16->state == VAR_0 && VAR_19 == VAR_2)
  return VAR_8;

 if (VAR_16->state == VAR_1 && VAR_19 == VAR_3)
  return VAR_8;

 if (VAR_19 == VAR_4)
  return VAR_8;

 FUNC_1(VAR_11, "EAP-EKE: Unexpected EKE-Exch=%d in state=%d",
     VAR_19, VAR_16->state);

 return VAR_12;
}
