
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_registrar {int sel_reg_union; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (struct wpabuf*,int) ;

__attribute__((used)) static int FUNC_3(struct wps_registrar *VAR_2,
     struct wpabuf *VAR_3)
{
 if (!VAR_2->sel_reg_union)
  return 0;
 FUNC_0(VAR_1, "WPS:  * Selected Registrar");
 FUNC_1(VAR_3, VAR_0);
 FUNC_1(VAR_3, 1);
 FUNC_2(VAR_3, 1);
 return 0;
}
