
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int ssl_ctx; } ;
struct TYPE_2__ {int conn; } ;
struct eap_fast_data {int simck; scalar_t__ simck_idx; TYPE_1__ ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,char*,int *,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct eap_sm *VAR_3,
        struct eap_fast_data *VAR_4)
{
 u8 *VAR_5;





 VAR_5 = FUNC_0(VAR_3->ssl_ctx, VAR_4->ssl.conn,
      VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_2, "EAP-FAST: Failed to derive "
      "session_key_seed");
  return -1;
 }





 FUNC_3(VAR_2,
   "EAP-FAST: session_key_seed (SKS = S-IMCK[0])",
   VAR_5, VAR_1);
 VAR_4->simck_idx = 0;
 FUNC_2(VAR_4->simck, VAR_5, VAR_0);
 FUNC_1(VAR_5);
 return 0;
}
