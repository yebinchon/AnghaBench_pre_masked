
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_4__ {scalar_t__ size; } ;
struct objfile {char* name; TYPE_2__ static_psymbols; TYPE_1__ global_psymbols; scalar_t__ sym_private; int objfile_obstack; int * obfd; } ;
struct coff_symfile_info {char* debugsec; int symtbl_num_syms; scalar_t__ symtbl; scalar_t__ max_lineno_offset; scalar_t__ min_lineno_offset; } ;
struct cleanup {int dummy; } ;
struct bfd_section {int dummy; } ;
typedef scalar_t__ file_ptr ;
typedef unsigned int bfd_size_type ;
typedef int bfd ;
struct TYPE_6__ {int local_symesz; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned int,int *) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 struct bfd_section* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct bfd_section*,char*,scalar_t__,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,struct coff_symfile_info*) ;
 unsigned int FUNC_7 (int *,struct bfd_section*) ;
 int FUNC_8 (int *,scalar_t__,int ) ;
 TYPE_3__* FUNC_9 (int *) ;
 int FUNC_10 (struct cleanup*) ;
 int FUNC_11 (char*,char*,char*) ;
 int VAR_1 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct objfile*,int) ;
 int FUNC_15 (int *,scalar_t__,struct objfile*) ;
 int FUNC_16 (struct objfile*) ;
 struct cleanup* FUNC_17 (int ,int ) ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *,unsigned int) ;
 int FUNC_21 (char*) ;
 int VAR_2 ;
 int FUNC_22 (struct objfile*) ;
 int * VAR_3 ;

__attribute__((used)) static void
FUNC_23 (struct objfile *VAR_4, int VAR_5)
{
  bfd *VAR_6;
  int VAR_7;
  struct cleanup *VAR_8;
  int VAR_9;
  file_ptr VAR_10;
  file_ptr VAR_11;
  struct coff_symfile_info *VAR_12;
  char *VAR_13;
  unsigned int VAR_14;

  VAR_12 = (struct coff_symfile_info *) VAR_4->sym_private;
  VAR_3 = VAR_6 = VAR_4->obfd;
  VAR_13 = VAR_4->name;

  VAR_9 = FUNC_5 (VAR_6);
  VAR_10 = FUNC_19 (VAR_6);
  VAR_11 = VAR_10 +
    VAR_9 * FUNC_9 (VAR_6)->local_symesz;

  VAR_12->min_lineno_offset = 0;
  VAR_12->max_lineno_offset = 0;
  FUNC_6 (VAR_6, VAR_1, VAR_12);

  if (VAR_9 > 0)
    {

      FUNC_15 (VAR_6, VAR_11, VAR_4);


      {
 struct bfd_section *VAR_15;
 bfd_size_type VAR_16;
 char *VAR_17 = ((void*)0);

 VAR_15 = FUNC_3 (VAR_6, ".debug");
 if (VAR_15)
   {
     VAR_16 = FUNC_7 (VAR_6, VAR_15);
     if (VAR_16)
       {
  VAR_17 =
    (char *) FUNC_20 (&VAR_4->objfile_obstack, VAR_16);

  if (!FUNC_4 (VAR_6, VAR_15, VAR_17,
            (file_ptr) 0, VAR_16))
    {
      FUNC_11 ("Error reading .debug section of `%s': %s",
      VAR_13, FUNC_1 (FUNC_2 ()));
    }
       }
   }
 ((struct coff_symfile_info *) VAR_4->sym_private)->debugsec =
   VAR_17;
      }
    }



  VAR_7 = FUNC_8 (VAR_6, VAR_10, VAR_0);
  if (VAR_7 < 0)
    FUNC_11 ("Error reading symbols from %s: %s",
    VAR_13, FUNC_1 (FUNC_2 ()));
  VAR_14 = FUNC_9 (VAR_6)->local_symesz * VAR_9;
  ((struct coff_symfile_info *) VAR_4->sym_private)->symtbl =
    FUNC_20 (&VAR_4->objfile_obstack, VAR_14);
  ((struct coff_symfile_info *) VAR_4->sym_private)->symtbl_num_syms =
    VAR_9;

  VAR_7 = FUNC_0 (((struct coff_symfile_info *) VAR_4->sym_private)->symtbl,
     VAR_14, VAR_6);
  if (VAR_7 != VAR_14)
    FUNC_21 ("reading symbol table");


  if (VAR_5
      || (VAR_4->global_psymbols.size == 0
   && VAR_4->static_psymbols.size == 0))




    FUNC_14 (VAR_4, VAR_9);

  FUNC_12 ();
  VAR_8 = FUNC_17 (VAR_2, 0);

  FUNC_13 ();
  FUNC_18 ();




  FUNC_22 (VAR_4);




  FUNC_16 (VAR_4);

  FUNC_10 (VAR_8);
}
