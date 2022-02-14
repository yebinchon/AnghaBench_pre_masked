
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ikev2_initiator_data {int key_pad; int r_sign_msg; int i_sign_msg; int shared_secret; int IDr; int IDi; int i_dh_private; int r_dh_public; int keys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct ikev2_initiator_data *VAR_0)
{
 FUNC_0(&VAR_0->keys);
 FUNC_2(VAR_0->r_dh_public);
 FUNC_2(VAR_0->i_dh_private);
 FUNC_1(VAR_0->IDi);
 FUNC_1(VAR_0->IDr);
 FUNC_1(VAR_0->shared_secret);
 FUNC_2(VAR_0->i_sign_msg);
 FUNC_2(VAR_0->r_sign_msg);
 FUNC_1(VAR_0->key_pad);
}
