
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config {int dummy; } ;
struct global_parse_data {int (* get ) (char const*,struct wpa_config*,long,char*,size_t,int ) ;scalar_t__ param1; int name; } ;


 size_t VAR_0 ;
 struct global_parse_data* VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*,struct wpa_config*,long,char*,size_t,int ) ;

int FUNC_2(const char *VAR_2, struct wpa_config *VAR_3,
    char *VAR_4, size_t VAR_5)
{
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  const struct global_parse_data *VAR_7 = &VAR_1[VAR_6];

  if (FUNC_0(VAR_2, VAR_7->name) != 0)
   continue;
  if (!VAR_7->get)
   break;
  return VAR_7->get(VAR_2, VAR_3, (long) VAR_7->param1,
      VAR_4, VAR_5, 0);
 }

 return -1;
}
