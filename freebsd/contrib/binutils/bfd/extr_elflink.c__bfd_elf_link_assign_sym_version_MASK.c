
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {struct bfd_elf_version_tree* vertree; } ;
struct TYPE_12__ {char* string; } ;
struct TYPE_10__ {scalar_t__ link; } ;
struct TYPE_11__ {TYPE_1__ i; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_3__ root; TYPE_2__ u; } ;
struct elf_link_hash_entry {int hidden; int dynindx; TYPE_5__ verinfo; TYPE_4__ root; int def_regular; } ;
struct elf_info_failed {void* failed; struct bfd_link_info* info; } ;
struct elf_backend_data {int (* elf_backend_hide_symbol ) (struct bfd_link_info*,struct elf_link_hash_entry*,void*) ;} ;
struct elf_assign_sym_version_info {struct bfd_elf_version_tree* verdefs; void* failed; int output_bfd; struct bfd_link_info* info; } ;
struct bfd_link_info {int export_dynamic; scalar_t__ executable; } ;
struct TYPE_15__ {int * list; } ;
struct bfd_elf_version_tree {char* name; unsigned int name_indx; scalar_t__ vernum; TYPE_6__ locals; struct bfd_elf_version_expr* (* match ) (TYPE_6__*,struct bfd_elf_version_expr*,char*) ;TYPE_6__ globals; struct bfd_elf_version_tree* next; void* used; } ;
struct bfd_elf_version_expr {int script; char* pattern; scalar_t__ symver; } ;
typedef int bfd_size_type ;
typedef void* bfd_boolean ;


 char VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct elf_link_hash_entry*,struct elf_info_failed*) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 struct bfd_elf_version_tree* FUNC_5 (int ,int) ;
 int FUNC_6 (char*) ;
 struct elf_backend_data* FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,size_t) ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 struct bfd_elf_version_expr* FUNC_11 (TYPE_6__*,struct bfd_elf_version_expr*,char*) ;
 struct bfd_elf_version_expr* FUNC_12 (TYPE_6__*,struct bfd_elf_version_expr*,char*) ;
 int FUNC_13 (struct bfd_link_info*,struct elf_link_hash_entry*,void*) ;
 int FUNC_14 (int ,int ,char*) ;
 struct bfd_elf_version_expr* FUNC_15 (TYPE_6__*,struct bfd_elf_version_expr*,char*) ;
 int FUNC_16 (struct bfd_link_info*,struct elf_link_hash_entry*,void*) ;
 struct bfd_elf_version_expr* FUNC_17 (TYPE_6__*,struct bfd_elf_version_expr*,char*) ;
 int FUNC_18 (struct bfd_link_info*,struct elf_link_hash_entry*,void*) ;

bfd_boolean
FUNC_19 (struct elf_link_hash_entry *VAR_5, void *VAR_6)
{
  struct elf_assign_sym_version_info *VAR_7;
  struct bfd_link_info *VAR_8;
  const struct elf_backend_data *VAR_9;
  struct elf_info_failed VAR_10;
  char *VAR_11;
  bfd_size_type VAR_12;

  VAR_7 = VAR_6;
  VAR_8 = VAR_7->info;

  if (VAR_5->root.type == VAR_4)
    VAR_5 = (struct elf_link_hash_entry *) VAR_5->root.u.i.link;


  VAR_10.failed = VAR_1;
  VAR_10.info = VAR_8;
  if (! FUNC_1 (VAR_5, &VAR_10))
    {
      if (VAR_10.failed)
 VAR_7->failed = VAR_2;
      return VAR_1;
    }



  if (!VAR_5->def_regular)
    return VAR_2;

  VAR_9 = FUNC_7 (VAR_7->output_bfd);
  VAR_11 = FUNC_9 (VAR_5->root.root.string, VAR_0);
  if (VAR_11 != ((void*)0) && VAR_5->verinfo.vertree == ((void*)0))
    {
      struct bfd_elf_version_tree *VAR_13;
      bfd_boolean VAR_14;

      VAR_14 = VAR_2;



      ++VAR_11;
      if (*VAR_11 == VAR_0)
 {
   VAR_14 = VAR_1;
   ++VAR_11;
 }


      if (*VAR_11 == '\0')
 {
   if (VAR_14)
     VAR_5->hidden = 1;
   return VAR_2;
 }


      for (VAR_13 = VAR_7->verdefs; VAR_13 != ((void*)0); VAR_13 = VAR_13->next)
 {
   if (FUNC_10 (VAR_13->name, VAR_11) == 0)
     {
       size_t VAR_15;
       char *VAR_16;
       struct bfd_elf_version_expr *VAR_17;

       VAR_15 = VAR_11 - VAR_5->root.root.string;
       VAR_16 = FUNC_3 (VAR_15);
       if (VAR_16 == ((void*)0))
  return VAR_1;
       FUNC_8 (VAR_16, VAR_5->root.root.string, VAR_15 - 1);
       VAR_16[VAR_15 - 1] = '\0';
       if (VAR_16[VAR_15 - 2] == VAR_0)
  VAR_16[VAR_15 - 2] = '\0';

       VAR_5->verinfo.vertree = VAR_13;
       VAR_13->used = VAR_2;
       VAR_17 = ((void*)0);

       if (VAR_13->globals.list != ((void*)0))
  VAR_17 = (*VAR_13->match) (&VAR_13->globals, ((void*)0), VAR_16);



       if (VAR_17 == ((void*)0) && VAR_13->locals.list != ((void*)0))
  {
    VAR_17 = (*VAR_13->match) (&VAR_13->locals, ((void*)0), VAR_16);
    if (VAR_17 != ((void*)0)
        && VAR_5->dynindx != -1
        && ! VAR_8->export_dynamic)
      (*VAR_9->elf_backend_hide_symbol) (VAR_8, VAR_5, VAR_2);
  }

       FUNC_6 (VAR_16);
       break;
     }
 }



      if (VAR_13 == ((void*)0) && VAR_8->executable)
 {
   struct bfd_elf_version_tree **VAR_18;
   int VAR_19;



   if (VAR_5->dynindx == -1)
     return VAR_2;

   VAR_12 = sizeof *VAR_13;
   VAR_13 = FUNC_5 (VAR_7->output_bfd, VAR_12);
   if (VAR_13 == ((void*)0))
     {
       VAR_7->failed = VAR_2;
       return VAR_1;
     }

   VAR_13->name = VAR_11;
   VAR_13->name_indx = (unsigned int) -1;
   VAR_13->used = VAR_2;

   VAR_19 = 1;

   if (VAR_7->verdefs != ((void*)0) && VAR_7->verdefs->vernum == 0)
     VAR_19 = 0;
   for (VAR_18 = &VAR_7->verdefs; *VAR_18 != ((void*)0); VAR_18 = &(*VAR_18)->next)
     ++VAR_19;
   VAR_13->vernum = VAR_19;

   *VAR_18 = VAR_13;

   VAR_5->verinfo.vertree = VAR_13;
 }
      else if (VAR_13 == ((void*)0))
 {


   FUNC_2)
     (FUNC_0("%B: version node not found for symbol %s"),
      VAR_7->output_bfd, VAR_5->root.root.string);
   FUNC_4 (VAR_3);
   VAR_7->failed = VAR_2;
   return VAR_1;
 }

      if (VAR_14)
 VAR_5->hidden = 1;
    }



  if (VAR_5->verinfo.vertree == ((void*)0) && VAR_7->verdefs != ((void*)0))
    {
      struct bfd_elf_version_tree *VAR_20;
      struct bfd_elf_version_tree *VAR_21;
      struct bfd_elf_version_expr *VAR_22;




      VAR_21 = ((void*)0);
      for (VAR_20 = VAR_7->verdefs; VAR_20 != ((void*)0); VAR_20 = VAR_20->next)
 {
   if (VAR_20->globals.list != ((void*)0))
     {
       bfd_boolean VAR_23;

       VAR_23 = VAR_1;
       VAR_22 = ((void*)0);
       while ((VAR_22 = (*VAR_20->match) (&VAR_20->globals, VAR_22,
           VAR_5->root.root.string)) != ((void*)0))
  if (VAR_22->symver)
    VAR_23 = VAR_2;
  else
    {



      VAR_5->verinfo.vertree = VAR_20;
      VAR_21 = ((void*)0);
      VAR_22->script = 1;
      break;
    }
       if (VAR_22 != ((void*)0))
  break;
       else if (VAR_23)


  (*VAR_9->elf_backend_hide_symbol) (VAR_8, VAR_5, VAR_2);
     }

   if (VAR_20->locals.list != ((void*)0))
     {
       VAR_22 = ((void*)0);
       while ((VAR_22 = (*VAR_20->match) (&VAR_20->locals, VAR_22,
           VAR_5->root.root.string)) != ((void*)0))
  {
    VAR_21 = VAR_20;



    if (VAR_22->pattern[0] != '*' || VAR_22->pattern[1] != '\0')
      break;
  }

       if (VAR_22 != ((void*)0))
  break;
     }
 }

      if (VAR_21 != ((void*)0))
 {
   VAR_5->verinfo.vertree = VAR_21;
   if (VAR_5->dynindx != -1
       && ! VAR_8->export_dynamic)
     {
       (*VAR_9->elf_backend_hide_symbol) (VAR_8, VAR_5, VAR_2);
     }
 }
    }

  return VAR_2;
}
