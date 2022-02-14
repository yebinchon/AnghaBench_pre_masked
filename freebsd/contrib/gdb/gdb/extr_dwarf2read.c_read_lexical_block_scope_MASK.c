
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int section_offsets; } ;
struct dwarf2_cu {struct objfile* objfile; } ;
struct die_info {scalar_t__ tag; struct die_info* child; } ;
struct context_stack {int * locals; int start_addr; int old_blocks; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct objfile*) ;
 int FUNC_2 (struct die_info*,scalar_t__*,scalar_t__*,struct dwarf2_cu*) ;
 int FUNC_3 (int ,int **,int ,int ,scalar_t__,struct objfile*) ;
 int * VAR_0 ;
 struct context_stack* FUNC_4 () ;
 int FUNC_5 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_6 (int ,scalar_t__) ;
 struct die_info* FUNC_7 (struct die_info*) ;

__attribute__((used)) static void
FUNC_8 (struct die_info *VAR_1, struct dwarf2_cu *VAR_2)
{
  struct objfile *VAR_3 = VAR_2->objfile;
  struct context_stack *VAR_4;
  CORE_ADDR VAR_5, VAR_6;
  struct die_info *VAR_7;
  CORE_ADDR VAR_8;

  VAR_8 = FUNC_0 (VAR_3->section_offsets, FUNC_1 (VAR_3));






  if (!FUNC_2 (VAR_1, &VAR_5, &VAR_6, VAR_2))
    return;
  VAR_5 += VAR_8;
  VAR_6 += VAR_8;

  FUNC_6 (0, VAR_5);
  if (VAR_1->child != ((void*)0))
    {
      VAR_7 = VAR_1->child;
      while (VAR_7 && VAR_7->tag)
 {
   FUNC_5 (VAR_7, VAR_2);
   VAR_7 = FUNC_7 (VAR_7);
 }
    }
  VAR_4 = FUNC_4 ();

  if (VAR_0 != ((void*)0))
    {
      FUNC_3 (0, &VAR_0, VAR_4->old_blocks, VAR_4->start_addr,
      VAR_6, VAR_3);
    }
  VAR_0 = VAR_4->locals;
}
