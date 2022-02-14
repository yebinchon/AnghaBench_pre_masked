
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct eap_sm {int dummy; } ;
struct eap_pwd_data {int session_id; int emsk; int msk; int my_confirm; int my_scalar; int peer_scalar; int k; TYPE_1__* grp; int my_element; int peer_element; int group_num; } ;
struct crypto_hash {int dummy; } ;
struct TYPE_2__ {int group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int ,int *,int ,int *,int ,int ,int ) ;
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

__attribute__((used)) static void
FUNC_15(struct eap_sm *VAR_7, struct eap_pwd_data *VAR_8,
        const u8 *VAR_9, size_t VAR_10)
{
 struct crypto_hash *VAR_11 = ((void*)0);
 u32 VAR_12;
 u16 VAR_13;
 u8 VAR_14[VAR_5], *VAR_15 = ((void*)0), *VAR_16;
 size_t VAR_17, VAR_18;

 VAR_17 = FUNC_5(VAR_8->grp->group);
 VAR_18 = FUNC_3(VAR_8->grp->group);

 if (VAR_10 != VAR_5) {
  FUNC_14(VAR_4,
      "EAP-pwd: Unexpected Confirm payload length %u (expected %u)",
      (unsigned int) VAR_10, VAR_5);
  goto fin;
 }


 VAR_13 = FUNC_10(VAR_8->group_num);
 VAR_16 = (u8 *) &VAR_12;
 FUNC_13(VAR_16, &VAR_13, sizeof(u16));
 VAR_16 += sizeof(u16);
 *VAR_16 = VAR_1;
 VAR_16 += sizeof(u8);
 *VAR_16 = VAR_0;


 VAR_15 = FUNC_11(VAR_17 * 2);
 if (!VAR_15) {
  FUNC_14(VAR_4, "EAP-PWD (peer): allocation fail");
  goto fin;
 }





 VAR_11 = FUNC_7();
 if (VAR_11 == ((void*)0))
  goto fin;


 FUNC_2(VAR_8->k, VAR_15, VAR_17, VAR_17);
 FUNC_8(VAR_11, VAR_15, VAR_17);


 if (FUNC_4(VAR_8->grp->group, VAR_8->peer_element, VAR_15,
       VAR_15 + VAR_17) < 0) {
  FUNC_14(VAR_4, "EAP-PWD (server): confirm point "
      "assignment fail");
  goto fin;
 }
 FUNC_8(VAR_11, VAR_15, VAR_17 * 2);


 FUNC_2(VAR_8->peer_scalar, VAR_15, VAR_18, VAR_18);
 FUNC_8(VAR_11, VAR_15, VAR_18);


 if (FUNC_4(VAR_8->grp->group, VAR_8->my_element, VAR_15,
       VAR_15 + VAR_17) < 0) {
  FUNC_14(VAR_4, "EAP-PWD (server): confirm point "
      "assignment fail");
  goto fin;
 }
 FUNC_8(VAR_11, VAR_15, VAR_17 * 2);


 FUNC_2(VAR_8->my_scalar, VAR_15, VAR_18, VAR_18);
 FUNC_8(VAR_11, VAR_15, VAR_18);


 FUNC_8(VAR_11, (u8 *) &VAR_12, sizeof(u32));


 FUNC_6(VAR_11, VAR_14);
 VAR_11 = ((void*)0);

 VAR_16 = (u8 *) VAR_9;
 if (FUNC_12(VAR_14, VAR_16, VAR_5)) {
  FUNC_14(VAR_4, "EAP-PWD (server): confirm did not "
      "verify");
  goto fin;
 }

 FUNC_14(VAR_3, "EAP-pwd (server): confirm verified");
 if (FUNC_1(VAR_8->grp, VAR_8->k,
    VAR_8->peer_scalar, VAR_8->my_scalar, VAR_14,
    VAR_8->my_confirm, &VAR_12, VAR_8->msk, VAR_8->emsk,
    VAR_8->session_id) < 0)
  FUNC_9(VAR_8, VAR_2);
 else
  FUNC_9(VAR_8, VAR_6);

fin:
 FUNC_0(VAR_15, VAR_17 * 2);
 FUNC_6(VAR_11, ((void*)0));
}
