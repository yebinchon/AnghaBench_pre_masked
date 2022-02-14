
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_pwd_data {int salt_len; int * outbuf; int my_element; TYPE_1__* grp; void* my_scalar; scalar_t__ salt; void* private_value; scalar_t__ out_frag_pos; } ;
struct crypto_bignum {int dummy; } ;
struct TYPE_2__ {int group; int pwe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_bignum*,int) ;
 void* FUNC_1 () ;
 int FUNC_2 (void*,int *,size_t,size_t) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,struct crypto_bignum*,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int *) ;
 size_t FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,void*,struct crypto_bignum*,void*) ;
 int FUNC_10 (struct eap_pwd_data*,int ) ;
 int FUNC_11 (int ,char*) ;
 int * FUNC_12 (int) ;
 int * FUNC_13 (int *,size_t) ;
 int FUNC_14 (int *,scalar_t__,int) ;
 int FUNC_15 (int *,int) ;

__attribute__((used)) static void FUNC_16(struct eap_sm *VAR_3,
         struct eap_pwd_data *VAR_4, u8 VAR_5)
{
 struct crypto_bignum *VAR_6 = ((void*)0);
 u8 *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10;

 FUNC_11(VAR_1, "EAP-pwd: Commit/Request");




 if (VAR_4->out_frag_pos)
  return;

 VAR_9 = FUNC_8(VAR_4->grp->group);
 VAR_10 = FUNC_3(VAR_4->grp->group);

 VAR_4->private_value = FUNC_1();
 VAR_4->my_element = FUNC_4(VAR_4->grp->group);
 VAR_4->my_scalar = FUNC_1();
 VAR_6 = FUNC_1();
 if (!VAR_4->private_value || !VAR_4->my_element || !VAR_4->my_scalar ||
     !VAR_6) {
  FUNC_11(VAR_2, "EAP-PWD (server): scalar allocation "
      "fail");
  goto fin;
 }

 if (FUNC_9(VAR_4->grp, VAR_4->private_value, VAR_6,
      VAR_4->my_scalar) < 0)
  goto fin;

 if (FUNC_6(VAR_4->grp->group, VAR_4->grp->pwe, VAR_6,
    VAR_4->my_element) < 0) {
  FUNC_11(VAR_2, "EAP-PWD (server): element allocation "
      "fail");
  FUNC_10(VAR_4, VAR_0);
  goto fin;
 }

 if (FUNC_5(VAR_4->grp->group, VAR_4->my_element) < 0) {
  FUNC_11(VAR_2, "EAP-PWD (server): element inversion "
      "fail");
  goto fin;
 }

 VAR_4->outbuf = FUNC_12(2 * VAR_9 + VAR_10 +
        (VAR_4->salt ? 1 + VAR_4->salt_len : 0));
 if (VAR_4->outbuf == ((void*)0))
  goto fin;


 if (VAR_4->salt_len) {
  FUNC_15(VAR_4->outbuf, VAR_4->salt_len);
  FUNC_14(VAR_4->outbuf, VAR_4->salt, VAR_4->salt_len);
 }


 VAR_8 = FUNC_13(VAR_4->outbuf, 2 * VAR_9);
 VAR_7 = FUNC_13(VAR_4->outbuf, VAR_10);
 FUNC_2(VAR_4->my_scalar, VAR_7, VAR_10, VAR_10);
 if (FUNC_7(VAR_4->grp->group, VAR_4->my_element, VAR_8,
       VAR_8 + VAR_9) < 0) {
  FUNC_11(VAR_2, "EAP-PWD (server): point assignment "
      "fail");
  goto fin;
 }

fin:
 FUNC_0(VAR_6, 1);
 if (VAR_4->outbuf == ((void*)0))
  FUNC_10(VAR_4, VAR_0);
}
