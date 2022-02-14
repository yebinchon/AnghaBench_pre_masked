
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;

void
FUNC_3 (FILE *VAR_1, sigset_t *VAR_2, int VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    if (FUNC_1 (VAR_2, VAR_4))
      FUNC_2 (VAR_1, VAR_4, VAR_3);

  if (!VAR_3)
    FUNC_0 (VAR_1, "\n");
}
