
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct stat {scalar_t__ st_mtime; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_10__ {char* filename; struct TYPE_10__* archive_next; int * arelt_data; } ;
typedef TYPE_1__ bfd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__**,char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__**,char*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,struct stat*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,char*) ;
 TYPE_1__** FUNC_7 (TYPE_1__**,int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (char*,TYPE_1__*) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11 (bfd *VAR_9, char **VAR_10, bfd_boolean VAR_11)
{
  bfd_boolean VAR_12 = VAR_1;
  bfd **VAR_13;
  bfd *VAR_14;
  bfd **VAR_15;

  while (VAR_10 && *VAR_10)
    {
      if (! VAR_11)
 {
   VAR_15 = &VAR_9->archive_next;
   while (*VAR_15)
     {
       VAR_14 = *VAR_15;



       if (FUNC_0 (FUNC_8 (*VAR_10, VAR_9),
    FUNC_8 (VAR_14->filename, VAR_9)) == 0
    && VAR_14->arelt_data != ((void*)0))
  {
    if (VAR_4)
      {
        struct stat VAR_16, VAR_17;

        if (FUNC_9 (*VAR_10, &VAR_16) != 0)
   {
     if (VAR_3 != VAR_0)
       FUNC_4 (*VAR_10);
     goto next_file;
   }
        if (FUNC_5 (VAR_14, &VAR_17) != 0)

   FUNC_6 (FUNC_1("internal stat error on %s"),
          VAR_14->filename);

        if (VAR_16.st_mtime <= VAR_17.st_mtime)
   goto next_file;
      }

    VAR_13 = FUNC_7 (&VAR_9->archive_next, VAR_6,
        VAR_14->filename);
    if (FUNC_3 (VAR_13, *VAR_10,
           VAR_8))
      {

        *VAR_15 = (*VAR_15)->archive_next;
        VAR_12 = VAR_2;
      }

    goto next_file;
  }
       VAR_15 = &(VAR_14->archive_next);
     }
 }


      VAR_13 = FUNC_7 (&VAR_9->archive_next, VAR_7, ((void*)0));

      if (FUNC_2 (VAR_13, *VAR_10, VAR_8))
 VAR_12 = VAR_2;

    next_file:;

      VAR_10++;
    }

  if (VAR_12)
    FUNC_10 (VAR_9);
  else
    VAR_5 = ((void*)0);
}
