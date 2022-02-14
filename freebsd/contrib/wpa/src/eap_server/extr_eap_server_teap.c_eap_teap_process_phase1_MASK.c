
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tls_out; int conn; } ;
struct eap_teap_data {TYPE_1__ ssl; } ;
struct eap_sm {int ssl_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct eap_sm*,TYPE_1__*) ;
 int FUNC_1 (struct eap_sm*,struct eap_teap_data*) ;
 int FUNC_2 (struct eap_teap_data*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct eap_sm *VAR_2,
       struct eap_teap_data *VAR_3)
{
 if (FUNC_0(VAR_2, &VAR_3->ssl) < 0) {
  FUNC_4(VAR_1, "EAP-TEAP: TLS processing failed");
  FUNC_2(VAR_3, VAR_0);
  return -1;
 }

 if (!FUNC_3(VAR_2->ssl_ctx, VAR_3->ssl.conn) ||
     FUNC_5(VAR_3->ssl.tls_out) > 0)
  return 1;







 return FUNC_1(VAR_2, VAR_3);
}
