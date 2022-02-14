
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (struct wpa_sm*,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, void *VAR_2)
{
 struct wpa_sm *VAR_3 = VAR_1;
 FUNC_0(VAR_3->ctx->msg_ctx, VAR_0, "WPA: Request PTK rekeying");
 FUNC_1(VAR_3, 0, 1);
}
