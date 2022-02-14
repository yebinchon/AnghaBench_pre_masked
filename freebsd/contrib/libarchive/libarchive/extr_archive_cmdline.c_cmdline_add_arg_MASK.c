
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_cmdline {char** argv; int argc; int * path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** FUNC_0 (char**,int) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(struct archive_cmdline *VAR_3, const char *VAR_4)
{
 char **VAR_5;

 if (VAR_3->path == ((void*)0))
  return (VAR_0);

 VAR_5 = FUNC_0(VAR_3->argv, (VAR_3->argc + 2) * sizeof(char *));
 if (VAR_5 == ((void*)0))
  return (VAR_1);
 VAR_3->argv = VAR_5;
 VAR_3->argv[VAR_3->argc] = FUNC_1(VAR_4);
 if (VAR_3->argv[VAR_3->argc] == ((void*)0))
  return (VAR_1);

 VAR_3->argv[++VAR_3->argc] = ((void*)0);
 return (VAR_2);
}
