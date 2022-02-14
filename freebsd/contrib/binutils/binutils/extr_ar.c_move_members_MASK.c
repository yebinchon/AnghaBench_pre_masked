
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int filename; struct TYPE_7__* archive_next; } ;
typedef TYPE_1__ bfd ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int ) ;
 TYPE_1__** FUNC_3 (TYPE_1__**,int ,int *) ;
 int FUNC_4 (char*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7 (bfd *VAR_2, char **VAR_3)
{
  bfd **VAR_4;
  bfd **VAR_5;

  for (; *VAR_3; ++VAR_3)
    {
      VAR_5 = &(VAR_2->archive_next);
      while (*VAR_5)
 {
   bfd *VAR_6 = *VAR_5;
   if (FUNC_0 (FUNC_4 (*VAR_3, VAR_2),
       VAR_6->filename) == 0)
     {


       bfd *VAR_7;
       *VAR_5 = VAR_6->archive_next;


       VAR_4 = FUNC_3 (&VAR_2->archive_next, VAR_0, ((void*)0));
       VAR_7 = *VAR_4;
       *VAR_4 = VAR_6;
       VAR_6->archive_next = VAR_7;

       if (VAR_1)
  FUNC_5 ("m - %s\n", *VAR_3);

       goto next_file;
     }

   VAR_5 = &((*VAR_5)->archive_next);
 }

      FUNC_2 (FUNC_1("no entry %s in archive %s!"), *VAR_3, VAR_2->filename);

    next_file:;
    }

  FUNC_6 (VAR_2);
}
