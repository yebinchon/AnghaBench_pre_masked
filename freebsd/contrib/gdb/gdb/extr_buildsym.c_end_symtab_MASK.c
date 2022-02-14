
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int block_line_section; char* dirname; int primary; int debugformat; int language; int * free_func; int free_code; struct linetable* linetable; int * macro_table; struct blockvector* blockvector; } ;
struct subfile {struct subfile* next; int * debugformat; struct linetable* line_vector; int * dirname; int * name; int language; } ;
struct pending_block {struct pending_block* next; struct block* block; } ;
struct objfile {int flags; int objfile_obstack; } ;
struct linetable_entry {int dummy; } ;
struct linetable {int nitems; int item; } ;
struct context_stack {int start_addr; int old_blocks; int name; } ;
struct blockvector {int dummy; } ;
struct block {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct blockvector*,int ) ;
 scalar_t__ FUNC_1 (struct block*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 struct symtab* FUNC_3 (int *,struct objfile*) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,int *) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_7 (int ,int **,int ,int ,int ,struct objfile*) ;
 int FUNC_8 (struct objfile*) ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 struct blockvector* FUNC_9 (struct objfile*) ;
 int FUNC_10 (struct linetable*,struct linetable*,int) ;
 int FUNC_11 (int *,int,int *) ;
 scalar_t__ FUNC_12 (int *,int) ;
 struct pending_block* VAR_12 ;
 int * VAR_13 ;
 struct context_stack* FUNC_13 () ;
 int FUNC_14 (int ,int,int,int ) ;
 int FUNC_15 (char*,int *) ;
 int FUNC_16 (int *) ;
 struct subfile* VAR_14 ;
 int VAR_15 ;
 int FUNC_17 (void*) ;
 scalar_t__ FUNC_18 (char*,int) ;

struct symtab *
FUNC_19 (CORE_ADDR VAR_16, struct objfile *VAR_17, int VAR_18)
{
  struct symtab *VAR_19 = ((void*)0);
  struct blockvector *VAR_20;
  struct subfile *VAR_21;
  struct context_stack *VAR_22;
  struct subfile *VAR_23;




  if (VAR_3 > 0)
    {
      VAR_22 = FUNC_13 ();

      FUNC_7 (VAR_22->name, &VAR_11, VAR_22->old_blocks,
      VAR_22->start_addr, VAR_16, VAR_17);

      if (VAR_3 > 0)
 {





   FUNC_5 (&VAR_15,
              "Context stack not empty in end_symtab");
   VAR_3 = 0;
 }
    }



  if ((VAR_17->flags & VAR_0) && VAR_12)
    {

      int VAR_24;
      do
 {
   struct pending_block *VAR_25, *VAR_26;

   VAR_25 = VAR_12;
   VAR_26 = VAR_25->next;
   VAR_24 = 0;

   while (VAR_26)
     {


       if (FUNC_1 (VAR_25->block) < FUNC_1 (VAR_26->block))
  {
    struct block *VAR_27 = VAR_25->block;
    VAR_25->block = VAR_26->block;
    VAR_26->block = VAR_27;
    VAR_24 = 1;
  }
       VAR_25 = VAR_26;
       VAR_26 = VAR_26->next;
     }
 }
      while (VAR_24);
    }
  FUNC_4 ();
  FUNC_8 (VAR_17);

  if (VAR_12 == ((void*)0)
      && VAR_5 == ((void*)0)
      && VAR_7 == ((void*)0)
      && VAR_8 == 0
      && VAR_13 == ((void*)0))
    {


      VAR_20 = ((void*)0);
    }
  else
    {


      FUNC_7 (0, &VAR_5, 0, VAR_10, VAR_16,
      VAR_17);
      FUNC_7 (0, &VAR_7, 0, VAR_10, VAR_16,
      VAR_17);
      VAR_20 = FUNC_9 (VAR_17);
      FUNC_6 (FUNC_0 (VAR_20, VAR_1),
        &VAR_17->objfile_obstack);
    }




                            ;




  for (VAR_21 = VAR_14; VAR_21; VAR_21 = VAR_23)
    {
      int VAR_28 = 0;
      VAR_19 = ((void*)0);



      if (VAR_20)
 {
   if (VAR_21->line_vector)
     {
       VAR_28 = sizeof (struct linetable) +
         VAR_21->line_vector->nitems * sizeof (struct linetable_entry);
       if (VAR_17->flags & VAR_0)
  FUNC_14 (VAR_21->line_vector->item,
         VAR_21->line_vector->nitems,
       sizeof (struct linetable_entry), VAR_2);
     }


   VAR_19 = FUNC_3 (VAR_21->name, VAR_17);


   VAR_19->blockvector = VAR_20;
          VAR_19->macro_table = VAR_13;
   if (VAR_21->line_vector)
     {

       VAR_19->linetable = (struct linetable *)
  FUNC_12 (&VAR_17->objfile_obstack, VAR_28);
       FUNC_10 (VAR_19->linetable, VAR_21->line_vector, VAR_28);
     }
   else
     {
       VAR_19->linetable = ((void*)0);
     }
   VAR_19->block_line_section = VAR_18;
   if (VAR_21->dirname)
     {

       VAR_19->dirname = (char *)
  FUNC_12 (&VAR_17->objfile_obstack,
          FUNC_16 (VAR_21->dirname) + 1);
       FUNC_15 (VAR_19->dirname, VAR_21->dirname);
     }
   else
     {
       VAR_19->dirname = ((void*)0);
     }
   VAR_19->free_code = VAR_6;
   VAR_19->free_func = ((void*)0);







   VAR_19->language = VAR_21->language;


   if (VAR_21->debugformat != ((void*)0))
     {
       VAR_19->debugformat = FUNC_11 (VAR_21->debugformat,
           FUNC_16 (VAR_21->debugformat),
        &VAR_17->objfile_obstack);
     }





   VAR_19->primary = 0;
 }
      if (VAR_21->name != ((void*)0))
 {
   FUNC_17 ((void *) VAR_21->name);
 }
      if (VAR_21->dirname != ((void*)0))
 {
   FUNC_17 ((void *) VAR_21->dirname);
 }
      if (VAR_21->line_vector != ((void*)0))
 {
   FUNC_17 ((void *) VAR_21->line_vector);
 }
      if (VAR_21->debugformat != ((void*)0))
 {
   FUNC_17 ((void *) VAR_21->debugformat);
 }

      VAR_23 = VAR_21->next;
      FUNC_17 ((void *) VAR_21);
    }


  if (VAR_19)
    {
      VAR_19->primary = 1;
    }

  VAR_9 = ((void*)0);
  VAR_4 = ((void*)0);
  VAR_13 = ((void*)0);

  return VAR_19;
}
