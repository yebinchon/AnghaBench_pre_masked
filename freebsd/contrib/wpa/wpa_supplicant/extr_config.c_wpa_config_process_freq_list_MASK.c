
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config {int* freq_list; } ;
struct global_parse_data {int dummy; } ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const struct global_parse_data *VAR_0,
     struct wpa_config *VAR_1, int VAR_2,
     const char *VAR_3)
{
 int *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 == ((void*)0))
  return -1;
 if (VAR_4[0] == 0) {
  FUNC_0(VAR_4);
  VAR_4 = ((void*)0);
 }
 FUNC_0(VAR_1->freq_list);
 VAR_1->freq_list = VAR_4;
 return 0;
}
