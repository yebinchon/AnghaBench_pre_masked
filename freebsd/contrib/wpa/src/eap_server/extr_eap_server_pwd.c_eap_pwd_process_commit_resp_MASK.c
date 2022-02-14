
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_pwd_data {int k; TYPE_1__* grp; int private_value; int peer_element; int peer_scalar; int my_element; int my_scalar; } ;
struct crypto_ec_point {int dummy; } ;
struct TYPE_3__ {int group; struct crypto_ec_point* pwe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct crypto_ec_point*,int ,struct crypto_ec_point*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct crypto_ec_point*,int) ;
 struct crypto_ec_point* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,struct crypto_ec_point*) ;
 scalar_t__ FUNC_8 (int ,struct crypto_ec_point*,int ,struct crypto_ec_point*) ;
 scalar_t__ FUNC_9 (int ,struct crypto_ec_point*,int ) ;
 size_t FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int const*) ;
 int FUNC_12 (TYPE_1__*,int const*) ;
 int FUNC_13 (struct eap_pwd_data*,int ) ;
 int FUNC_14 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_15(struct eap_sm *VAR_4, struct eap_pwd_data *VAR_5,
       const u8 *VAR_6, size_t VAR_7)
{
 const u8 *VAR_8;
 struct crypto_ec_point *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 size_t VAR_11, VAR_12;

 FUNC_14(VAR_1, "EAP-pwd: Received commit response");

 VAR_11 = FUNC_10(VAR_5->grp->group);
 VAR_12 = FUNC_2(VAR_5->grp->group);

 if (VAR_7 != 2 * VAR_11 + VAR_12) {
  FUNC_14(VAR_2,
      "EAP-pwd: Unexpected Commit payload length %u (expected %u)",
      (unsigned int) VAR_7,
      (unsigned int) (2 * VAR_11 + VAR_12));
  goto fin;
 }

 VAR_5->k = FUNC_1();
 VAR_9 = FUNC_6(VAR_5->grp->group);
 if (!VAR_5->k || !VAR_9) {
  FUNC_14(VAR_2, "EAP-PWD (server): peer data allocation "
      "fail");
  goto fin;
 }


 VAR_8 = VAR_6;
 VAR_5->peer_element = FUNC_11(VAR_5->grp, VAR_8);
 if (!VAR_5->peer_element) {
  FUNC_14(VAR_2, "EAP-PWD (server): setting peer element "
      "fail");
  goto fin;
 }
 VAR_8 += VAR_11 * 2;
 VAR_5->peer_scalar = FUNC_12(VAR_5->grp, VAR_8);
 if (!VAR_5->peer_scalar) {
  FUNC_14(VAR_2, "EAP-PWD (server): peer data allocation "
      "fail");
  goto fin;
 }


 if (FUNC_0(VAR_5->my_scalar, VAR_5->peer_scalar) == 0 ||
     FUNC_4(VAR_5->grp->group, VAR_5->my_element,
    VAR_5->peer_element) == 0) {
  FUNC_14(VAR_2,
      "EAP-PWD (server): detected reflection attack!");
  goto fin;
 }


 if ((FUNC_8(VAR_5->grp->group, VAR_5->grp->pwe,
     VAR_5->peer_scalar, VAR_9) < 0) ||
     (FUNC_3(VAR_5->grp->group, VAR_9, VAR_5->peer_element,
     VAR_9) < 0) ||
     (FUNC_8(VAR_5->grp->group, VAR_9, VAR_5->private_value,
     VAR_9) < 0)) {
  FUNC_14(VAR_2, "EAP-PWD (server): computing shared key "
      "fail");
  goto fin;
 }







 if (FUNC_7(VAR_5->grp->group, VAR_9)) {
  FUNC_14(VAR_2, "EAP-PWD (server): shared key point is "
      "at infinity");
  goto fin;
 }
 if (FUNC_9(VAR_5->grp->group, VAR_9, VAR_5->k)) {
  FUNC_14(VAR_2, "EAP-PWD (server): unable to extract "
      "shared secret from secret point");
  goto fin;
 }
 VAR_10 = 1;

fin:
 FUNC_5(VAR_9, 1);

 if (VAR_10)
  FUNC_13(VAR_5, VAR_3);
 else
  FUNC_13(VAR_5, VAR_0);
}
