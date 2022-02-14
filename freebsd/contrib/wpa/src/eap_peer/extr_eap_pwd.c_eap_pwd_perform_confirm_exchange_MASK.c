
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_pwd_data {scalar_t__ state; int * outbuf; int session_id; int emsk; int msk; int server_scalar; int my_scalar; int k; TYPE_1__* grp; int server_element; int my_element; int group_num; } ;
struct eap_method_ret {int decision; int methodState; int ignore; } ;
struct crypto_hash {int dummy; } ;
struct TYPE_2__ {int group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int ,int *,int *,int *,int ,int ,int ) ;
 int FUNC_2 (int ,int *,size_t,size_t) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (struct crypto_hash*,int *) ;
 struct crypto_hash* FUNC_7 () ;
 int FUNC_8 (struct crypto_hash*,int *,int) ;
 int FUNC_9 (struct eap_pwd_data*,int ) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (size_t) ;
 scalar_t__ FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int ,char*,...) ;
 int * FUNC_15 (int) ;
 int FUNC_16 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_17(struct eap_sm *VAR_11, struct eap_pwd_data *VAR_12,
     struct eap_method_ret *VAR_13,
     const struct wpabuf *VAR_14,
     const u8 *VAR_15, size_t VAR_16)
{
 struct crypto_hash *VAR_17 = ((void*)0);
 u32 VAR_18;
 u16 VAR_19;
 u8 VAR_20[VAR_8], *VAR_21 = ((void*)0), *VAR_22;
 size_t VAR_23 = 0, VAR_24 = 0;

 if (VAR_12->state != VAR_7) {
  VAR_13->ignore = VAR_10;
  goto fin;
 }

 if (VAR_16 != VAR_8) {
  FUNC_14(VAR_6,
      "EAP-pwd: Unexpected Confirm payload length %u (expected %u)",
      (unsigned int) VAR_16, VAR_8);
  goto fin;
 }

 VAR_23 = FUNC_5(VAR_12->grp->group);
 VAR_24 = FUNC_3(VAR_12->grp->group);





 VAR_19 = FUNC_10(VAR_12->group_num);
 VAR_22 = (u8 *) &VAR_18;
 FUNC_13(VAR_22, &VAR_19, sizeof(u16));
 VAR_22 += sizeof(u16);
 *VAR_22 = VAR_2;
 VAR_22 += sizeof(u8);
 *VAR_22 = VAR_1;


 VAR_21 = FUNC_11(VAR_23 * 2);
 if (!VAR_21) {
  FUNC_14(VAR_6, "EAP-PWD (server): confirm allocation "
      "fail");
  goto fin;
 }





 VAR_17 = FUNC_7();
 if (VAR_17 == ((void*)0))
  goto fin;





 FUNC_2(VAR_12->k, VAR_21, VAR_23, VAR_23);
 FUNC_8(VAR_17, VAR_21, VAR_23);


 if (FUNC_4(VAR_12->grp->group, VAR_12->server_element,
       VAR_21, VAR_21 + VAR_23) != 0) {
  FUNC_14(VAR_6, "EAP-PWD (server): confirm point "
      "assignment fail");
  goto fin;
 }
 FUNC_8(VAR_17, VAR_21, VAR_23 * 2);


 FUNC_2(VAR_12->server_scalar, VAR_21, VAR_24, VAR_24);
 FUNC_8(VAR_17, VAR_21, VAR_24);


 if (FUNC_4(VAR_12->grp->group, VAR_12->my_element, VAR_21,
       VAR_21 + VAR_23) != 0) {
  FUNC_14(VAR_6, "EAP-PWD (server): confirm point "
      "assignment fail");
  goto fin;
 }
 FUNC_8(VAR_17, VAR_21, VAR_23 * 2);


 FUNC_2(VAR_12->my_scalar, VAR_21, VAR_24, VAR_24);
 FUNC_8(VAR_17, VAR_21, VAR_24);


 FUNC_8(VAR_17, (u8 *) &VAR_18, sizeof(u32));


 FUNC_6(VAR_17, VAR_20);
 VAR_17 = ((void*)0);

 VAR_22 = (u8 *) VAR_15;
 if (FUNC_12(VAR_20, VAR_22, VAR_8)) {
  FUNC_14(VAR_6, "EAP-PWD (peer): confirm did not verify");
  goto fin;
 }

 FUNC_14(VAR_5, "EAP-pwd (peer): confirm verified");






 VAR_17 = FUNC_7();
 if (VAR_17 == ((void*)0))
  goto fin;


 FUNC_2(VAR_12->k, VAR_21, VAR_23, VAR_23);
 FUNC_8(VAR_17, VAR_21, VAR_23);


 if (FUNC_4(VAR_12->grp->group, VAR_12->my_element, VAR_21,
       VAR_21 + VAR_23) != 0) {
  FUNC_14(VAR_6, "EAP-PWD (peer): confirm point "
      "assignment fail");
  goto fin;
 }
 FUNC_8(VAR_17, VAR_21, VAR_23 * 2);


 FUNC_2(VAR_12->my_scalar, VAR_21, VAR_24, VAR_24);
 FUNC_8(VAR_17, VAR_21, VAR_24);


 if (FUNC_4(VAR_12->grp->group, VAR_12->server_element,
       VAR_21, VAR_21 + VAR_23) != 0) {
  FUNC_14(VAR_6, "EAP-PWD (peer): confirm point "
      "assignment fail");
  goto fin;
 }
 FUNC_8(VAR_17, VAR_21, VAR_23 * 2);


 FUNC_2(VAR_12->server_scalar, VAR_21, VAR_24, VAR_24);
 FUNC_8(VAR_17, VAR_21, VAR_24);


 FUNC_8(VAR_17, (u8 *) &VAR_18, sizeof(u32));


 FUNC_6(VAR_17, VAR_20);
 VAR_17 = ((void*)0);

 if (FUNC_1(VAR_12->grp, VAR_12->k,
    VAR_12->my_scalar, VAR_12->server_scalar, VAR_20, VAR_22,
    &VAR_18, VAR_12->msk, VAR_12->emsk, VAR_12->session_id) < 0) {
  FUNC_14(VAR_6, "EAP-PWD (peer): unable to compute MSK | "
      "EMSK");
  goto fin;
 }

 VAR_12->outbuf = FUNC_15(VAR_8);
 if (VAR_12->outbuf == ((void*)0))
  goto fin;

 FUNC_16(VAR_12->outbuf, VAR_20, VAR_8);

fin:
 FUNC_0(VAR_21, VAR_23 * 2);
 if (VAR_12->outbuf == ((void*)0)) {
  VAR_13->methodState = VAR_4;
  VAR_13->decision = VAR_0;
  FUNC_9(VAR_12, VAR_3);
 } else {
  FUNC_9(VAR_12, VAR_9);
 }


 if (VAR_17)
  FUNC_6(VAR_17, VAR_20);
}
