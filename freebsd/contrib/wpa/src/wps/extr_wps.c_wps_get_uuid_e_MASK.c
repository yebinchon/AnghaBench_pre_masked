
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_parse_attr {int const* uuid_e; } ;
struct wpabuf {int dummy; } ;


 scalar_t__ FUNC_0 (struct wpabuf const*,struct wps_parse_attr*) ;

const u8 * FUNC_1(const struct wpabuf *VAR_0)
{
 struct wps_parse_attr VAR_1;

 if (FUNC_0(VAR_0, &VAR_1) < 0)
  return ((void*)0);
 return VAR_1.uuid_e;
}
