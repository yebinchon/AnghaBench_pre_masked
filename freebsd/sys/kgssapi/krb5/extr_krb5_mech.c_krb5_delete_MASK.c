
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ km_elem; } ;
struct krb5_context {int kc_lock; scalar_t__ kc_recv_sign_Kc; scalar_t__ kc_recv_seal_Kc; scalar_t__ kc_recv_seal_Ki; scalar_t__ kc_recv_seal_Ke; scalar_t__ kc_send_sign_Kc; scalar_t__ kc_send_seal_Kc; scalar_t__ kc_send_seal_Ki; scalar_t__ kc_send_seal_Ke; scalar_t__ kc_checksumkey; scalar_t__ kc_encryptkey; scalar_t__ kc_tokenkey; TYPE_1__ kc_msg_order; int kc_target_name; int kc_source_name; int kc_remote_subkey; int kc_local_subkey; int kc_keyblock; int kc_remote_address; int kc_local_address; } ;
typedef scalar_t__ gss_ctx_id_t ;
typedef TYPE_2__* gss_buffer_t ;
struct TYPE_5__ {int * value; scalar_t__ length; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(gss_ctx_id_t VAR_1, gss_buffer_t VAR_2)
{
 struct krb5_context *VAR_3 = (struct krb5_context *)VAR_1;

 FUNC_0(&VAR_3->kc_local_address);
 FUNC_0(&VAR_3->kc_remote_address);
 FUNC_2(&VAR_3->kc_keyblock);
 FUNC_2(&VAR_3->kc_local_subkey);
 FUNC_2(&VAR_3->kc_remote_subkey);
 FUNC_1(&VAR_3->kc_source_name);
 FUNC_1(&VAR_3->kc_target_name);
 if (VAR_3->kc_msg_order.km_elem)
  FUNC_3(VAR_3->kc_msg_order.km_elem, VAR_0);
 if (VAR_2) {
  VAR_2->length = 0;
  VAR_2->value = ((void*)0);
 }
 if (VAR_3->kc_tokenkey) {
  FUNC_4(VAR_3->kc_tokenkey);
  if (VAR_3->kc_encryptkey) {
   FUNC_4(VAR_3->kc_encryptkey);
   FUNC_4(VAR_3->kc_checksumkey);
  } else {
   FUNC_4(VAR_3->kc_send_seal_Ke);
   FUNC_4(VAR_3->kc_send_seal_Ki);
   FUNC_4(VAR_3->kc_send_seal_Kc);
   FUNC_4(VAR_3->kc_send_sign_Kc);
   FUNC_4(VAR_3->kc_recv_seal_Ke);
   FUNC_4(VAR_3->kc_recv_seal_Ki);
   FUNC_4(VAR_3->kc_recv_seal_Kc);
   FUNC_4(VAR_3->kc_recv_sign_Kc);
  }
 }
 FUNC_5(&VAR_3->kc_lock);
}
