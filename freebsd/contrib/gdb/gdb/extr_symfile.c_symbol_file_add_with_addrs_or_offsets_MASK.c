
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct section_offsets {int dummy; } ;
struct section_addr_info {int num_sections; int * other; } ;
struct partial_symtab {struct partial_symtab* next; } ;
struct objfile {int * sf; TYPE_1__* separate_debug_objfile; struct partial_symtab* psymtabs; } ;
struct cleanup {int dummy; } ;
typedef int bfd ;
struct TYPE_2__ {struct objfile* separate_debug_objfile_backlink; } ;


 int VAR_0 ;
 struct section_addr_info* FUNC_0 (int ) ;
 struct objfile* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (struct objfile*) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_2 ;
 struct cleanup* FUNC_9 (int (*) (char*),struct section_addr_info*) ;
 int FUNC_10 (struct objfile*,int,int) ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (struct partial_symtab*) ;
 int FUNC_15 (TYPE_1__*,struct objfile*) ;
 int FUNC_16 (char*,char*) ;
 scalar_t__ VAR_3 ;
 void* FUNC_17 (char*,int,struct section_addr_info*,int ,int) ;
 int * FUNC_18 (char*) ;
 int FUNC_19 (struct objfile*,struct section_addr_info*,struct section_offsets*,int,int,int) ;
 int FUNC_20 (struct objfile*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*) ;

__attribute__((used)) static struct objfile *
FUNC_23 (char *VAR_4, int VAR_5,
                                       struct section_addr_info *VAR_6,
                                       struct section_offsets *VAR_7,
                                       int VAR_8,
                                       int VAR_9, int VAR_10)
{
  struct objfile *VAR_11;
  struct partial_symtab *VAR_12;
  char *VAR_13;
  bfd *VAR_14;
  struct section_addr_info *VAR_15;
  struct cleanup *VAR_16;




  VAR_14 = FUNC_18 (VAR_4);

  if ((FUNC_7 () || FUNC_8 ())
      && VAR_9
      && VAR_5
      && !FUNC_16 ("Load new symbol table from \"%s\"? ", VAR_4))
    FUNC_4 ("Not confirmed.");

  VAR_11 = FUNC_1 (VAR_14, VAR_10);

  VAR_15 = FUNC_0 (FUNC_2 (VAR_14));
  VAR_16 = FUNC_9 (FUNC_22, VAR_15);
  if (VAR_6)
    {
      int VAR_17;
      VAR_15->num_sections = VAR_6->num_sections;
      for (VAR_17 = 0; VAR_17 < VAR_6->num_sections; VAR_17++)
 VAR_15->other[VAR_17] = VAR_6->other[VAR_17];
    }




  if (VAR_5 || VAR_2)
    {
      if (&FUNC_12)
 FUNC_12 (VAR_4);
      else
 {
   FUNC_13 ("Reading symbols from %s...", VAR_4);
   FUNC_21 ("");
   FUNC_6 (VAR_1);
 }
    }
  FUNC_19 (VAR_11, VAR_6, VAR_7, VAR_8,
       VAR_9, VAR_5);






  if ((VAR_10 & VAR_0) || VAR_3)
    {
      if (VAR_5 || VAR_2)
 {
   FUNC_13 ("expanding to full symbols...");
   FUNC_21 ("");
   FUNC_6 (VAR_1);
 }

      for (VAR_12 = VAR_11->psymtabs;
    VAR_12 != ((void*)0);
    VAR_12 = VAR_12->next)
 {
   FUNC_14 (VAR_12);
 }
    }

  VAR_13 = FUNC_5 (VAR_11);
  if (VAR_13)
    {
      if (VAR_6 != ((void*)0))
 {
   VAR_11->separate_debug_objfile
            = FUNC_17 (VAR_13, VAR_5, VAR_15, 0, VAR_10);
 }
      else
 {
   VAR_11->separate_debug_objfile
            = FUNC_17 (VAR_13, VAR_5, ((void*)0), 0, VAR_10);
 }
      VAR_11->separate_debug_objfile->separate_debug_objfile_backlink
        = VAR_11;



      FUNC_15 (VAR_11->separate_debug_objfile, VAR_11);

      FUNC_22 (VAR_13);
    }

  if (!FUNC_8 () && !FUNC_7 ())
    {
      FUNC_21 ("");
      FUNC_13 ("(no debugging symbols found)...");
      FUNC_21 ("");
    }

  if (VAR_5 || VAR_2)
    {
      if (&FUNC_11)
 FUNC_11 ();
      else
 {
   FUNC_13 ("done.\n");
 }
    }




  FUNC_6 (VAR_1);

  FUNC_3 (VAR_16);

  if (VAR_11->sf == ((void*)0))
    return VAR_11;

  FUNC_10 (VAR_11, VAR_9, VAR_5);

  if (&FUNC_20)
    FUNC_20 (VAR_11);

  return (VAR_11);
}
