
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*,int,char const*) ;
 char* FUNC_1 (char**,size_t*,int*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

int
FUNC_5(char **VAR_1, size_t *VAR_2, char **VAR_3, const char *VAR_4, int VAR_5,
    const char *VAR_6, int VAR_7)
{
 int VAR_8;
 char *VAR_9;

 VAR_9 = FUNC_1(VAR_1, VAR_2, &VAR_8);
 if (VAR_9 == ((void*)0))
  return (1);
 if (VAR_8 < VAR_5) {
  FUNC_0(VAR_0, "%s:%d too short %s\n", VAR_6, VAR_7, VAR_4);
  return (1);
 }
 if ((*VAR_3 = FUNC_2(VAR_8 + 1)) == ((void*)0)) {
  FUNC_4("malloc()");
  return (1);
 }
 FUNC_3(*VAR_3, VAR_9, VAR_8);
 (*VAR_3)[VAR_8] = '\0';

 return (0);
}
