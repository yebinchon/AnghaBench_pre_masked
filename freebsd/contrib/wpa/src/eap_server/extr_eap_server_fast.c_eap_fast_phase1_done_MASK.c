
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int ssl_ctx; } ;
struct TYPE_2__ {int conn; } ;
struct eap_fast_data {int anon_provisioning; TYPE_1__ ssl; } ;
typedef int cipher ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eap_sm*,struct eap_fast_data*) ;
 int FUNC_1 (struct eap_sm*,struct eap_fast_data*) ;
 int FUNC_2 (struct eap_fast_data*,int ) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ,int ,char*,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct eap_sm *VAR_3, struct eap_fast_data *VAR_4)
{
 char VAR_5[64];

 FUNC_5(VAR_1, "EAP-FAST: Phase1 done, starting Phase2");

 if (FUNC_4(VAR_3->ssl_ctx, VAR_4->ssl.conn, VAR_5, sizeof(VAR_5))
     < 0) {
  FUNC_5(VAR_1, "EAP-FAST: Failed to get cipher "
      "information");
  FUNC_2(VAR_4, VAR_0);
  return -1;
 }
 VAR_4->anon_provisioning = FUNC_3(VAR_5, "ADH") != ((void*)0);

 if (VAR_4->anon_provisioning) {
  FUNC_5(VAR_1, "EAP-FAST: Anonymous provisioning");
  FUNC_1(VAR_3, VAR_4);
 } else
  FUNC_0(VAR_3, VAR_4);

 FUNC_2(VAR_4, VAR_2);

 return 0;
}
