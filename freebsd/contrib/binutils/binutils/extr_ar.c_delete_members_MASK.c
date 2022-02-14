
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* bfd_boolean ;
struct TYPE_5__ {struct TYPE_5__* archive_next; int filename; void* has_armap; } ;
typedef TYPE_1__ bfd ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 void* VAR_1 ;
 char* FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int * VAR_4 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_7, char **VAR_8)
{
  bfd **VAR_9;
  bfd_boolean VAR_10;
  bfd_boolean VAR_11 = VAR_0;
  int VAR_12;

  for (; *VAR_8 != ((void*)0); ++VAR_8)
    {






      if (!FUNC_4 (*VAR_8, "__.SYMDEF"))
 {
   VAR_7->has_armap = VAR_0;
   VAR_6 = -1;
   continue;
 }

      VAR_10 = VAR_0;
      VAR_12 = 0;
      VAR_9 = &(VAR_7->archive_next);
      while (*VAR_9)
 {
   if (FUNC_0 (FUNC_2 (*VAR_8, VAR_7),
       (*VAR_9)->filename) == 0)
     {
       ++VAR_12;
       if (VAR_3
    && VAR_12 != VAR_2)
  {


  }
       else
  {
    VAR_10 = VAR_1;
    VAR_11 = VAR_1;
    if (VAR_5)
      FUNC_3 ("d - %s\n",
       *VAR_8);
    *VAR_9 = ((*VAR_9)->archive_next);
    goto next_file;
  }
     }

   VAR_9 = &((*VAR_9)->archive_next);
 }

      if (VAR_5 && !VAR_10)
 {

   FUNC_3 (FUNC_1("No member named `%s'\n"), *VAR_8);
 }
    next_file:
      ;
    }

  if (VAR_11)
    FUNC_5 (VAR_7);
  else
    VAR_4 = ((void*)0);
}
