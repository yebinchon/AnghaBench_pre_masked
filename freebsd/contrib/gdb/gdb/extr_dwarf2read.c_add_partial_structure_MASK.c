
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct partial_die_info {char* name; scalar_t__ tag; scalar_t__ has_children; } ;
struct dwarf2_cu {scalar_t__ language; TYPE_1__* objfile; } ;
typedef int bfd ;
struct TYPE_2__ {int * obfd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct partial_die_info*,struct dwarf2_cu*,char const*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_2 (struct partial_die_info*,char*,int *,struct dwarf2_cu*) ;
 char* FUNC_3 (struct partial_die_info*,int *,char*,struct dwarf2_cu*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5 (struct partial_die_info *VAR_2, char *VAR_3,
         struct dwarf2_cu *VAR_4,
         const char *VAR_5)
{
  bfd *VAR_6 = VAR_4->objfile->obfd;
  char *VAR_7 = ((void*)0);

  if (VAR_4->language == VAR_1
      && (VAR_5 == ((void*)0) || VAR_5[0] == '\0')
      && VAR_2->name != ((void*)0)
      && VAR_2->has_children)
    {
      char *VAR_8 = VAR_3;

      while (1)
 {
   struct partial_die_info VAR_9;

   VAR_8 = FUNC_3 (&VAR_9, VAR_6, VAR_8,
      VAR_4);
   if (!VAR_9.tag)
     break;
   if (VAR_9.tag == VAR_0)
     {
       VAR_7 = FUNC_1 (VAR_9.name);
       if (VAR_7 != ((void*)0))
  VAR_2->name = VAR_7;
       break;
     }
   else
     {
       VAR_8 = FUNC_2 (&VAR_9, VAR_8,
            VAR_6, VAR_4);
     }
 }
    }

  FUNC_0 (VAR_2, VAR_4, VAR_5);
  FUNC_4 (VAR_7);

  return FUNC_2 (VAR_2, VAR_3, VAR_6, VAR_4);
}
