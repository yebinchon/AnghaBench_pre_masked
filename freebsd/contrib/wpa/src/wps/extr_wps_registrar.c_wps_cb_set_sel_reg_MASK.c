
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wps_registrar {scalar_t__ pbc; scalar_t__ selected_registrar; int cb_ctx; int (* set_sel_reg_cb ) (int ,scalar_t__,int ,int) ;TYPE_1__* wps; } ;
struct TYPE_2__ {int config_methods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__,int ,int) ;
 int FUNC_1 (int ,char*,scalar_t__,int,scalar_t__,int) ;
 int FUNC_2 (int*,int) ;

__attribute__((used)) static void FUNC_3(struct wps_registrar *VAR_6)
{
 u16 VAR_7 = 0;
 if (VAR_6->set_sel_reg_cb == ((void*)0))
  return;

 if (VAR_6->selected_registrar) {
  VAR_7 = VAR_6->wps->config_methods & ~VAR_4;
  VAR_7 &= ~(VAR_5 |
        VAR_3);
  if (VAR_6->pbc)
   FUNC_2(&VAR_7, VAR_6->wps->config_methods);
 }

 FUNC_1(VAR_2, "WPS: wps_cb_set_sel_reg: sel_reg=%d "
     "config_methods=0x%x pbc=%d methods=0x%x",
     VAR_6->selected_registrar, VAR_6->wps->config_methods,
     VAR_6->pbc, VAR_7);

 VAR_6->set_sel_reg_cb(VAR_6->cb_ctx, VAR_6->selected_registrar,
       VAR_6->pbc ? VAR_1 : VAR_0,
       VAR_7);
}
