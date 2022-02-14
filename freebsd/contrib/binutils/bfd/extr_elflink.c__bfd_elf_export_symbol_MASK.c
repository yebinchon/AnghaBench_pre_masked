
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int string; } ;
struct TYPE_8__ {scalar_t__ link; } ;
struct TYPE_9__ {TYPE_1__ i; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_3__ root; TYPE_2__ u; } ;
struct elf_link_hash_entry {int dynindx; TYPE_4__ root; scalar_t__ ref_regular; scalar_t__ def_regular; int dynamic; } ;
struct elf_info_failed {int failed; TYPE_7__* info; struct bfd_elf_version_tree* verdefs; } ;
struct TYPE_12__ {int * list; } ;
struct bfd_elf_version_tree {TYPE_5__ locals; struct bfd_elf_version_expr* (* match ) (TYPE_5__*,int *,int ) ;TYPE_5__ globals; struct bfd_elf_version_tree* next; } ;
struct bfd_elf_version_expr {int dummy; } ;
typedef int bfd_boolean ;
struct TYPE_13__ {int export_dynamic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,struct elf_link_hash_entry*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct bfd_elf_version_expr* FUNC_1 (TYPE_5__*,int *,int ) ;
 struct bfd_elf_version_expr* FUNC_2 (TYPE_5__*,int *,int ) ;

bfd_boolean
FUNC_3 (struct elf_link_hash_entry *VAR_4, void *VAR_5)
{
  struct elf_info_failed *VAR_6 = VAR_5;


  if (!VAR_6->info->export_dynamic && !VAR_4->dynamic)
    return VAR_1;


  if (VAR_4->root.type == VAR_2)
    return VAR_1;

  if (VAR_4->root.type == VAR_3)
    VAR_4 = (struct elf_link_hash_entry *) VAR_4->root.u.i.link;

  if (VAR_4->dynindx == -1
      && (VAR_4->def_regular
   || VAR_4->ref_regular))
    {
      struct bfd_elf_version_tree *VAR_7;
      struct bfd_elf_version_expr *VAR_8;

      for (VAR_7 = VAR_6->verdefs; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
 {
   if (VAR_7->globals.list != ((void*)0))
     {
       VAR_8 = (*VAR_7->match) (&VAR_7->globals, ((void*)0), VAR_4->root.root.string);
       if (VAR_8 != ((void*)0))
  goto doit;
     }

   if (VAR_7->locals.list != ((void*)0))
     {
       VAR_8 = (*VAR_7->match) (&VAR_7->locals, ((void*)0), VAR_4->root.root.string);
       if (VAR_8 != ((void*)0))
  return VAR_1;
     }
 }

      if (!VAR_6->verdefs)
 {
 doit:
   if (! FUNC_0 (VAR_6->info, VAR_4))
     {
       VAR_6->failed = VAR_1;
       return VAR_0;
     }
 }
    }

  return VAR_1;
}
