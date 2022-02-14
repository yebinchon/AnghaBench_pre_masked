
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config {int hessid; } ;
struct global_parse_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ,char*,int,char const*) ;

__attribute__((used)) static int FUNC_2(
 const struct global_parse_data *VAR_1,
 struct wpa_config *VAR_2, int VAR_3, const char *VAR_4)
{
 if (FUNC_0(VAR_4, VAR_2->hessid) < 0) {
  FUNC_1(VAR_0, "Line %d: Invalid hessid '%s'",
      VAR_3, VAR_4);
  return -1;
 }

 return 0;
}
