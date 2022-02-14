
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dependency {int file; struct dependency* next; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_1 ;
 struct dependency* VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (char,int *) ;
 int FUNC_5 (int *,int ,char) ;

void
FUNC_6 (void)
{
  FILE *VAR_5;
  struct dependency *VAR_6;

  if (VAR_3 == ((void*)0))
    return;

  VAR_5 = FUNC_3 (VAR_3, VAR_0);
  if (VAR_5 == ((void*)0))
    {
      FUNC_1 (FUNC_0("can't open `%s' for writing"), VAR_3);
      return;
    }

  VAR_1 = 0;
  FUNC_5 (VAR_5, VAR_4, ':');
  for (VAR_6 = VAR_2; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    FUNC_5 (VAR_5, VAR_6->file, ' ');

  FUNC_4 ('\n', VAR_5);

  if (FUNC_2 (VAR_5))
    FUNC_1 (FUNC_0("can't close `%s'"), VAR_3);
}
