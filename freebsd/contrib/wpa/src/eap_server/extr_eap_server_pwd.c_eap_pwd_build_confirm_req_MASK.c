
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct eap_sm {int dummy; } ;
struct eap_pwd_data {int * outbuf; int * my_confirm; int group_num; int peer_scalar; int peer_element; TYPE_1__* grp; int my_scalar; int my_element; int k; scalar_t__ out_frag_pos; } ;
struct crypto_hash {int dummy; } ;
struct TYPE_2__ {int group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int ,int *,size_t,size_t) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int *) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (struct crypto_hash*,int *) ;
 struct crypto_hash* FUNC_6 () ;
 int FUNC_7 (struct crypto_hash*,int *,int) ;
 int FUNC_8 (struct eap_pwd_data*,int ) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (size_t) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int *,int ,size_t) ;
 int FUNC_13 (int ,char*) ;
 int * FUNC_14 (int) ;
 int FUNC_15 (int *,int *,int) ;

__attribute__((used)) static void FUNC_16(struct eap_sm *VAR_6,
          struct eap_pwd_data *VAR_7, u8 VAR_8)
{
 struct crypto_hash *VAR_9 = ((void*)0);
 u8 VAR_10[VAR_5], *VAR_11 = ((void*)0), *VAR_12;
 u16 VAR_13;
 size_t VAR_14, VAR_15;

 FUNC_13(VAR_3, "EAP-pwd: Confirm/Request");




 if (VAR_7->out_frag_pos)
  return;

 VAR_14 = FUNC_4(VAR_7->grp->group);
 VAR_15 = FUNC_2(VAR_7->grp->group);


 VAR_11 = FUNC_10(VAR_14 * 2);
 if (!VAR_11) {
  FUNC_13(VAR_4, "EAP-PWD (server): debug allocation "
      "fail");
  goto fin;
 }





 VAR_9 = FUNC_6();
 if (VAR_9 == ((void*)0))
  goto fin;







 FUNC_1(VAR_7->k, VAR_11, VAR_14, VAR_14);
 FUNC_7(VAR_9, VAR_11, VAR_14);


 if (FUNC_3(VAR_7->grp->group, VAR_7->my_element, VAR_11,
       VAR_11 + VAR_14) < 0) {
  FUNC_13(VAR_4, "EAP-PWD (server): confirm point "
      "assignment fail");
  goto fin;
 }
 FUNC_7(VAR_9, VAR_11, VAR_14 * 2);


 FUNC_1(VAR_7->my_scalar, VAR_11, VAR_15, VAR_15);
 FUNC_7(VAR_9, VAR_11, VAR_15);


 if (FUNC_3(VAR_7->grp->group, VAR_7->peer_element, VAR_11,
       VAR_11 + VAR_14) < 0) {
  FUNC_13(VAR_4, "EAP-PWD (server): confirm point "
      "assignment fail");
  goto fin;
 }
 FUNC_7(VAR_9, VAR_11, VAR_14 * 2);


 FUNC_1(VAR_7->peer_scalar, VAR_11, VAR_15, VAR_15);
 FUNC_7(VAR_9, VAR_11, VAR_15);


 VAR_13 = FUNC_9(VAR_7->group_num);
 FUNC_12(VAR_11, 0, VAR_14);
 VAR_12 = VAR_11;
 FUNC_11(VAR_12, &VAR_13, sizeof(u16));
 VAR_12 += sizeof(u16);
 *VAR_12 = VAR_1;
 VAR_12 += sizeof(u8);
 *VAR_12 = VAR_0;
 VAR_12 += sizeof(u8);
 FUNC_7(VAR_9, VAR_11, VAR_12 - VAR_11);


 FUNC_5(VAR_9, VAR_10);
 VAR_9 = ((void*)0);
 FUNC_11(VAR_7->my_confirm, VAR_10, VAR_5);

 VAR_7->outbuf = FUNC_14(VAR_5);
 if (VAR_7->outbuf == ((void*)0))
  goto fin;

 FUNC_15(VAR_7->outbuf, VAR_10, VAR_5);

fin:
 FUNC_0(VAR_11, VAR_14 * 2);
 if (VAR_7->outbuf == ((void*)0))
  FUNC_8(VAR_7, VAR_2);
 FUNC_5(VAR_9, ((void*)0));
}
