
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct sta_info {char* identity; char* radius_cui; scalar_t__ ipaddr; int eapol_sm; int addr; } ;
struct radius_msg {int dummy; } ;
struct os_time {int sec; } ;
struct hostapd_data {TYPE_1__* conf; int radius; } ;
typedef int buf ;
struct TYPE_2__ {int radius_acct_req_attr; scalar_t__ ieee802_1x; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 scalar_t__ FUNC_1 (struct hostapd_data*,int ,struct sta_info*,struct radius_msg*) ;
 scalar_t__ FUNC_2 (struct hostapd_data*,struct sta_info*,struct radius_msg*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ,size_t*) ;
 int * FUNC_6 (int ,size_t*,int) ;
 struct wpabuf* FUNC_7 (int ) ;
 int FUNC_8 (struct os_time*) ;
 int FUNC_9 (char*,int,int ,int ) ;
 size_t FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct radius_msg*,int ,int *,size_t) ;
 int FUNC_13 (struct radius_msg*,int ,int) ;
 int FUNC_14 (struct radius_msg*) ;
 struct radius_msg* FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,char*) ;
 int * FUNC_17 (struct wpabuf*) ;
 size_t FUNC_18 (struct wpabuf*) ;

__attribute__((used)) static struct radius_msg * FUNC_19(struct hostapd_data *VAR_14,
       struct sta_info *VAR_15,
       int VAR_16)
{
 struct radius_msg *VAR_17;
 char VAR_18[128];
 u8 *VAR_19;
 size_t VAR_20;
 int VAR_21;
 struct wpabuf *VAR_22;
 struct os_time VAR_23;

 VAR_17 = FUNC_15(VAR_13,
        FUNC_11(VAR_14->radius));
 if (VAR_17 == ((void*)0)) {
  FUNC_16(VAR_1, "Could not create new RADIUS packet");
  return ((void*)0);
 }

 if (!FUNC_13(VAR_17, VAR_7,
           VAR_16)) {
  FUNC_16(VAR_1, "Could not add Acct-Status-Type");
  goto fail;
 }

 if (VAR_15) {
  if (!FUNC_4(
       VAR_14->conf->radius_acct_req_attr,
       VAR_5) &&
      !FUNC_13(VAR_17, VAR_5,
            VAR_14->conf->ieee802_1x ?
            VAR_3 :
            VAR_2)) {
   FUNC_16(VAR_1, "Could not add Acct-Authentic");
   goto fail;
  }


  VAR_19 = FUNC_5(VAR_15->eapol_sm, &VAR_20);


  if (!VAR_19 && VAR_15->identity) {
   VAR_19 = (u8 *) VAR_15->identity;
   VAR_20 = FUNC_10(VAR_15->identity);
  }



  if (!VAR_19) {
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_4,
        FUNC_0(VAR_15->addr));
   VAR_19 = (u8 *) VAR_18;
   VAR_20 = FUNC_10(VAR_18);
  }

  if (!FUNC_12(VAR_17, VAR_12, VAR_19,
      VAR_20)) {
   FUNC_16(VAR_1, "Could not add User-Name");
   goto fail;
  }
 }

 if (FUNC_1(VAR_14, VAR_14->conf->radius_acct_req_attr, VAR_15,
       VAR_17) < 0)
  goto fail;

 if (VAR_15 && FUNC_2(VAR_14, VAR_15, VAR_17, 1) < 0)
  goto fail;

 if (VAR_15) {
  for (VAR_21 = 0; ; VAR_21++) {
   VAR_19 = FUNC_6(VAR_15->eapol_sm, &VAR_20,
         VAR_21);
   if (VAR_19 == ((void*)0))
    break;

   if (!FUNC_12(VAR_17, VAR_9,
       VAR_19, VAR_20)) {
    FUNC_16(VAR_1, "Could not add Class");
    goto fail;
   }
  }

  VAR_22 = FUNC_7(VAR_15->eapol_sm);
  if (VAR_22 &&
      !FUNC_12(VAR_17,
      VAR_8,
      FUNC_17(VAR_22), FUNC_18(VAR_22))) {
   FUNC_16(VAR_0, "Could not add CUI");
   goto fail;
  }

  if (!VAR_22 && VAR_15->radius_cui &&
      !FUNC_12(VAR_17,
      VAR_8,
      (u8 *) VAR_15->radius_cui,
      FUNC_10(VAR_15->radius_cui))) {
   FUNC_16(VAR_0, "Could not add CUI from ACL");
   goto fail;
  }

  if (VAR_15->ipaddr &&
      !FUNC_13(VAR_17,
            VAR_11,
            FUNC_3(VAR_15->ipaddr))) {
   FUNC_16(VAR_0,
       "Could not add Framed-IP-Address");
   goto fail;
  }
 }

 FUNC_8(&VAR_23);
 if (VAR_23.sec > 1000000000 &&
     !FUNC_13(VAR_17, VAR_10,
           VAR_23.sec)) {
  FUNC_16(VAR_1, "Could not add Event-Timestamp");
  goto fail;
 }





 if (!FUNC_13(VAR_17, VAR_6, 0)) {
  FUNC_16(VAR_1, "Could not add Acct-Delay-Time");
  goto fail;
 }

 return VAR_17;

 fail:
 FUNC_14(VAR_17);
 return ((void*)0);
}
