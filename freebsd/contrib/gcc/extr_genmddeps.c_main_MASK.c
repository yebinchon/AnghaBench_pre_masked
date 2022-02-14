
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filedep {char* pathname; struct filedep* next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct filedep* VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int,char**) ;
 int ** VAR_5 ;
 int FUNC_4 (char*,char*) ;
 char* VAR_6 ;
 int FUNC_5 (char) ;
 int VAR_7 ;

int
FUNC_6 (int VAR_8, char **VAR_9)
{
  struct filedep *VAR_10;

  VAR_6 = "genmddeps";
  VAR_4 = VAR_2;

  if (FUNC_3 (VAR_8, VAR_9) != VAR_1)
    return (VAR_0);

  *VAR_5 = ((void*)0);


  FUNC_2 ("MD_INCLUDES =", VAR_7);
  for (VAR_10 = VAR_3; VAR_10 ; VAR_10 = VAR_10->next)
    FUNC_4 (" \\\n\t%s", VAR_10->pathname);
  FUNC_5 ('\n');



  for (VAR_10 = VAR_3; VAR_10 ; VAR_10 = VAR_10->next)
    FUNC_4 ("\n%s:\n", VAR_10->pathname);

  FUNC_1 (VAR_7);
  return (FUNC_0 (VAR_7) != 0 ? VAR_0 : VAR_1);
}
