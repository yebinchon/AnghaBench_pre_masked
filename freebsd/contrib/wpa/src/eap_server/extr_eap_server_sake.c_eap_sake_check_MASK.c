
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sake_hdr {scalar_t__ version; scalar_t__ session_id; scalar_t__ subtype; } ;
struct eap_sake_data {scalar_t__ session_id; scalar_t__ state; } ;
typedef int Boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__* FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static Boolean FUNC_2(struct eap_sm *VAR_14, void *VAR_15,
         struct wpabuf *VAR_16)
{
 struct eap_sake_data *VAR_17 = VAR_15;
 struct eap_sake_hdr *VAR_18;
 size_t VAR_19;
 u8 VAR_20, VAR_21, VAR_22;
 const u8 *VAR_23;

 VAR_23 = FUNC_0(VAR_8, VAR_7, VAR_16, &VAR_19);
 if (VAR_23 == ((void*)0) || VAR_19 < sizeof(struct eap_sake_hdr)) {
  FUNC_1(VAR_12, "EAP-SAKE: Invalid frame");
  return VAR_13;
 }

 VAR_18 = (struct eap_sake_hdr *) VAR_23;
 VAR_20 = VAR_18->version;
 VAR_21 = VAR_18->session_id;
 VAR_22 = VAR_18->subtype;

 if (VAR_20 != VAR_6) {
  FUNC_1(VAR_12, "EAP-SAKE: Unknown version %d", VAR_20);
  return VAR_13;
 }

 if (VAR_21 != VAR_17->session_id) {
  FUNC_1(VAR_12, "EAP-SAKE: Session ID mismatch (%d,%d)",
      VAR_21, VAR_17->session_id);
  return VAR_13;
 }

 FUNC_1(VAR_11, "EAP-SAKE: Received frame: subtype=%d", VAR_22);

 if (VAR_17->state == VAR_10 && VAR_22 == VAR_5)
  return VAR_9;

 if (VAR_17->state == VAR_0 && VAR_22 == VAR_3)
  return VAR_9;

 if (VAR_17->state == VAR_1 && VAR_22 == VAR_4)
  return VAR_9;

 if (VAR_22 == VAR_2)
  return VAR_9;

 FUNC_1(VAR_12, "EAP-SAKE: Unexpected subtype=%d in state=%d",
     VAR_22, VAR_17->state);

 return VAR_13;
}
