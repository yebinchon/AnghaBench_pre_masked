
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prison {char* pr_path; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_3(struct prison *VAR_0, struct prison *VAR_1)
{
 char *VAR_2, *VAR_3;
 int VAR_4;

 VAR_2 = VAR_0->pr_path;
 VAR_3 = VAR_1->pr_path;
 if (!FUNC_0(VAR_2, "/"))
  return (VAR_3);
 VAR_4 = FUNC_1(VAR_2);
 if (FUNC_2(VAR_2, VAR_3, VAR_4))
  return (VAR_3);
 if (VAR_3[VAR_4] == '\0')
  return "/";
 if (VAR_3[VAR_4] == '/')
  return (VAR_3 + VAR_4);
 return (VAR_3);
}
