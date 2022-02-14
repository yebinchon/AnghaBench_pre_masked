
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config {int* sae_groups; } ;
struct global_parse_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,int,char const*) ;

__attribute__((used)) static int FUNC_3(
 const struct global_parse_data *VAR_1,
 struct wpa_config *VAR_2, int VAR_3, const char *VAR_4)
{
 int *VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_0, "Line %d: Invalid sae_groups '%s'",
      VAR_3, VAR_4);
  return -1;
 }

 FUNC_0(VAR_2->sae_groups);
 VAR_2->sae_groups = VAR_5;

 return 0;
}
