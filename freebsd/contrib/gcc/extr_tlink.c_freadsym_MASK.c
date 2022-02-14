
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chosen; int * file; } ;
typedef TYPE_1__ symbol ;
typedef int file ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (char const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4 (FILE *VAR_0, file *VAR_1, int VAR_2)
{
  symbol *VAR_3;

  {
    const char *VAR_4 = FUNC_3 (VAR_0);
    VAR_3 = FUNC_1 (VAR_4, 1);
  }

  if (VAR_3->file == ((void*)0))
    {


      FUNC_2 (VAR_3);
      VAR_3->file = VAR_1;
      VAR_3->chosen = VAR_2;
    }
  else if (VAR_2)
    {


      if (VAR_3->chosen && VAR_3->file != VAR_1)
 {
   if (VAR_3->chosen == 1)
     FUNC_0 (VAR_3->file);
   else
     {
       FUNC_0 (VAR_1);
       VAR_1 = VAR_3->file;
       VAR_2 = VAR_3->chosen;
     }
 }
      VAR_3->file = VAR_1;
      VAR_3->chosen = VAR_2;
    }
}
