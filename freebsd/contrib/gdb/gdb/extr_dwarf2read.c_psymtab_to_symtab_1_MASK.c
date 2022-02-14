
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab {scalar_t__ language; } ;
struct partial_symtab {int readin; struct symtab* symtab; struct objfile* objfile; } ;
struct objfile {int section_offsets; int * obfd; } ;
struct TYPE_2__ {unsigned long offset; int base_known; void* base_address; int * dwarf2_abbrevs; } ;
struct dwarf2_cu {scalar_t__ language; TYPE_1__ header; int * list_in_scope; struct objfile* objfile; } ;
struct die_info {int dummy; } ;
struct cleanup {int dummy; } ;
struct attribute {int dummy; } ;
typedef int bfd ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct partial_symtab*) ;
 int FUNC_2 (struct partial_symtab*) ;
 char* FUNC_3 (struct partial_symtab*) ;
 unsigned long FUNC_4 (struct partial_symtab*) ;
 int FUNC_5 (struct partial_symtab*) ;
 int FUNC_6 (struct partial_symtab*) ;
 int FUNC_7 (struct partial_symtab*) ;
 int FUNC_8 (struct partial_symtab*) ;
 int FUNC_9 (struct partial_symtab*) ;
 int FUNC_10 (struct partial_symtab*) ;
 int FUNC_11 (struct partial_symtab*) ;
 int FUNC_12 (struct partial_symtab*) ;
 int FUNC_13 (struct partial_symtab*) ;
 int FUNC_14 (struct partial_symtab*) ;
 void* FUNC_15 (struct attribute*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_16 (struct objfile*) ;
 int FUNC_17 () ;
 int FUNC_18 (struct cleanup*) ;
 struct attribute* FUNC_19 (struct die_info*,int ,struct dwarf2_cu*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_20 (int *,struct dwarf2_cu*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct symtab* FUNC_21 (scalar_t__,struct objfile*,int ) ;
 int VAR_18 ;
 int FUNC_22 (struct die_info*,scalar_t__*,scalar_t__*,struct dwarf2_cu*) ;
 scalar_t__ VAR_19 ;
 struct cleanup* FUNC_23 (int ,int *) ;
 int FUNC_24 (struct die_info*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct die_info*,struct dwarf2_cu*) ;
 char* VAR_20 ;
 struct die_info* FUNC_27 (char*,int *,struct dwarf2_cu*) ;
 char* FUNC_28 (TYPE_1__*,char*,int *) ;
 int VAR_21 ;

__attribute__((used)) static void
FUNC_29 (struct partial_symtab *VAR_22)
{
  struct objfile *VAR_23 = VAR_22->objfile;
  bfd *VAR_24 = VAR_23->obfd;
  struct dwarf2_cu VAR_25;
  struct die_info *VAR_26;
  unsigned long VAR_27;
  CORE_ADDR VAR_28, VAR_29;
  struct die_info *VAR_30;
  char *VAR_31;
  struct symtab *VAR_32;
  struct cleanup *VAR_33;
  struct attribute *VAR_34;
  CORE_ADDR VAR_35;


  VAR_27 = FUNC_4 (VAR_22);
  VAR_7 = FUNC_3 (VAR_22);
  VAR_5 = FUNC_1 (VAR_22);
  VAR_6 = FUNC_2 (VAR_22);
  VAR_8 = FUNC_5 (VAR_22);
  VAR_9 = FUNC_6 (VAR_22);
  VAR_16 = FUNC_13 (VAR_22);
  VAR_17 = FUNC_14 (VAR_22);
  VAR_12 = FUNC_9 (VAR_22);
  VAR_13 = FUNC_10 (VAR_22);
  VAR_14 = FUNC_11 (VAR_22);
  VAR_15 = FUNC_12 (VAR_22);
  VAR_10 = FUNC_7 (VAR_22);
  VAR_11 = FUNC_8 (VAR_22);
  VAR_31 = VAR_7 + VAR_27;
  VAR_35 = FUNC_0 (VAR_23->section_offsets, FUNC_16 (VAR_23));


  VAR_20 = "";

  FUNC_25 (&VAR_4);
  VAR_33 = FUNC_23 (VAR_3, ((void*)0));

  FUNC_17 ();
  FUNC_23 (VAR_21, ((void*)0));

  VAR_25.objfile = VAR_23;


  VAR_31 = FUNC_28 (&VAR_25.header, VAR_31, VAR_24);


  FUNC_20 (VAR_24, &VAR_25);
  FUNC_23 (VAR_2, VAR_25.header.dwarf2_abbrevs);

  VAR_25.header.offset = VAR_27;

  VAR_25.list_in_scope = &VAR_18;

  VAR_26 = FUNC_27 (VAR_31, VAR_24, &VAR_25);

  FUNC_24 (VAR_26);







  VAR_25.header.base_known = 0;
  VAR_25.header.base_address = 0;

  VAR_34 = FUNC_19 (VAR_26, VAR_0, &VAR_25);
  if (VAR_34)
    {
      VAR_25.header.base_address = FUNC_15 (VAR_34);
      VAR_25.header.base_known = 1;
    }
  else
    {
      VAR_34 = FUNC_19 (VAR_26, VAR_1, &VAR_25);
      if (VAR_34)
 {
   VAR_25.header.base_address = FUNC_15 (VAR_34);
   VAR_25.header.base_known = 1;
 }
    }


  FUNC_26 (VAR_26, &VAR_25);




  FUNC_22 (VAR_26, &VAR_28, &VAR_29, &VAR_25);

  VAR_32 = FUNC_21 (VAR_29 + VAR_35, VAR_23, FUNC_16 (VAR_23));




  if (VAR_32 != ((void*)0)
      && !(VAR_25.language == VAR_19 && VAR_32->language != VAR_19))
    {
      VAR_32->language = VAR_25.language;
    }
  VAR_22->symtab = VAR_32;
  VAR_22->readin = 1;

  FUNC_18 (VAR_33);
}
