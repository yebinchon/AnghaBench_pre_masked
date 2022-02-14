
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eap_sm {int init_phase2; int * peer_challenge; int * auth_challenge; } ;
struct eap_fast_data {int * phase2_priv; TYPE_2__* phase2_method; TYPE_1__* key_block_p; } ;
struct TYPE_4__ {int * (* init ) (struct eap_sm*) ;int (* reset ) (struct eap_sm*,int *) ;} ;
struct TYPE_3__ {int * client_challenge; int * server_challenge; } ;
typedef int EapType ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct eap_sm*,int *) ;
 int * FUNC_2 (struct eap_sm*) ;

__attribute__((used)) static int FUNC_3(struct eap_sm *VAR_1, struct eap_fast_data *VAR_2,
    EapType VAR_3)
{
 if (VAR_2->phase2_priv && VAR_2->phase2_method) {
  VAR_2->phase2_method->reset(VAR_1, VAR_2->phase2_priv);
  VAR_2->phase2_method = ((void*)0);
  VAR_2->phase2_priv = ((void*)0);
 }
 VAR_2->phase2_method = FUNC_0(VAR_0,
       VAR_3);
 if (!VAR_2->phase2_method)
  return -1;

 if (VAR_2->key_block_p) {
  VAR_1->auth_challenge = VAR_2->key_block_p->server_challenge;
  VAR_1->peer_challenge = VAR_2->key_block_p->client_challenge;
 }
 VAR_1->init_phase2 = 1;
 VAR_2->phase2_priv = VAR_2->phase2_method->init(VAR_1);
 VAR_1->init_phase2 = 0;
 VAR_1->auth_challenge = ((void*)0);
 VAR_1->peer_challenge = ((void*)0);

 return VAR_2->phase2_priv == ((void*)0) ? -1 : 0;
}
