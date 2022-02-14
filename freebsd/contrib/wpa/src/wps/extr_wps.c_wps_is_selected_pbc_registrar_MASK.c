
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {scalar_t__* selected_registrar; int sel_reg_config_methods; int dev_password_id; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct wpabuf const*,struct wps_parse_attr*) ;

int FUNC_2(const struct wpabuf *VAR_2)
{
 struct wps_parse_attr VAR_3;
 if (FUNC_1(VAR_2, &VAR_3) < 0 ||
     !VAR_3.selected_registrar || *VAR_3.selected_registrar == 0 ||
     !VAR_3.dev_password_id ||
     FUNC_0(VAR_3.dev_password_id) != VAR_0)
  return 0;
 return 1;
}
