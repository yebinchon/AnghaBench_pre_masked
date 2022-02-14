
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eapol_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int ctx; int (* eap_error_cb ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1)
{
 struct eapol_sm *VAR_2 = VAR_0;

 if (VAR_2->ctx->eap_error_cb)
  VAR_2->ctx->eap_error_cb(VAR_2->ctx->ctx, VAR_1);
}
