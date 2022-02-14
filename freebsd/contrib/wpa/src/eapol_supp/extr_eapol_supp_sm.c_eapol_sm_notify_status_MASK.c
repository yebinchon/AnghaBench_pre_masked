
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eapol_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int ctx; int (* status_cb ) (int ,char const*,char const*) ;} ;


 int FUNC_0 (int ,char const*,char const*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const char *VAR_1,
       const char *VAR_2)
{
 struct eapol_sm *VAR_3 = VAR_0;

 if (VAR_3->ctx->status_cb)
  VAR_3->ctx->status_cb(VAR_3->ctx->ctx, VAR_1, VAR_2);
}
