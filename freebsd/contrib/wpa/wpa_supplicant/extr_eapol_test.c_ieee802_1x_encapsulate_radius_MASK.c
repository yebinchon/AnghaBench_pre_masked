
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct radius_msg {int dummy; } ;
struct eapol_test_data {scalar_t__* eap_identity; size_t eap_identity_len; TYPE_1__* wpa_s; int radius; int last_recv_radius; int extra_attrs; int connect_info; int own_ip_addr; scalar_t__ req_eap_key_name; int radius_identifier; } ;
struct eap_hdr {scalar_t__ code; } ;
typedef int buf ;
struct TYPE_4__ {scalar_t__ code; } ;
struct TYPE_3__ {int own_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 (struct radius_msg*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (size_t) ;
 int FUNC_5 (scalar_t__*,scalar_t__ const*,size_t) ;
 int FUNC_6 (char*,int,char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,struct radius_msg*,int ,int ) ;
 int FUNC_11 (struct radius_msg*,int ,scalar_t__*,int) ;
 int FUNC_12 (struct radius_msg*,int ,int) ;
 int FUNC_13 (struct radius_msg*,scalar_t__ const*,size_t) ;
 int FUNC_14 (struct radius_msg*,int ,int ) ;
 int FUNC_15 (struct radius_msg*) ;
 TYPE_2__* FUNC_16 (int ) ;
 int FUNC_17 (struct radius_msg*) ;
 struct radius_msg* FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,char*,scalar_t__*,size_t) ;
 int FUNC_20 (int ,char*) ;

__attribute__((used)) static void FUNC_21(struct eapol_test_data *VAR_19,
       const u8 *VAR_20, size_t VAR_21)
{
 struct radius_msg *VAR_22;
 char VAR_23[VAR_16 + 1];
 const struct eap_hdr *VAR_24;
 const u8 *VAR_25;

 FUNC_20(VAR_2, "Encapsulating EAP message into a RADIUS "
     "packet");

 VAR_19->radius_identifier = FUNC_9(VAR_19->radius);
 VAR_22 = FUNC_18(VAR_15,
        VAR_19->radius_identifier);
 if (VAR_22 == ((void*)0)) {
  FUNC_8("Could not create net RADIUS packet\n");
  return;
 }

 FUNC_17(VAR_22);

 VAR_24 = (const struct eap_hdr *) VAR_20;
 VAR_25 = (const u8 *) (VAR_24 + 1);
 if (VAR_21 > sizeof(*VAR_24) && VAR_24->code == VAR_0 &&
     VAR_25[0] == VAR_1) {
  VAR_25++;
  FUNC_3(VAR_19->eap_identity);
  VAR_19->eap_identity_len = VAR_21 - sizeof(*VAR_24) - 1;
  VAR_19->eap_identity = FUNC_4(VAR_19->eap_identity_len);
  if (VAR_19->eap_identity) {
   FUNC_5(VAR_19->eap_identity, VAR_25, VAR_19->eap_identity_len);
   FUNC_19(VAR_2, "Learned identity from "
        "EAP-Response-Identity",
        VAR_19->eap_identity, VAR_19->eap_identity_len);
  }
 }

 if (VAR_19->eap_identity &&
     !FUNC_11(VAR_22, VAR_12,
     VAR_19->eap_identity, VAR_19->eap_identity_len)) {
  FUNC_8("Could not add User-Name\n");
  goto fail;
 }

 if (VAR_19->req_eap_key_name &&
     !FUNC_11(VAR_22, VAR_6, (u8 *) "\0",
     1)) {
  FUNC_8("Could not add EAP-Key-Name\n");
  goto fail;
 }

 if (!FUNC_2(VAR_19->extra_attrs, VAR_8) &&
     !FUNC_11(VAR_22, VAR_8,
     (u8 *) &VAR_19->own_ip_addr, 4)) {
  FUNC_8("Could not add NAS-IP-Address\n");
  goto fail;
 }

 FUNC_6(VAR_23, sizeof(VAR_23), VAR_3,
      FUNC_0(VAR_19->wpa_s->own_addr));
 if (!FUNC_2(VAR_19->extra_attrs, VAR_4)
     &&
     !FUNC_11(VAR_22, VAR_4,
     (u8 *) VAR_23, FUNC_7(VAR_23))) {
  FUNC_8("Could not add Calling-Station-Id\n");
  goto fail;
 }




 if (!FUNC_2(VAR_19->extra_attrs, VAR_7) &&
     !FUNC_12(VAR_22, VAR_7, 1400)) {
  FUNC_8("Could not add Framed-MTU\n");
  goto fail;
 }

 if (!FUNC_2(VAR_19->extra_attrs, VAR_9) &&
     !FUNC_12(VAR_22, VAR_9,
           VAR_17)) {
  FUNC_8("Could not add NAS-Port-Type\n");
  goto fail;
 }

 if (!FUNC_2(VAR_19->extra_attrs, VAR_10) &&
     !FUNC_12(VAR_22, VAR_10,
           VAR_18)) {
  FUNC_8("Could not add Service-Type\n");
  goto fail;
 }

 FUNC_6(VAR_23, sizeof(VAR_23), "%s", VAR_19->connect_info);
 if (!FUNC_2(VAR_19->extra_attrs, VAR_5) &&
     !FUNC_11(VAR_22, VAR_5,
     (u8 *) VAR_23, FUNC_7(VAR_23))) {
  FUNC_8("Could not add Connect-Info\n");
  goto fail;
 }

 if (FUNC_1(VAR_22, VAR_19->extra_attrs) < 0)
  goto fail;

 if (VAR_20 && !FUNC_13(VAR_22, VAR_20, VAR_21)) {
  FUNC_8("Could not add EAP-Message\n");
  goto fail;
 }



 if (VAR_19->last_recv_radius &&
     FUNC_16(VAR_19->last_recv_radius)->code ==
     VAR_14) {
  int VAR_26 = FUNC_14(VAR_22, VAR_19->last_recv_radius,
            VAR_11);
  if (VAR_26 < 0) {
   FUNC_8("Could not copy State attribute from previous "
          "Access-Challenge\n");
   goto fail;
  }
  if (VAR_26 > 0) {
   FUNC_20(VAR_2, "  Copied RADIUS State "
       "Attribute");
  }
 }

 if (FUNC_10(VAR_19->radius, VAR_22, VAR_13, VAR_19->wpa_s->own_addr)
     < 0)
  goto fail;
 return;

 fail:
 FUNC_15(VAR_22);
}
