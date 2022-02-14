
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__** regs; } ;
typedef TYPE_1__ dataflow_set ;
typedef TYPE_2__* attrs ;
struct TYPE_7__ {int offset; int decl; int loc; struct TYPE_7__* next; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2 (dataflow_set *VAR_1, int VAR_2)
{
  attrs *VAR_3 = &VAR_1->regs[VAR_2];
  attrs VAR_4, VAR_5;

  for (VAR_4 = *VAR_3; VAR_4; VAR_4 = VAR_5)
    {
      VAR_5 = VAR_4->next;
      FUNC_0 (VAR_1, VAR_4->loc, VAR_4->decl, VAR_4->offset);
      FUNC_1 (VAR_0, VAR_4);
    }
  *VAR_3 = ((void*)0);
}
