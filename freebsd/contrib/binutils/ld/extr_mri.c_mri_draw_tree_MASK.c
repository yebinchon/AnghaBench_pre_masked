
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* sorted; int * exclude_name_list; int name; } ;
struct wildcard_list {TYPE_1__ spec; int * next; } ;
struct section_name_struct {scalar_t__ vma; int ok_to_load; struct section_name_struct* next; int name; int alias; int * subalign; int * align; } ;
typedef int etree_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct section_name_struct* VAR_2 ;
 struct section_name_struct* VAR_3 ;
 struct section_name_struct* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct wildcard_list*,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int *,int *,int *,int ) ;
 int FUNC_3 (int ,char*,int *,int *) ;
 int FUNC_4 (struct section_name_struct**,int ,scalar_t__,int ,int ,int ) ;
 int VAR_7 ;
 void* VAR_8 ;
 struct section_name_struct* VAR_9 ;
 struct section_name_struct* VAR_10 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 struct section_name_struct* VAR_11 ;
 struct wildcard_list* FUNC_6 (int) ;

void
FUNC_7 (void)
{
  if (VAR_6)
    return;





  if (VAR_2 != ((void*)0))
    {
      struct section_name_struct *VAR_12;
      struct section_name_struct *VAR_13;

      if (VAR_10 == ((void*)0))
 VAR_10 = VAR_2;

      for (VAR_12 = VAR_2;
    VAR_12 != ((void*)0);
    VAR_12 = VAR_12->next)
 {
   int VAR_14 = 0;

   for (VAR_13 = VAR_10; VAR_14 == 0 && VAR_13 != ((void*)0); VAR_13 = VAR_13->next)
     {
       if (FUNC_5 (VAR_12->name, VAR_13->name) == 0)
  {
    VAR_13->vma = VAR_12->vma;
    VAR_14 = 1;
  }
     }

   if (!VAR_14)
     {

       FUNC_4 (&VAR_10, VAR_12->name, VAR_12->vma, 0, 0, 0);
     }
 }
    }



  if (VAR_9 != ((void*)0))
    {
      struct section_name_struct *VAR_15;
      struct section_name_struct *VAR_16;

      if (VAR_10 == ((void*)0))
 VAR_10 = VAR_9;


      for (VAR_15 = VAR_9; VAR_15; VAR_15 = VAR_15->next)
 for (VAR_16 = VAR_10; VAR_16; VAR_16 = VAR_16->next)
   if (FUNC_5 (VAR_16->name, VAR_15->name) == 0)
     VAR_16->ok_to_load = 1;
    }
  else
    {

      struct section_name_struct *VAR_17;

      for (VAR_17 = VAR_10; VAR_17; VAR_17 = VAR_17->next)
 VAR_17->ok_to_load = 1;
    }


  if (VAR_10 != ((void*)0))
    {

      struct section_name_struct *VAR_18 = VAR_10;

      while (VAR_18)
 {
   struct section_name_struct *VAR_19;
   etree_type *VAR_20 = 0;
   etree_type *VAR_21 = 0;
   struct wildcard_list *VAR_22;


   for (VAR_19 = VAR_4; VAR_19; VAR_19 = VAR_19->next)
     if (FUNC_5 (VAR_19->name, VAR_18->name) == 0)
       VAR_20 = VAR_19->align;

   for (VAR_19 = VAR_11; VAR_19; VAR_19 = VAR_19->next)
     if (FUNC_5 (VAR_19->name, VAR_18->name) == 0)
       VAR_21 = VAR_19->subalign;

   if (VAR_5 == 0)
     VAR_5 = VAR_18->vma ? VAR_18->vma : FUNC_0 (VAR_1, ".");

   FUNC_2 (VAR_18->name, VAR_5,
            VAR_18->ok_to_load ? 0 : VAR_7,
            VAR_20, VAR_21, ((void*)0), 0);
   VAR_5 = 0;
   VAR_22 = FUNC_6 (sizeof *VAR_22);
   VAR_22->next = ((void*)0);
   VAR_22->spec.name = VAR_18->name;
   VAR_22->spec.exclude_name_list = ((void*)0);
   VAR_22->spec.sorted = VAR_8;
   FUNC_1 (((void*)0), VAR_22, VAR_0);


   for (VAR_19 = VAR_3; VAR_19; VAR_19 = VAR_19->next)
     if (FUNC_5 (VAR_19->alias, VAR_18->name) == 0)
       {
  VAR_22 = FUNC_6 (sizeof *VAR_22);
  VAR_22->next = ((void*)0);
  VAR_22->spec.name = VAR_19->name;
  VAR_22->spec.exclude_name_list = ((void*)0);
  VAR_22->spec.sorted = VAR_8;
  FUNC_1 (((void*)0), VAR_22, VAR_0);
       }

   FUNC_3 (0, "*default*", ((void*)0), ((void*)0));

   VAR_18 = VAR_18->next;
 }
    }

  VAR_6 = 1;
}
