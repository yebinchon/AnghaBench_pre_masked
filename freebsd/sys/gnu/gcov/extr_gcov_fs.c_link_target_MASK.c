
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int ,char*,char const*,char const*,...) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (char const*,int ,int ) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 char *VAR_5;
 char *VAR_6;
 char *VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_0, VAR_1);
 if (!VAR_7)
  return (((void*)0));
 VAR_6 = FUNC_3(VAR_7, '.');
 if (VAR_6)
  *VAR_6 = '\0';
 VAR_5 = ((void*)0);
 if (VAR_2)
  FUNC_0(&VAR_5, VAR_0, "%s/%s.%s", VAR_2, VAR_7, VAR_4);
 else
  FUNC_0(&VAR_5, VAR_0, "%s.%s", VAR_7, VAR_4);
 FUNC_1(VAR_7, VAR_0);

 return (VAR_5);
}
