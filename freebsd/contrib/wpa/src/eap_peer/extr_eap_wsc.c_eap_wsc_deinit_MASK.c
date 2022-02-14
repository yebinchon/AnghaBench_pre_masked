
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_wsc_data {TYPE_1__* wps_ctx; int wps; int out_buf; int in_buf; } ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {struct eap_wsc_data* network_key; } ;


 int FUNC_0 (struct eap_wsc_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_wsc_data *VAR_2 = VAR_1;
 FUNC_1(VAR_2->in_buf);
 FUNC_1(VAR_2->out_buf);
 FUNC_2(VAR_2->wps);
 FUNC_0(VAR_2->wps_ctx->network_key);
 VAR_2->wps_ctx->network_key = ((void*)0);
 FUNC_0(VAR_2);
}
