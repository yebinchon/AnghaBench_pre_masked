
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*,int,int) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static int FUNC_5(char **VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4;

 VAR_4 = FUNC_4(VAR_2, '/');
 if (!VAR_4) {
  FUNC_3(VAR_2, -1, -VAR_0);
  return -1;
 }
 *VAR_4 = '\0';

 *VAR_1 = FUNC_2(*VAR_1, VAR_4 + 1);

 if (VAR_4 > VAR_2) {
  VAR_3 = FUNC_1(*VAR_1, VAR_2);
  if (VAR_3 < 0) {
   FUNC_3(VAR_2, -1, VAR_3);
   return -1;
  }
 }

 VAR_3 = FUNC_0(*VAR_1, VAR_3, VAR_4 + 1);
 if (VAR_3 < 0) {
  FUNC_3(VAR_4 + 1, -1, VAR_3);
  return -1;
 }

 return 0;
}
