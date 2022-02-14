
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,int ) ;
 struct cleanup* FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;
 char* FUNC_6 (char*) ;
 int VAR_1 ;

void
FUNC_7 (char *VAR_2, int VAR_3)
{
  FILE *VAR_4;
  struct cleanup *VAR_5;
  char *VAR_6 = VAR_2;

  if (VAR_6 == ((void*)0))
    {
      FUNC_1 ("source command requires pathname of file to source.");
    }

  VAR_6 = FUNC_6 (VAR_6);
  VAR_5 = FUNC_3 (VAR_1, VAR_6);

  VAR_4 = FUNC_2 (VAR_6, VAR_0);
  if (!VAR_4)
    {
      if (VAR_3)
 FUNC_4 (VAR_6);
      else
 return;
    }

  FUNC_5 (VAR_4, VAR_6);

  FUNC_0 (VAR_5);
}
