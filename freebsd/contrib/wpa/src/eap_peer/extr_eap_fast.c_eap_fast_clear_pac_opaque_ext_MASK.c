
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int ssl_ctx; } ;
struct TYPE_2__ {int conn; } ;
struct eap_fast_data {TYPE_1__ ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct eap_sm *VAR_2,
      struct eap_fast_data *VAR_3)
{
 if (FUNC_0(VAR_2->ssl_ctx, VAR_3->ssl.conn,
         VAR_1, ((void*)0), 0) < 0) {
  FUNC_1(VAR_0, "EAP-FAST: Failed to remove PAC-Opaque "
      "TLS extension");
  return -1;
 }
 return 0;
}
