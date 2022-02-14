
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int,int *) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, int VAR_1)
{
  int VAR_2 = 0;

  if (VAR_0 == (char *) ((void*)0))
    VAR_2 = 1;
  else if (*VAR_0 != '*')
    {
      char *VAR_3 = VAR_0;
      int VAR_4 = 0;




      while (*VAR_3 && !VAR_4)
 {
   VAR_4 = (*VAR_3 == ':');
   VAR_3++;
 }

      if (VAR_4)
 VAR_2 = (*VAR_3 != ':');
      else
 VAR_2 = FUNC_1 (*VAR_0);
    }

  if (VAR_2)
    FUNC_2 ("Usage: stop in <function | address>\n");
  else
    FUNC_0 (VAR_0, 0, VAR_1, ((void*)0));
}
