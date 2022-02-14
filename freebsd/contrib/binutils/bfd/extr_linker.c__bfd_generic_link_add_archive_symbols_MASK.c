
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


struct bfd_link_info {scalar_t__ pei386_auto_import; TYPE_1__* hash; } ;
struct TYPE_21__ {struct bfd_link_hash_entry* next; } ;
struct TYPE_22__ {TYPE_3__ undef; } ;
struct TYPE_20__ {char* string; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_4__ u; TYPE_2__ root; } ;
struct archive_list {unsigned int indx; struct archive_list* next; } ;
struct archive_hash_table {int dummy; } ;
struct archive_hash_entry {struct archive_list* defs; } ;
struct TYPE_23__ {char* name; } ;
typedef TYPE_5__ carsym ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_24__ {int archive_pass; } ;
typedef TYPE_6__ bfd ;
struct TYPE_19__ {struct bfd_link_hash_entry* undefs_tail; struct bfd_link_hash_entry* undefs; } ;
struct TYPE_18__ {int symdef_count; TYPE_5__* symdefs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct archive_hash_table*,int) ;
 struct archive_hash_entry* FUNC_1 (struct archive_hash_table*,char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct archive_hash_table*) ;
 int FUNC_3 (struct archive_hash_table*,int ,int) ;
 TYPE_14__* FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int VAR_3 ;
 TYPE_6__* FUNC_6 (TYPE_6__*,unsigned int) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_8 (scalar_t__) ;
 int VAR_6 ;
 int * FUNC_9 (TYPE_6__*,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,char*) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (TYPE_6__*,struct bfd_link_info*,int *) ;

bfd_boolean
FUNC_15
  (bfd *VAR_7,
   struct bfd_link_info *VAR_8,
   bfd_boolean (*VAR_9) (bfd *, struct bfd_link_info *, bfd_boolean *))
{
  carsym *VAR_10;
  carsym *VAR_11;
  register carsym *VAR_12;
  int VAR_13;
  struct archive_hash_table VAR_14;
  unsigned int VAR_15;
  struct bfd_link_hash_entry **VAR_16;

  if (! FUNC_7 (VAR_7))
    {

      if (FUNC_9 (VAR_7, ((void*)0)) == ((void*)0))
 return VAR_1;
      FUNC_10 (VAR_3);
      return VAR_0;
    }

  VAR_10 = FUNC_4 (VAR_7)->symdefs;
  VAR_11 = VAR_10 + FUNC_4 (VAR_7)->symdef_count;



  if (! FUNC_3 (&VAR_14, VAR_2,
     sizeof (struct archive_hash_entry)))
    return VAR_0;
  for (VAR_12 = VAR_10, VAR_15 = 0; VAR_12 < VAR_11; VAR_12++, VAR_15++)
    {
      struct archive_hash_entry *VAR_17;
      struct archive_list *VAR_18, **VAR_19;

      VAR_17 = FUNC_1 (&VAR_14, VAR_12->name, VAR_1, VAR_0);
      if (VAR_17 == ((void*)0))
 goto error_return;
      VAR_18 = ((struct archive_list *)
    FUNC_0 (&VAR_14, sizeof (struct archive_list)));
      if (VAR_18 == ((void*)0))
 goto error_return;
      VAR_18->indx = VAR_15;
      for (VAR_19 = &VAR_17->defs; *VAR_19 != ((void*)0); VAR_19 = &(*VAR_19)->next)
 ;
      *VAR_19 = VAR_18;
      VAR_18->next = ((void*)0);
    }




  VAR_13 = VAR_7->archive_pass + 1;



  VAR_16 = &VAR_8->hash->undefs;
  while (*VAR_16 != ((void*)0))
    {
      struct bfd_link_hash_entry *VAR_20;
      struct archive_hash_entry *VAR_21;
      struct archive_list *VAR_22;

      VAR_20 = *VAR_16;



      if (VAR_20->type != VAR_5
   && VAR_20->type != VAR_4)
 {







   if (*VAR_16 != VAR_8->hash->undefs_tail)
     *VAR_16 = (*VAR_16)->u.undef.next;
   else
     VAR_16 = &(*VAR_16)->u.undef.next;
   continue;
 }


      VAR_21 = FUNC_1 (&VAR_14, VAR_20->root.string, VAR_0, VAR_0);
      if (VAR_21 == ((void*)0))
 {


   if (VAR_8->pei386_auto_import)
     {
       bfd_size_type VAR_23 = FUNC_13 (VAR_20->root.string) + 10;
       char *VAR_24 = FUNC_8 (VAR_23);
       if (VAR_24 == ((void*)0))
  return VAR_0;

       FUNC_12 (VAR_24, "__imp_%s", VAR_20->root.string);
       VAR_21 = FUNC_1 (&VAR_14, VAR_24, VAR_0, VAR_0);
       FUNC_11(VAR_24);
     }
   if (VAR_21 == ((void*)0))
     {
       VAR_16 = &(*VAR_16)->u.undef.next;
       continue;
     }
 }

      for (VAR_22 = VAR_21->defs; VAR_22 != ((void*)0); VAR_22 = VAR_22->next)
 {
   bfd *VAR_25;
   bfd_boolean VAR_26;


   if (VAR_20->type != VAR_5
       && VAR_20->type != VAR_4)
     break;

   VAR_25 = FUNC_6 (VAR_7, VAR_22->indx);
   if (VAR_25 == ((void*)0))
     goto error_return;



   if (VAR_25->archive_pass == -1
       || VAR_25->archive_pass == VAR_13)
     continue;


   if (! FUNC_5 (VAR_25, VAR_6))
     {
       VAR_25->archive_pass = -1;
       continue;
     }



   if (! (*VAR_9) (VAR_25, VAR_8, &VAR_26))
     goto error_return;

   if (! VAR_26)
     VAR_25->archive_pass = VAR_13;
   else
     {
       VAR_25->archive_pass = -1;



       ++VAR_13;
     }
 }

      VAR_16 = &(*VAR_16)->u.undef.next;
    }

  FUNC_2 (&VAR_14);


  VAR_7->archive_pass = VAR_13;

  return VAR_1;

 error_return:
  FUNC_2 (&VAR_14);
  return VAR_0;
}
