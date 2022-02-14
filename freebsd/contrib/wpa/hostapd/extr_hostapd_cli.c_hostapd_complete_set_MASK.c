
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**) ;
 int FUNC_1 (char const*,int) ;
 char** FUNC_2 (int,int) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static char ** FUNC_4(const char *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 const char *VAR_3[] = {
  "deny_mac_file", "accept_mac_file",
 };
 int VAR_4, VAR_5 = FUNC_0(VAR_3);

 if (VAR_2 == 1) {
  char **VAR_6;

  VAR_6 = FUNC_2(VAR_5 + 1, sizeof(char *));
  if (!VAR_6)
   return ((void*)0);
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
   VAR_6[VAR_4] = FUNC_3(VAR_3[VAR_4]);
   if (!VAR_6[VAR_4])
    return VAR_6;
  }
  return VAR_6;
 }
 return ((void*)0);
}
