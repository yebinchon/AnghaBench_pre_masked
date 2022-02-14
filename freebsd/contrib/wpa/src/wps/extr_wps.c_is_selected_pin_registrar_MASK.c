
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {scalar_t__* selected_registrar; int * sel_reg_config_methods; int * dev_password_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct wps_parse_attr *VAR_4)
{
 if (!VAR_4->selected_registrar || *VAR_4->selected_registrar == 0)
  return 0;

 if (VAR_4->dev_password_id != ((void*)0) &&
     FUNC_0(VAR_4->dev_password_id) == VAR_0)
  return 0;
 return 1;
}
