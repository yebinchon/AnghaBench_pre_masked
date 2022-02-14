
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct symloc {int lineno_off; } ;
struct subfile {struct linetable* line_vector; } ;
struct linetable_entry {int dummy; } ;
struct linetable {int nitems; } ;
struct coff_symfile_info {int max_lineno_offset; } ;
typedef int main_subfile ;
typedef int file_ptr ;
struct TYPE_10__ {int local_linesz; } ;
struct TYPE_9__ {int line_vector_length; struct linetable* line_vector; struct linetable* name; } ;
struct TYPE_8__ {int begin; unsigned int funStartLine; int end; char* name; struct subfile* subfile; } ;
struct TYPE_7__ {TYPE_1__* objfile; scalar_t__ read_symtab_private; } ;
struct TYPE_6__ {int obfd; scalar_t__ sym_private; } ;
typedef int CORE_ADDR ;


 struct linetable* FUNC_0 (struct linetable*) ;
 TYPE_5__* FUNC_1 (int ) ;
 TYPE_4__* VAR_0 ;
 int FUNC_2 (struct subfile*,int,int,int ,int ,unsigned int*) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (struct subfile*,char,int) ;
 char* FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char) ;
 TYPE_2__* VAR_3 ;
 int FUNC_8 (struct linetable*) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct linetable*,int) ;
 struct linetable* FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12 (CORE_ADDR VAR_4, CORE_ADDR VAR_5)
{
  int VAR_6, VAR_7;
  file_ptr VAR_8 =
  ((struct coff_symfile_info *) VAR_3->objfile->sym_private)
  ->max_lineno_offset;


  struct subfile VAR_9;






  unsigned int VAR_10 = 0;

  unsigned *VAR_11;

  VAR_6 =
    ((struct symloc *) VAR_3->read_symtab_private)->lineno_off;
  if (VAR_6 == 0)
    goto return_after_cleanup;

  FUNC_3 (&VAR_9, '\0', sizeof (VAR_9));

  if (VAR_1 == 0)


    FUNC_2 (&VAR_9, VAR_6, 0, VAR_4, VAR_5,
        &VAR_10);

  else
    {


      int VAR_12 =
 FUNC_1 (VAR_3->objfile->obfd)->local_linesz;
      VAR_10 = 0;

      for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7)
 {
   struct subfile *VAR_13;


   if (VAR_6 < VAR_2[VAR_7].begin)
     {
       FUNC_2
  (&VAR_9, VAR_6, VAR_2[VAR_7].begin - VAR_12,
   VAR_4, 0, &VAR_10);
     }



   VAR_13 = VAR_2[VAR_7].subfile =
     (struct subfile *) FUNC_9 (sizeof (struct subfile));

   FUNC_3 (VAR_13, '\0', sizeof (struct subfile));
   VAR_11 = &(VAR_2[VAR_7].funStartLine);


   FUNC_2 (VAR_13, VAR_2[VAR_7].begin,
       VAR_2[VAR_7].end, VAR_4, 0, VAR_11);

   if (VAR_6 <= VAR_2[VAR_7].end)
     VAR_6 = VAR_2[VAR_7].end + VAR_12;
 }



      if (VAR_6 < VAR_8 + 1 - VAR_12)
 {
   FUNC_2 (&VAR_9, VAR_6, 0, VAR_4, VAR_5,
       &VAR_10);
 }
    }


  if (VAR_9.line_vector)
    {
      struct linetable *VAR_14, *VAR_15;

      VAR_15 = VAR_9.line_vector;




      VAR_14 = FUNC_0 (VAR_15);
      if (VAR_15 == VAR_14)
 {
   VAR_0->line_vector = (struct linetable *)
     FUNC_10 (VAR_15, (sizeof (struct linetable)
      + VAR_15->nitems * sizeof (struct linetable_entry)));
 }
      else
 {
   FUNC_8 (VAR_15);
   VAR_0->line_vector = VAR_14;
 }

      VAR_0->line_vector_length =
 VAR_0->line_vector->nitems;
    }



  for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7)
    {
      if ((VAR_2[VAR_7].subfile)->line_vector)
 {
   struct linetable *VAR_16, *VAR_17;

   VAR_17 = (VAR_2[VAR_7].subfile)->line_vector;




   VAR_16 = FUNC_0 (VAR_17);

   FUNC_5 ();
   {



     char *VAR_18 = FUNC_7 (VAR_2[VAR_7].name, '.');
     if (VAR_18 == ((void*)0))
       VAR_18 = " ?";
     FUNC_6 (VAR_18, (char *) 0);
     FUNC_8 (VAR_0->name);
   }
   VAR_0->name = FUNC_11 (VAR_2[VAR_7].name);


   if (VAR_17 == VAR_16)
     {
       VAR_0->line_vector =
  (struct linetable *) FUNC_10
  (VAR_17, (sizeof (struct linetable)
        + VAR_17->nitems * sizeof (struct linetable_entry)));

     }
   else
     {
       FUNC_8 (VAR_17);
       VAR_0->line_vector = VAR_16;
     }

   VAR_0->line_vector_length =
     VAR_0->line_vector->nitems;
   FUNC_6 (FUNC_4 (), (char *) 0);
 }
    }

return_after_cleanup:


  VAR_1 = 0;


  FUNC_3 (&VAR_9, '\0', sizeof (struct subfile));
}
