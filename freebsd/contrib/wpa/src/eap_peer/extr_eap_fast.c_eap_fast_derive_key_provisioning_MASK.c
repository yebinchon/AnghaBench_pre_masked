
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int ssl_ctx; } ;
struct eap_fast_key_block_provisioning {int client_challenge; int server_challenge; int session_key_seed; } ;
struct TYPE_2__ {int conn; } ;
struct eap_fast_data {struct eap_fast_key_block_provisioning* key_block_p; int simck; scalar_t__ simck_idx; TYPE_1__ ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct eap_fast_key_block_provisioning*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct eap_sm *VAR_2,
         struct eap_fast_data *VAR_3)
{
 FUNC_1(VAR_3->key_block_p);
 VAR_3->key_block_p = (struct eap_fast_key_block_provisioning *)
  FUNC_0(VAR_2->ssl_ctx, VAR_3->ssl.conn,
        sizeof(*VAR_3->key_block_p));
 if (VAR_3->key_block_p == ((void*)0)) {
  FUNC_4(VAR_1, "EAP-FAST: Failed to derive key block");
  return -1;
 }




 FUNC_3(VAR_1,
   "EAP-FAST: session_key_seed (SKS = S-IMCK[0])",
   VAR_3->key_block_p->session_key_seed,
   sizeof(VAR_3->key_block_p->session_key_seed));
 VAR_3->simck_idx = 0;
 FUNC_2(VAR_3->simck, VAR_3->key_block_p->session_key_seed,
    VAR_0);
 FUNC_3(VAR_1, "EAP-FAST: server_challenge",
   VAR_3->key_block_p->server_challenge,
   sizeof(VAR_3->key_block_p->server_challenge));
 FUNC_3(VAR_1, "EAP-FAST: client_challenge",
   VAR_3->key_block_p->client_challenge,
   sizeof(VAR_3->key_block_p->client_challenge));
 return 0;
}
