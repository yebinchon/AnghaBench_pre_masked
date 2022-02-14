
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_pwd_data {scalar_t__ state; int prep; size_t* password; size_t password_len; int * outbuf; struct crypto_ec_point* my_element; TYPE_1__* grp; void* my_scalar; void* k; struct crypto_bignum* private_value; int server_element; struct crypto_bignum* server_scalar; int token; int id_peer_len; int id_peer; int id_server_len; int id_server; int group_num; int password_hash; } ;
struct eap_method_ret {void* ignore; } ;
struct crypto_ec_point {int dummy; } ;
struct crypto_bignum {int dummy; } ;
typedef int salthashpwd ;
typedef int pwhashhash ;
typedef int pwhash ;
struct TYPE_5__ {int group; struct crypto_ec_point* pwe; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (TYPE_1__*,int ,size_t const*,size_t,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct crypto_bignum*,int) ;
 void* FUNC_2 () ;
 int FUNC_3 (void*,size_t*,size_t,size_t) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct crypto_ec_point*,int ,struct crypto_ec_point*) ;
 int FUNC_6 (struct crypto_ec_point*,int) ;
 void* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,struct crypto_ec_point*) ;
 scalar_t__ FUNC_9 (int ,struct crypto_ec_point*) ;
 scalar_t__ FUNC_10 (int ,struct crypto_ec_point*,struct crypto_bignum*,struct crypto_ec_point*) ;
 scalar_t__ FUNC_11 (int ,struct crypto_ec_point*,size_t*,size_t*) ;
 scalar_t__ FUNC_12 (int ,struct crypto_ec_point*,void*) ;
 size_t FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*,size_t const*) ;
 scalar_t__ FUNC_16 (TYPE_1__*,struct crypto_bignum*,struct crypto_bignum*,void*) ;
 struct crypto_bignum* FUNC_17 (TYPE_1__*,size_t const*) ;
 int FUNC_18 (struct eap_pwd_data*,int ) ;
 int FUNC_19 (size_t*,int) ;
 int FUNC_20 (size_t*,size_t*) ;
 int FUNC_21 (size_t*,size_t,size_t*) ;
 int FUNC_22 (int,size_t const**,size_t*,size_t*) ;
 int FUNC_23 (int,size_t const**,size_t*,size_t*) ;
 int FUNC_24 (int,size_t const**,size_t*,size_t*) ;
 int FUNC_25 (int ,char*,size_t const*,size_t) ;
 int FUNC_26 (int ,char*,size_t const*,size_t) ;
 int FUNC_27 (int ,char*,...) ;
 int * FUNC_28 (int) ;
 size_t* FUNC_29 (int *,size_t) ;

__attribute__((used)) static void
FUNC_30(struct eap_sm *VAR_10, struct eap_pwd_data *VAR_11,
    struct eap_method_ret *VAR_12,
    const struct wpabuf *VAR_13,
    const u8 *VAR_14, size_t VAR_15)
{
 struct crypto_ec_point *VAR_16 = ((void*)0);
 struct crypto_bignum *VAR_17 = ((void*)0);
 const u8 *VAR_18 = VAR_14;
 u8 *VAR_19, *VAR_20;
 size_t VAR_21, VAR_22;
 const u8 *VAR_23;
 size_t VAR_24;
 u8 VAR_25[16];
 const u8 *VAR_26[2];
 size_t VAR_27[2], VAR_28;
 u8 VAR_29, VAR_30[64];
 int VAR_31;

 if (VAR_11->state != VAR_4) {
  VAR_12->ignore = VAR_9;
  goto fin;
 }

 if (!VAR_11->grp) {
  FUNC_27(VAR_1,
      "EAP-PWD (client): uninitialized EAP-pwd group");
  VAR_12->ignore = VAR_9;
  goto fin;
 }

 VAR_21 = FUNC_13(VAR_11->grp->group);
 VAR_22 = FUNC_4(VAR_11->grp->group);

 switch (VAR_11->prep) {
 case 132:
  FUNC_27(VAR_1,
      "EAP-pwd commit request, password prep is MS");






  if (VAR_15 != 2 * VAR_21 + VAR_22) {
   FUNC_27(VAR_3,
       "EAP-pwd: Unexpected Commit payload length %u (expected %u)",
       (unsigned int) VAR_15,
       (unsigned int) (2 * VAR_21 + VAR_22));
   goto fin;
  }
  if (VAR_11->password_hash) {
   VAR_31 = FUNC_20(VAR_11->password, VAR_25);
  } else {
   u8 VAR_32[16];

   VAR_31 = FUNC_21(VAR_11->password,
            VAR_11->password_len, VAR_32);
   if (VAR_31 == 0)
    VAR_31 = FUNC_20(VAR_32, VAR_25);
   FUNC_19(VAR_32, sizeof(VAR_32));
  }

  if (VAR_31) {
   FUNC_18(VAR_11, VAR_0);
   return;
  }

  VAR_23 = VAR_25;
  VAR_24 = sizeof(VAR_25);

  break;
 case 130:
  FUNC_27(VAR_1,
      "EAP-pwd commit request, password prep is salted sha1");
  if (VAR_15 < 1 || *VAR_18 == 0) {
   FUNC_27(VAR_1, "EAP-pwd: Invalid Salt-len");
   goto fin;
  }
  VAR_29 = *VAR_18++;
  VAR_28 = 1 + VAR_29 + 2 * VAR_21 + VAR_22;
  if (VAR_15 != VAR_28) {
   FUNC_27(VAR_3,
       "EAP-pwd: Unexpected Commit payload length %u (expected %u)",
       (unsigned int) VAR_15,
       (unsigned int) VAR_28);
   goto fin;
  }


  FUNC_26(VAR_1, "EAP-pwd: Unsalted password",
    VAR_11->password, VAR_11->password_len);
  FUNC_25(VAR_1, "EAP-pwd: Salt", VAR_18, VAR_29);
  VAR_26[0] = VAR_11->password;
  VAR_26[1] = VAR_18;
  VAR_27[0] = VAR_11->password_len;
  VAR_27[1] = VAR_29;
  if (FUNC_22(2, VAR_26, VAR_27, VAR_30) < 0)
   goto fin;

  FUNC_27(VAR_1,
      "EAP-pwd: sha1 hashed %d byte salt with password",
      (int) VAR_29);
  VAR_18 += VAR_29;
  VAR_23 = VAR_30;
  VAR_24 = VAR_6;
  FUNC_26(VAR_1, "EAP-pwd: Salted password",
    VAR_23, VAR_24);
  break;
 case 129:
  FUNC_27(VAR_1,
      "EAP-pwd commit request, password prep is salted sha256");
  if (VAR_15 < 1 || *VAR_18 == 0) {
   FUNC_27(VAR_1, "EAP-pwd: Invalid Salt-len");
   goto fin;
  }
  VAR_29 = *VAR_18++;
  VAR_28 = 1 + VAR_29 + 2 * VAR_21 + VAR_22;
  if (VAR_15 != VAR_28) {
   FUNC_27(VAR_3,
       "EAP-pwd: Unexpected Commit payload length %u (expected %u)",
       (unsigned int) VAR_15,
       (unsigned int) VAR_28);
   goto fin;
  }


  FUNC_26(VAR_1, "EAP-pwd: Unsalted password",
    VAR_11->password, VAR_11->password_len);
  FUNC_25(VAR_1, "EAP-pwd: Salt", VAR_18, VAR_29);
  VAR_26[0] = VAR_11->password;
  VAR_26[1] = VAR_18;
  VAR_27[0] = VAR_11->password_len;
  VAR_27[1] = VAR_29;
  if (FUNC_23(2, VAR_26, VAR_27, VAR_30) < 0)
   goto fin;

  VAR_18 += VAR_29;
  VAR_23 = VAR_30;
  VAR_24 = VAR_7;
  FUNC_26(VAR_1, "EAP-pwd: Salted password",
    VAR_23, VAR_24);
  break;
 case 131:
  FUNC_27(VAR_1,
      "EAP-pwd commit request, password prep is NONE");
  if (VAR_11->password_hash) {
   FUNC_27(VAR_1,
       "EAP-PWD: Unhashed password not available");
   FUNC_18(VAR_11, VAR_0);
   return;
  }
  if (VAR_15 != 2 * VAR_21 + VAR_22) {
   FUNC_27(VAR_3,
       "EAP-pwd: Unexpected Commit payload length %u (expected %u)",
       (unsigned int) VAR_15,
       (unsigned int) (2 * VAR_21 + VAR_22));
   goto fin;
  }
  VAR_23 = VAR_11->password;
  VAR_24 = VAR_11->password_len;
  break;
 default:
  FUNC_27(VAR_1,
      "EAP-pwd: Unsupported password pre-processing technique (Prep=%u)",
      VAR_11->prep);
  FUNC_18(VAR_11, VAR_0);
  return;
 }


 VAR_31 = FUNC_0(VAR_11->grp, VAR_11->group_num,
           VAR_23, VAR_24,
           VAR_11->id_server, VAR_11->id_server_len,
           VAR_11->id_peer, VAR_11->id_peer_len,
           VAR_11->token);
 FUNC_19(VAR_25, sizeof(VAR_25));
 FUNC_19(VAR_30, sizeof(VAR_30));
 if (VAR_31) {
  FUNC_27(VAR_3, "EAP-PWD (peer): unable to compute PWE");
  FUNC_18(VAR_11, VAR_0);
  return;
 }

 FUNC_27(VAR_1, "EAP-PWD (peer): computed %d bit PWE...",
     (int) FUNC_14(VAR_11->grp->group));

 VAR_11->private_value = FUNC_2();
 VAR_11->my_element = FUNC_7(VAR_11->grp->group);
 VAR_11->my_scalar = FUNC_2();
 VAR_17 = FUNC_2();
 if (!VAR_11->private_value || !VAR_11->my_element ||
     !VAR_11->my_scalar || !VAR_17) {
  FUNC_27(VAR_3, "EAP-PWD (peer): scalar allocation fail");
  goto fin;
 }

 if (FUNC_16(VAR_11->grp, VAR_11->private_value, VAR_17,
      VAR_11->my_scalar) < 0)
  goto fin;

 if (FUNC_10(VAR_11->grp->group, VAR_11->grp->pwe, VAR_17,
    VAR_11->my_element) < 0) {
  FUNC_27(VAR_3, "EAP-PWD (peer): element allocation "
      "fail");
  FUNC_18(VAR_11, VAR_0);
  goto fin;
 }

 if (FUNC_8(VAR_11->grp->group, VAR_11->my_element) < 0) {
  FUNC_27(VAR_3, "EAP-PWD (peer): element inversion fail");
  goto fin;
 }


 VAR_11->k = FUNC_2();
 VAR_16 = FUNC_7(VAR_11->grp->group);
 if (!VAR_11->k || !VAR_16) {
  FUNC_27(VAR_3, "EAP-PWD (peer): peer data allocation "
      "fail");
  goto fin;
 }


 VAR_11->server_element = FUNC_15(VAR_11->grp, VAR_18);
 if (!VAR_11->server_element) {
  FUNC_27(VAR_3, "EAP-PWD (peer): setting peer element "
      "fail");
  goto fin;
 }
 VAR_18 += VAR_21 * 2;
 VAR_11->server_scalar = FUNC_17(VAR_11->grp, VAR_18);
 if (!VAR_11->server_scalar) {
  FUNC_27(VAR_3,
      "EAP-PWD (peer): setting peer scalar fail");
  goto fin;
 }


 if (FUNC_10(VAR_11->grp->group, VAR_11->grp->pwe,
    VAR_11->server_scalar, VAR_16) < 0 ||
     FUNC_5(VAR_11->grp->group, VAR_16, VAR_11->server_element,
    VAR_16) < 0 ||
     FUNC_10(VAR_11->grp->group, VAR_16, VAR_11->private_value,
    VAR_16) < 0) {
  FUNC_27(VAR_3, "EAP-PWD (peer): computing shared key "
      "fail");
  goto fin;
 }







 if (FUNC_9(VAR_11->grp->group, VAR_16)) {
  FUNC_27(VAR_3, "EAP-PWD (peer): shared key point is at "
      "infinity!\n");
  goto fin;
 }

 if (FUNC_12(VAR_11->grp->group, VAR_16, VAR_11->k) < 0) {
  FUNC_27(VAR_3, "EAP-PWD (peer): unable to extract "
      "shared secret from point");
  goto fin;
 }


 VAR_11->outbuf = FUNC_28(2 * VAR_21 + VAR_22);
 if (VAR_11->outbuf == ((void*)0))
  goto fin;

 VAR_20 = FUNC_29(VAR_11->outbuf, 2 * VAR_21);
 VAR_19 = FUNC_29(VAR_11->outbuf, VAR_22);






 FUNC_3(VAR_11->my_scalar, VAR_19, VAR_22, VAR_22);
 if (FUNC_11(VAR_11->grp->group, VAR_11->my_element, VAR_20,
       VAR_20 + VAR_21) != 0) {
  FUNC_27(VAR_3, "EAP-PWD (peer): point assignment fail");
  goto fin;
 }

fin:
 FUNC_1(VAR_17, 1);
 FUNC_6(VAR_16, 1);
 if (VAR_11->outbuf == ((void*)0))
  FUNC_18(VAR_11, VAR_0);
 else
  FUNC_18(VAR_11, VAR_5);
}
