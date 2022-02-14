
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct type {int dummy; } ;
struct TYPE_3__ {scalar_t__ entry_point; scalar_t__ deprecated_entry_file_highpc; scalar_t__ deprecated_entry_file_lowpc; } ;
struct objfile {TYPE_1__ ei; int section_offsets; int * obfd; } ;
struct line_header {int dummy; } ;
struct comp_unit_head {int dummy; } ;
struct dwarf2_cu {int ftypes; struct comp_unit_head header; struct objfile* objfile; } ;
struct die_info {scalar_t__ tag; struct die_info* child; } ;
struct cleanup {int dummy; } ;
struct attribute {int dummy; } ;
typedef int make_cleanup_ftype ;
typedef int bfd ;
struct TYPE_4__ {int * at_producer; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (struct attribute*) ;
 unsigned int FUNC_2 (struct attribute*) ;
 int VAR_5 ;
 int FUNC_3 (struct objfile*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_4 (struct cleanup*) ;
 struct attribute* FUNC_5 (struct die_info*,int ,struct dwarf2_cu*) ;
 struct line_header* FUNC_6 (unsigned int,int *,struct dwarf2_cu*) ;
 int FUNC_7 (struct line_header*,char*,int *,struct dwarf2_cu*) ;
 int FUNC_8 (struct line_header*,unsigned int,char*,int *,struct dwarf2_cu*) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (struct die_info*,scalar_t__*,scalar_t__*,struct dwarf2_cu*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct dwarf2_cu*) ;
 struct cleanup* FUNC_12 (int *,void*) ;
 int FUNC_13 (int ,int ,int) ;
 int * VAR_8 ;
 int FUNC_14 (struct die_info*,struct dwarf2_cu*) ;
 int VAR_9 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (unsigned int,struct dwarf2_cu*) ;
 struct die_info* FUNC_17 (struct die_info*) ;
 int FUNC_18 (char*,char*,scalar_t__) ;
 char* FUNC_19 (char*,char) ;

__attribute__((used)) static void
FUNC_20 (struct die_info *VAR_10, struct dwarf2_cu *VAR_11)
{
  struct objfile *VAR_12 = VAR_11->objfile;
  struct comp_unit_head *VAR_13 = &VAR_11->header;
  struct cleanup *VAR_14 = FUNC_12 (VAR_8, 0);
  CORE_ADDR VAR_15 = ((CORE_ADDR) -1);
  CORE_ADDR VAR_16 = ((CORE_ADDR) 0);
  struct attribute *VAR_17;
  char *VAR_18 = "<unknown>";
  char *VAR_19 = ((void*)0);
  struct die_info *VAR_20;
  bfd *VAR_21 = VAR_12->obfd;
  struct line_header *VAR_22 = 0;
  CORE_ADDR VAR_23;

  VAR_23 = FUNC_0 (VAR_12->section_offsets, FUNC_3 (VAR_12));

  FUNC_9 (VAR_10, &VAR_15, &VAR_16, VAR_11);



  if (VAR_15 == ((CORE_ADDR) -1))
    VAR_15 = VAR_16;
  VAR_15 += VAR_23;
  VAR_16 += VAR_23;

  VAR_17 = FUNC_5 (VAR_10, VAR_3, VAR_11);
  if (VAR_17)
    {
      VAR_18 = FUNC_1 (VAR_17);
    }
  VAR_17 = FUNC_5 (VAR_10, VAR_0, VAR_11);
  if (VAR_17)
    {
      VAR_19 = FUNC_1 (VAR_17);
      if (VAR_19)
 {


   char *VAR_24 = FUNC_19 (VAR_19, ':');

   if (VAR_24 && VAR_24 != VAR_19 && VAR_24[-1] == '.' && VAR_24[1] == '/')
     VAR_19 = VAR_24 + 1;
 }
    }

  if (VAR_12->ei.entry_point >= VAR_15 &&
      VAR_12->ei.entry_point < VAR_16)
    {
      VAR_12->ei.deprecated_entry_file_lowpc = VAR_15;
      VAR_12->ei.deprecated_entry_file_highpc = VAR_16;
    }

  VAR_17 = FUNC_5 (VAR_10, VAR_1, VAR_11);
  if (VAR_17)
    {
      FUNC_16 (FUNC_2 (VAR_17), VAR_11);
    }


  VAR_9 = 2;
  FUNC_13 (VAR_11->ftypes, 0, VAR_5 * sizeof (struct type *));

  FUNC_18 (VAR_18, VAR_19, VAR_15);
  FUNC_15 ("DWARF 2");

  FUNC_11 (VAR_11);


  if (VAR_10->child != ((void*)0))
    {
      VAR_20 = VAR_10->child;
      while (VAR_20 && VAR_20->tag)
 {
   FUNC_14 (VAR_20, VAR_11);
   VAR_20 = FUNC_17 (VAR_20);
 }
    }


  VAR_17 = FUNC_5 (VAR_10, VAR_4, VAR_11);
  if (VAR_17)
    {
      unsigned int VAR_25 = FUNC_2 (VAR_17);
      VAR_22 = FUNC_6 (VAR_25, VAR_21, VAR_11);
      if (VAR_22)
        {
          FUNC_12 ((make_cleanup_ftype *) VAR_7,
                        (void *) VAR_22);
          FUNC_7 (VAR_22, VAR_19, VAR_21, VAR_11);
        }
    }





  VAR_17 = FUNC_5 (VAR_10, VAR_2, VAR_11);
  if (VAR_17 && VAR_22)
    {
      unsigned int VAR_26 = FUNC_2 (VAR_17);
      FUNC_8 (VAR_22, VAR_26,
                           VAR_19, VAR_21, VAR_11);
    }
  FUNC_4 (VAR_14);
}
