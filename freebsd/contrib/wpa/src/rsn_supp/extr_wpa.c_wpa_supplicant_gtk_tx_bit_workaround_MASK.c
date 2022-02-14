
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {scalar_t__ pairwise_cipher; TYPE_1__* ctx; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_1(const struct wpa_sm *VAR_2,
      int VAR_3)
{
 if (VAR_3 && VAR_2->pairwise_cipher != VAR_1) {





  FUNC_0(VAR_2->ctx->msg_ctx, VAR_0,
   "WPA: Tx bit set for GTK, but pairwise "
   "keys are used - ignore Tx bit");
  return 0;
 }
 return VAR_3;
}
