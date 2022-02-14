
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config {char* country; } ;
struct global_parse_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(const struct global_parse_data *VAR_1,
          struct wpa_config *VAR_2, int VAR_3,
          const char *VAR_4)
{
 if (!VAR_4[0] || !VAR_4[1]) {
  FUNC_0(VAR_0, "Invalid country set");
  return -1;
 }
 VAR_2->country[0] = VAR_4[0];
 VAR_2->country[1] = VAR_4[1];
 FUNC_0(VAR_0, "country='%c%c'",
     VAR_2->country[0], VAR_2->country[1]);
 return 0;
}
