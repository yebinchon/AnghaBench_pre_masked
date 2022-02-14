
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
typedef int timestamp ;
struct sta_info {int addr; scalar_t__ roaming_consortium; scalar_t__ hs20_ie; struct eapol_state_machine* eapol_sm; } ;
struct radius_msg {int dummy; } ;
struct hostapd_data {int radius; TYPE_1__* conf; } ;
struct eapol_state_machine {int const* identity; size_t identity_len; scalar_t__ radius_cui; scalar_t__ last_recv_radius; int radius_identifier; } ;
typedef int buf ;
typedef int be32 ;
struct TYPE_4__ {scalar_t__ code; } ;
struct TYPE_3__ {int hs20_release; int t_c_timestamp; scalar_t__ t_c_filename; scalar_t__ hs20; scalar_t__ radius_request_cui; int radius_auth_req_attr; } ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct hostapd_data*,int ,struct sta_info*,struct radius_msg*) ;
 scalar_t__ FUNC_3 (struct hostapd_data*,struct sta_info*,struct radius_msg*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct hostapd_data*,struct eapol_state_machine*,int const*,size_t) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,struct radius_msg*,int ,int ) ;
 int FUNC_10 (struct radius_msg*,int ,int const*,size_t) ;
 int FUNC_11 (struct radius_msg*,int ,int) ;
 int FUNC_12 (struct radius_msg*,int const*,size_t) ;
 int FUNC_13 (struct radius_msg*,int ,int const*,int) ;
 int FUNC_14 (struct radius_msg*,scalar_t__,int ) ;
 int FUNC_15 (struct radius_msg*) ;
 TYPE_2__* FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (struct radius_msg*) ;
 struct radius_msg* FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,char*) ;
 int const* FUNC_20 (scalar_t__) ;
 int* FUNC_21 (scalar_t__) ;
 int FUNC_22 (scalar_t__) ;

void FUNC_23(struct hostapd_data *VAR_16,
       struct sta_info *VAR_17,
       const u8 *VAR_18, size_t VAR_19)
{
 struct radius_msg *VAR_20;
 struct eapol_state_machine *VAR_21 = VAR_17->eapol_sm;

 if (VAR_21 == ((void*)0))
  return;

 FUNC_6(VAR_16, VAR_21, VAR_18, VAR_19);

 FUNC_19(VAR_1, "Encapsulating EAP message into a RADIUS "
     "packet");

 VAR_21->radius_identifier = FUNC_8(VAR_16->radius);
 VAR_20 = FUNC_18(VAR_10,
        VAR_21->radius_identifier);
 if (VAR_20 == ((void*)0)) {
  FUNC_19(VAR_3, "Could not create new RADIUS packet");
  return;
 }

 if (FUNC_17(VAR_20) < 0) {
  FUNC_19(VAR_3, "Could not make Request Authenticator");
  goto fail;
 }

 if (VAR_21->identity &&
     !FUNC_10(VAR_20, VAR_7,
     VAR_21->identity, VAR_21->identity_len)) {
  FUNC_19(VAR_3, "Could not add User-Name");
  goto fail;
 }

 if (FUNC_2(VAR_16, VAR_16->conf->radius_auth_req_attr, VAR_17,
       VAR_20) < 0)
  goto fail;

 if (VAR_17 && FUNC_3(VAR_16, VAR_17, VAR_20, 0) < 0)
  goto fail;




 if (!FUNC_5(VAR_16->conf->radius_auth_req_attr,
         VAR_5) &&
     !FUNC_11(VAR_20, VAR_5, 1400)) {
  FUNC_19(VAR_3, "Could not add Framed-MTU");
  goto fail;
 }

 if (!FUNC_12(VAR_20, VAR_18, VAR_19)) {
  FUNC_19(VAR_3, "Could not add EAP-Message");
  goto fail;
 }



 if (VAR_21->last_recv_radius &&
     FUNC_16(VAR_21->last_recv_radius)->code ==
     VAR_9) {
  int VAR_22 = FUNC_14(VAR_20, VAR_21->last_recv_radius,
            VAR_6);
  if (VAR_22 < 0) {
   FUNC_19(VAR_3, "Could not copy State attribute from previous Access-Challenge");
   goto fail;
  }
  if (VAR_22 > 0) {
   FUNC_19(VAR_1, "Copied RADIUS State Attribute");
  }
 }

 if (VAR_16->conf->radius_request_cui) {
  const u8 *VAR_23;
  size_t VAR_24;

  if (VAR_21->radius_cui) {
   VAR_23 = FUNC_20(VAR_21->radius_cui);
   VAR_24 = FUNC_22(VAR_21->radius_cui);
  } else {
   VAR_23 = (const u8 *) "\0";
   VAR_24 = 1;
  }
  if (!FUNC_10(VAR_20,
      VAR_4,
      VAR_23, VAR_24)) {
   FUNC_19(VAR_2, "Could not add CUI");
   goto fail;
  }
 }
 if (FUNC_9(VAR_16->radius, VAR_20, VAR_8, VAR_17->addr) < 0)
  goto fail;

 return;

 fail:
 FUNC_15(VAR_20);
}
