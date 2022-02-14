
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conn; } ;
struct eap_teap_data {int anon_provisioning; TYPE_1__ ssl; int tls_cs; } ;
struct eap_sm {int ssl_ctx; } ;
typedef int cipher ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct eap_sm*,struct eap_teap_data*) ;
 int FUNC_1 (struct eap_teap_data*,int ) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,char*,int) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct eap_sm *VAR_3, struct eap_teap_data *VAR_4)
{
 char VAR_5[64];

 FUNC_5(VAR_1, "EAP-TEAP: Phase 1 done, starting Phase 2");

 VAR_4->tls_cs = FUNC_3(VAR_4->ssl.conn);
 FUNC_5(VAR_1, "EAP-TEAP: TLS cipher suite 0x%04x",
     VAR_4->tls_cs);

 if (FUNC_4(VAR_3->ssl_ctx, VAR_4->ssl.conn, VAR_5, sizeof(VAR_5))
     < 0) {
  FUNC_5(VAR_1,
      "EAP-TEAP: Failed to get cipher information");
  FUNC_1(VAR_4, VAR_0);
  return -1;
 }
 VAR_4->anon_provisioning = FUNC_2(VAR_5, "ADH") != ((void*)0);

 if (VAR_4->anon_provisioning)
  FUNC_5(VAR_1, "EAP-TEAP: Anonymous provisioning");

 if (FUNC_0(VAR_3, VAR_4) < 0) {
  FUNC_1(VAR_4, VAR_0);
  return -1;
 }

 FUNC_1(VAR_4, VAR_2);

 return 0;
}
