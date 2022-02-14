
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int bfd_boolean ;
struct TYPE_7__ {int * filename; struct TYPE_7__* archive_next; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,struct stat*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_5, void (*VAR_6)(bfd *), char **VAR_7, int VAR_8)
{
  bfd *VAR_9;
  int VAR_10;

  if (VAR_8 == 0)
    {
      for (VAR_9 = VAR_5->archive_next; VAR_9; VAR_9 = VAR_9->archive_next)
 {
   FUNC_1 (1);
   VAR_6 (VAR_9);
 }
      return;
    }







  for (; VAR_8 > 0; VAR_7++, VAR_8--)
    {
      bfd_boolean VAR_11 = VAR_0;

      VAR_10 = 0;
      for (VAR_9 = VAR_5->archive_next; VAR_9; VAR_9 = VAR_9->archive_next)
 {
   FUNC_1 (1);
   if (VAR_9->filename == ((void*)0))
     {


       struct stat VAR_12;
       FUNC_3 (VAR_9, &VAR_12);
     }
   if ((VAR_9->filename != ((void*)0)) &&
       (!FUNC_0 (FUNC_5 (*VAR_7, VAR_5), VAR_9->filename)))
     {
       ++VAR_10;
       if (VAR_3
    && VAR_10 != VAR_2)
  {


    continue;
  }

       VAR_11 = VAR_1;
       VAR_6 (VAR_9);
     }
 }
      if (!VAR_11)

 FUNC_4 (VAR_4, FUNC_2("no entry %s in archive\n"), *VAR_7);
    }
}
