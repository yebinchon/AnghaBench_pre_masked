
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct list {char* name; struct list* next; } ;
typedef int bfd_boolean ;
struct TYPE_7__ {int * filename; struct TYPE_7__* archive_next; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int *) ;
 int VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_3, void (*VAR_4) (bfd *, bfd *), struct list *VAR_5)
{
  bfd *VAR_6;

  if (VAR_5 == ((void*)0))
    {
      bfd *VAR_7;

      VAR_6 = VAR_3->archive_next;
      while (VAR_6 != ((void*)0))
 {
   VAR_7 = VAR_6->archive_next;
   VAR_4 (VAR_6, (bfd *) ((void*)0));
   VAR_6 = VAR_7;
 }
    }
  else
    {
      struct list *VAR_8;






      for (VAR_8 = VAR_5; VAR_8; VAR_8 = VAR_8->next)
 {
   bfd_boolean VAR_9 = VAR_0;
   bfd *VAR_10 = VAR_3;

   for (VAR_6 = VAR_3->archive_next; VAR_6; VAR_6 = VAR_6->archive_next)
     {
       if (VAR_6->filename != ((void*)0)
    && FUNC_0 (VAR_8->name, VAR_6->filename) == 0)
  {
    VAR_9 = VAR_1;
    VAR_4 (VAR_6, VAR_10);
  }
       VAR_10 = VAR_6;
     }
   if (! VAR_9)
     FUNC_2 (VAR_2, FUNC_1("No entry %s in archive.\n"), VAR_8->name);
 }
    }
}
