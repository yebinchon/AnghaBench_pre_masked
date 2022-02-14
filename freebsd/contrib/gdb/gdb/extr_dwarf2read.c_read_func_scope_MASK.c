
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ entry_point; scalar_t__ entry_func_highpc; scalar_t__ entry_func_lowpc; } ;
struct objfile {TYPE_1__ ei; int section_offsets; } ;
struct dwarf2_cu {scalar_t__ language; int * list_in_scope; struct objfile* objfile; } ;
struct die_info {scalar_t__ tag; struct die_info* child; int type; } ;
struct context_stack {int params; int locals; int old_blocks; int name; } ;
struct cleanup {int dummy; } ;
struct attribute {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct objfile*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,struct dwarf2_cu*) ;
 char* FUNC_3 (struct die_info*,struct dwarf2_cu*) ;
 struct die_info* FUNC_4 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_5 (struct cleanup*) ;
 struct attribute* FUNC_6 (struct die_info*,int ,struct dwarf2_cu*) ;
 int FUNC_7 (struct die_info*,scalar_t__*,scalar_t__*,struct dwarf2_cu*) ;
 char* FUNC_8 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_9 (struct attribute*,int ,struct dwarf2_cu*) ;
 int VAR_1 ;
 int FUNC_10 (int ,int *,int ,scalar_t__,scalar_t__,struct objfile*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct cleanup* FUNC_11 (int ,char*) ;
 int FUNC_12 (struct die_info*,int ,struct dwarf2_cu*) ;
 scalar_t__ FUNC_13 () ;
 int VAR_4 ;
 struct context_stack* FUNC_14 () ;
 int FUNC_15 (struct die_info*,struct dwarf2_cu*) ;
 char const* VAR_5 ;
 struct context_stack* FUNC_16 (int ,scalar_t__) ;
 struct die_info* FUNC_17 (struct die_info*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_18 (struct die_info *VAR_7, struct dwarf2_cu *VAR_8)
{
  struct objfile *VAR_9 = VAR_8->objfile;
  struct context_stack *VAR_10;
  CORE_ADDR VAR_11;
  CORE_ADDR VAR_12;
  struct die_info *VAR_13;
  struct attribute *VAR_14;
  char *VAR_15;
  const char *VAR_16 = VAR_5;
  struct cleanup *VAR_17 = ((void*)0);
  CORE_ADDR VAR_18;

  VAR_18 = FUNC_0 (VAR_9->section_offsets, FUNC_1 (VAR_9));

  VAR_15 = FUNC_8 (VAR_7, VAR_8);



  if (VAR_15 == ((void*)0) || !FUNC_7 (VAR_7, &VAR_11, &VAR_12, VAR_8))
    return;

  if (VAR_8->language == VAR_2)
    {
      struct die_info *VAR_19 = FUNC_4 (VAR_7, VAR_8);
      if (VAR_19 != ((void*)0))
 {
   char *VAR_20 = FUNC_3 (VAR_19, VAR_8);
   VAR_5 = VAR_20;
   VAR_17 = FUNC_11 (VAR_6, VAR_20);
 }
    }

  VAR_11 += VAR_18;
  VAR_12 += VAR_18;


  FUNC_2 (VAR_15, VAR_11, VAR_12, VAR_8);

  if (VAR_9->ei.entry_point >= VAR_11 &&
      VAR_9->ei.entry_point < VAR_12)
    {
      VAR_9->ei.entry_func_lowpc = VAR_11;
      VAR_9->ei.entry_func_highpc = VAR_12;
    }

  VAR_10 = FUNC_16 (0, VAR_11);
  VAR_10->name = FUNC_12 (VAR_7, VAR_7->type, VAR_8);



  VAR_14 = FUNC_6 (VAR_7, VAR_0, VAR_8);
  if (VAR_14)
    FUNC_9 (VAR_14, VAR_10->name, VAR_8);

  VAR_8->list_in_scope = &VAR_3;

  if (VAR_7->child != ((void*)0))
    {
      VAR_13 = VAR_7->child;
      while (VAR_13 && VAR_13->tag)
 {
   FUNC_15 (VAR_13, VAR_8);
   VAR_13 = FUNC_17 (VAR_13);
 }
    }

  VAR_10 = FUNC_14 ();

  FUNC_10 (VAR_10->name, &VAR_3, VAR_10->old_blocks,
  VAR_11, VAR_12, VAR_9);





  VAR_3 = VAR_10->locals;
  VAR_4 = VAR_10->params;



  if (FUNC_13 ())
    VAR_8->list_in_scope = &VAR_1;

  VAR_5 = VAR_16;
  if (VAR_17 != ((void*)0))
    FUNC_5 (VAR_17);
}
