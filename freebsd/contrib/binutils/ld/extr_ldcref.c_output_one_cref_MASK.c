
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct cref_ref {TYPE_7__* abfd; scalar_t__ def; struct cref_ref* next; } ;
struct TYPE_8__ {int string; } ;
struct cref_hash_entry {char* demangled; struct cref_ref* refs; TYPE_1__ root; } ;
struct TYPE_11__ {TYPE_3__* section; } ;
struct TYPE_12__ {TYPE_4__ def; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_5__ u; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int hash; } ;
struct TYPE_10__ {TYPE_2__* owner; int * output_section; } ;
struct TYPE_9__ {int flags; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct bfd_link_hash_entry* FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,char*,TYPE_7__*) ;
 TYPE_6__ VAR_5 ;
 int FUNC_5 (char,int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7 (FILE *VAR_6, struct cref_hash_entry *VAR_7)
{
  int VAR_8;
  struct bfd_link_hash_entry *VAR_9;
  struct cref_ref *VAR_10;

  VAR_9 = FUNC_1 (VAR_5.hash, VAR_7->root.string, VAR_1,
        VAR_1, VAR_3);
  if (VAR_9 == ((void*)0))
    FUNC_2 ("%P: symbol `%T' missing from main hash table\n",
    VAR_7->root.string);
  else
    {


      if (VAR_9->type == VAR_4)
 {
   if (VAR_9->u.def.section->output_section == ((void*)0))
     return;
   if (VAR_9->u.def.section->owner != ((void*)0)
       && (VAR_9->u.def.section->owner->flags & VAR_0) != 0)
     {
       for (VAR_10 = VAR_7->refs; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
  if ((VAR_10->abfd->flags & VAR_0) == 0)
    break;
       if (VAR_10 == ((void*)0))
  return;
     }
 }
    }

  FUNC_3 (VAR_6, "%s ", VAR_7->demangled);
  VAR_8 = FUNC_6 (VAR_7->demangled) + 1;

  for (VAR_10 = VAR_7->refs; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
    {
      if (VAR_10->def)
 {
   while (VAR_8 < VAR_2)
     {
       FUNC_5 (' ', VAR_6);
       ++VAR_8;
     }
   FUNC_4 (VAR_6, "%B\n", VAR_10->abfd);
   VAR_8 = 0;
 }
    }

  for (VAR_10 = VAR_7->refs; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
    {
      if (! VAR_10->def)
 {
   while (VAR_8 < VAR_2)
     {
       FUNC_5 (' ', VAR_6);
       ++VAR_8;
     }
   FUNC_4 (VAR_6, "%B\n", VAR_10->abfd);
   VAR_8 = 0;
 }
    }

  FUNC_0 (VAR_8 == 0);
}
