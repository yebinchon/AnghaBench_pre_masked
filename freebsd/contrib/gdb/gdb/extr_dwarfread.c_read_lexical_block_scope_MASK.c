
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;
struct dieinfo {int die_length; int at_high_pc; int at_low_pc; } ;
struct context_stack {int * locals; int start_addr; int old_blocks; } ;


 int FUNC_0 (int ,int **,int ,int ,int ,struct objfile*) ;
 int * VAR_0 ;
 struct context_stack* FUNC_1 () ;
 int FUNC_2 (char*,char*,struct objfile*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4 (struct dieinfo *VAR_1, char *VAR_2, char *VAR_3,
     struct objfile *VAR_4)
{
  struct context_stack *VAR_5;

  FUNC_3 (0, VAR_1->at_low_pc);
  FUNC_2 (VAR_2 + VAR_1->die_length, VAR_3, VAR_4);
  VAR_5 = FUNC_1 ();
  if (VAR_0 != ((void*)0))
    {
      FUNC_0 (0, &VAR_0, VAR_5->old_blocks, VAR_5->start_addr,
      VAR_1->at_high_pc, VAR_4);
    }
  VAR_0 = VAR_5->locals;
}
