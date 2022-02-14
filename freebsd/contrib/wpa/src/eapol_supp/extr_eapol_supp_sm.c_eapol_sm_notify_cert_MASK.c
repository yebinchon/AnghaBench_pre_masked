
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_cert_data {int dummy; } ;
struct eapol_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int ctx; int (* cert_cb ) (int ,struct tls_cert_data*,char const*) ;} ;


 int FUNC_0 (int ,struct tls_cert_data*,char const*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct tls_cert_data *VAR_1,
     const char *VAR_2)
{
 struct eapol_sm *VAR_3 = VAR_0;
 if (VAR_3->ctx->cert_cb)
  VAR_3->ctx->cert_cb(VAR_3->ctx->ctx, VAR_1, VAR_2);
}
