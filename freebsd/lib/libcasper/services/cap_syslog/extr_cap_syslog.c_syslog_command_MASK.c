
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *,int *) ;
 int FUNC_1 (int const*,int *,int *) ;
 int FUNC_2 (int const*,int *,int *) ;
 int FUNC_3 (int const*,int *,int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_1, const nvlist_t *VAR_2, nvlist_t *VAR_3,
    nvlist_t *VAR_4)
{

 if (FUNC_4(VAR_1, "vsyslog") == 0) {
  FUNC_3(VAR_2, VAR_3, VAR_4);
 } else if (FUNC_4(VAR_1, "openlog") == 0) {
  FUNC_1(VAR_2, VAR_3, VAR_4);
 } else if (FUNC_4(VAR_1, "closelog") == 0) {
  FUNC_0(VAR_2, VAR_3, VAR_4);
 } else if (FUNC_4(VAR_1, "setlogmask") == 0) {
  FUNC_2(VAR_2, VAR_3, VAR_4);
 } else {
  return (VAR_0);
 }

 return (0);
}
