
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wps_registrar {int sel_reg_config_methods_override; TYPE_1__* wps; scalar_t__ pbc; int sel_reg_union; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int config_methods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (int*,int) ;

__attribute__((used)) static int FUNC_3(struct wps_registrar *VAR_5,
         struct wpabuf *VAR_6)
{
 u16 VAR_7;
 if (!VAR_5->sel_reg_union)
  return 0;
 VAR_7 = VAR_5->wps->config_methods;
 VAR_7 &= ~VAR_3;
 VAR_7 &= ~(VAR_4 |
       VAR_2);
 if (VAR_5->pbc)
  FUNC_2(&VAR_7, VAR_5->wps->config_methods);
 if (VAR_5->sel_reg_config_methods_override >= 0)
  VAR_7 = VAR_5->sel_reg_config_methods_override;
 FUNC_0(VAR_1, "WPS:  * Selected Registrar Config Methods (%x)",
     VAR_7);
 FUNC_1(VAR_6, VAR_0);
 FUNC_1(VAR_6, 2);
 FUNC_1(VAR_6, VAR_7);
 return 0;
}
