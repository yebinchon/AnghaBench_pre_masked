
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conn; } ;
struct eap_teap_data {scalar_t__ simck_idx; int simck_msk; int simck_emsk; TYPE_1__ ssl; } ;
struct eap_sm {int ssl_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int *,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct eap_sm *VAR_3,
        struct eap_teap_data *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_1(VAR_3->ssl_ctx, VAR_4->ssl.conn,
     VAR_2, ((void*)0), 0,
     VAR_4->simck_msk, VAR_0);
 if (VAR_5)
  return VAR_5;
 FUNC_2(VAR_1,
   "EAP-TEAP: session_key_seed (S-IMCK[0])",
   VAR_4->simck_msk, VAR_0);
 FUNC_0(VAR_4->simck_emsk, VAR_4->simck_msk, VAR_0);
 VAR_4->simck_idx = 0;
 return 0;
}
