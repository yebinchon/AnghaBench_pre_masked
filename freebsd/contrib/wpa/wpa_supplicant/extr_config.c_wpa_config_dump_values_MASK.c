
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config {int dummy; } ;
struct global_parse_data {int (* get ) (int ,struct wpa_config*,long,char*,size_t,int) ;scalar_t__ param1; int name; } ;


 size_t VAR_0 ;
 struct global_parse_data* VAR_1 ;
 int FUNC_0 (int ,struct wpa_config*,long,char*,size_t,int) ;

int FUNC_1(struct wpa_config *VAR_2, char *VAR_3, size_t VAR_4)
{
 int VAR_5 = 0;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  const struct global_parse_data *VAR_7 = &VAR_1[VAR_6];
  int VAR_8;

  if (!VAR_7->get)
   continue;

  VAR_8 = VAR_7->get(VAR_7->name, VAR_2, (long) VAR_7->param1,
     VAR_3, VAR_4, 1);
  if (VAR_8 < 0)
   return -1;
  VAR_3 += VAR_8;
  VAR_4 -= VAR_8;
  VAR_5 += VAR_8;
 }
 return VAR_5;
}
