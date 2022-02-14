
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int dummy; } ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_1 (struct wpabuf const*,struct wps_parse_attr*) ;

int FUNC_2(const struct wpabuf *VAR_0)
{
 struct wps_parse_attr VAR_1;

 if (FUNC_1(VAR_0, &VAR_1) < 0)
  return 0;

 return FUNC_0(&VAR_1);
}
