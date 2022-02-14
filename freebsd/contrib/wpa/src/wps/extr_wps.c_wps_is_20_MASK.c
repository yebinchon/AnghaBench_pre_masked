
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int * version2; } ;
struct wpabuf {int dummy; } ;


 scalar_t__ FUNC_0 (struct wpabuf const*,struct wps_parse_attr*) ;

int FUNC_1(const struct wpabuf *VAR_0)
{
 struct wps_parse_attr VAR_1;

 if (VAR_0 == ((void*)0) || FUNC_0(VAR_0, &VAR_1) < 0)
  return 0;
 return VAR_1.version2 != ((void*)0);
}
