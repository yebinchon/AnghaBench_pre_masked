
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct eap_sm {int init_phase2; int * peer_challenge; int * auth_challenge; } ;
struct TYPE_4__ {int method; int vendor; } ;
struct eap_fast_data {int * phase2_priv; TYPE_3__* phase2_method; TYPE_2__* key_block_p; TYPE_1__ phase2_type; } ;
struct TYPE_6__ {int * (* init ) (struct eap_sm*) ;} ;
struct TYPE_5__ {int * client_challenge; int * server_challenge; } ;


 TYPE_3__* FUNC_0 (int ,int ) ;
 int * FUNC_1 (struct eap_sm*) ;

__attribute__((used)) static int FUNC_2(struct eap_sm *VAR_0,
           struct eap_fast_data *VAR_1)
{
 VAR_1->phase2_method =
  FUNC_0(VAR_1->phase2_type.vendor,
     VAR_1->phase2_type.method);
 if (VAR_1->phase2_method == ((void*)0))
  return -1;

 if (VAR_1->key_block_p) {
  VAR_0->auth_challenge = VAR_1->key_block_p->server_challenge;
  VAR_0->peer_challenge = VAR_1->key_block_p->client_challenge;
 }
 VAR_0->init_phase2 = 1;
 VAR_1->phase2_priv = VAR_1->phase2_method->init(VAR_0);
 VAR_0->init_phase2 = 0;
 VAR_0->auth_challenge = ((void*)0);
 VAR_0->peer_challenge = ((void*)0);

 return VAR_1->phase2_priv == ((void*)0) ? -1 : 0;
}
