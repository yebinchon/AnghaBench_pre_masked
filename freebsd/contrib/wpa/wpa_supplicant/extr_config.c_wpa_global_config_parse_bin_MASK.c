
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_config {int dummy; } ;
struct global_parse_data {int name; scalar_t__ param1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct wpabuf*) ;
 struct wpabuf* FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const struct global_parse_data *VAR_1,
           struct wpa_config *VAR_2, int VAR_3,
           const char *VAR_4)
{
 struct wpabuf **VAR_5, *VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 if (!VAR_6)
  return -1;

 VAR_5 = (struct wpabuf **) (((u8 *) VAR_2) + (long) VAR_1->param1);
 FUNC_1(*VAR_5);
 *VAR_5 = VAR_6;
 FUNC_0(VAR_0, "%s", VAR_1->name);

 return 0;
}
