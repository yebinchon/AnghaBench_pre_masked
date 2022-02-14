
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config {int dummy; } ;
struct global_parse_data {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,size_t*) ;
 int FUNC_2 (struct global_parse_data const*,struct wpa_config*,int,char*) ;
 int FUNC_3 (int ,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(const struct global_parse_data *VAR_1,
         struct wpa_config *VAR_2, int VAR_3,
         const char *VAR_4)
{
 size_t VAR_5;
 char *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4, &VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_0, "Line %d: failed to parse %s",
      VAR_3, VAR_1->name);
  return -1;
 }

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_6);
 FUNC_0(VAR_6);
 return VAR_7;
}
