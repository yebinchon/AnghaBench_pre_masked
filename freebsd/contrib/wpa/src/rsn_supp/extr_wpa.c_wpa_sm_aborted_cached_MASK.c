
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {int * cur_pmksa; TYPE_1__* ctx; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;

void FUNC_1(struct wpa_sm *VAR_1)
{
 if (VAR_1 && VAR_1->cur_pmksa) {
  FUNC_0(VAR_1->ctx->msg_ctx, VAR_0,
   "RSN: Cancelling PMKSA caching attempt");
  VAR_1->cur_pmksa = ((void*)0);
 }
}
