
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ entry_point; scalar_t__ entry_func_lowpc; scalar_t__ entry_func_highpc; } ;
struct objfile {TYPE_1__ ei; } ;
struct dieinfo {scalar_t__ at_low_pc; scalar_t__ at_high_pc; int die_length; int * at_name; } ;
struct context_stack {int start_addr; int old_blocks; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ,int ,scalar_t__,struct objfile*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dieinfo*,struct objfile*) ;
 struct context_stack* FUNC_3 () ;
 int FUNC_4 (char*,char*,struct objfile*) ;
 struct context_stack* FUNC_5 (int ,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6 (struct dieinfo *VAR_5, char *VAR_6, char *VAR_7,
   struct objfile *VAR_8)
{
  struct context_stack *VAR_9;





  if (VAR_5->at_name == ((void*)0))
    {
      FUNC_0 (&VAR_4, "DIE @ 0x%x, AT_name tag missing",
   VAR_0);
      return;
    }

  if (VAR_8->ei.entry_point >= VAR_5->at_low_pc &&
      VAR_8->ei.entry_point < VAR_5->at_high_pc)
    {
      VAR_8->ei.entry_func_lowpc = VAR_5->at_low_pc;
      VAR_8->ei.entry_func_highpc = VAR_5->at_high_pc;
    }
  VAR_9 = FUNC_5 (0, VAR_5->at_low_pc);
  VAR_9->name = FUNC_2 (VAR_5, VAR_8);
  VAR_2 = &VAR_3;
  FUNC_4 (VAR_6 + VAR_5->die_length, VAR_7, VAR_8);
  VAR_9 = FUNC_3 ();

  FUNC_1 (VAR_9->name, &VAR_3, VAR_9->old_blocks,
  VAR_9->start_addr, VAR_5->at_high_pc, VAR_8);
  VAR_2 = &VAR_1;
}
