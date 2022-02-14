
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpas_dpp_listen_work {int dummy; } ;
struct wpa_supplicant {TYPE_1__* dpp_listen_work; } ;
struct TYPE_2__ {struct wpas_dpp_listen_work* ctx; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct wpas_dpp_listen_work*) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_0)
{
 struct wpas_dpp_listen_work *VAR_1;

 if (!VAR_0->dpp_listen_work)
  return;

 VAR_1 = VAR_0->dpp_listen_work->ctx;
 FUNC_1(VAR_1);
 FUNC_0(VAR_0->dpp_listen_work);
 VAR_0->dpp_listen_work = ((void*)0);
}
