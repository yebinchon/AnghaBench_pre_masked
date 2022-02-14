
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,int,char const*,char const*,int) ;
 char* FUNC_2 (char*,int,char const*,int) ;
 int FUNC_3 (char const*,int,int) ;

__attribute__((used)) static int FUNC_4(char **VAR_1, const char *VAR_2,
  const char *VAR_3, const char *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(*VAR_1, VAR_2);
 if (VAR_6 < 0) {
  FUNC_3(VAR_2, -1, VAR_6);
  return -1;
 }

 VAR_7 = FUNC_1(*VAR_1, VAR_6, VAR_3, VAR_4, VAR_5);
 if (VAR_7 == -VAR_0) {
  *VAR_1 = FUNC_2(*VAR_1, VAR_6, VAR_3, VAR_5);
  VAR_7 = FUNC_1(*VAR_1, VAR_6, VAR_3, VAR_4, VAR_5);
 }
 if (VAR_7) {
  FUNC_3(VAR_3, -1, VAR_7);
  return -1;
 }
 return 0;
}
