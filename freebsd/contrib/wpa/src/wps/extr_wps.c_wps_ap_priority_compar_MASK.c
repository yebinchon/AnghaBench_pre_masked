
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {scalar_t__* selected_registrar; } ;
struct wpabuf {int dummy; } ;


 scalar_t__ FUNC_0 (struct wpabuf const*,struct wps_parse_attr*) ;

int FUNC_1(const struct wpabuf *VAR_0,
      const struct wpabuf *VAR_1)
{
 struct wps_parse_attr VAR_2;
 int VAR_3, VAR_4;

 if (VAR_0 == ((void*)0) || FUNC_0(VAR_0, &VAR_2) < 0)
  return 1;
 VAR_3 = VAR_2.selected_registrar && *VAR_2.selected_registrar != 0;

 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1, &VAR_2) < 0)
  return -1;
 VAR_4 = VAR_2.selected_registrar && *VAR_2.selected_registrar != 0;

 if (VAR_3 && !VAR_4)
  return -1;
 if (!VAR_3 && VAR_4)
  return 1;

 return 0;
}
