
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
struct TYPE_7__ {TYPE_2__** regs; } ;
typedef TYPE_1__ dataflow_set ;
typedef TYPE_2__* attrs ;
struct TYPE_8__ {int offset; int decl; int loc; struct TYPE_8__* next; } ;
typedef int HOST_WIDE_INT ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (dataflow_set *VAR_1, rtx VAR_2, bool VAR_3)
{
  attrs *VAR_4 = &VAR_1->regs[FUNC_0 (VAR_2)];
  attrs VAR_5, VAR_6;

  if (VAR_3)
    {
      tree VAR_7 = FUNC_1 (VAR_2);
      HOST_WIDE_INT VAR_8 = FUNC_2 (VAR_2);

      VAR_7 = FUNC_6 (VAR_7);

      FUNC_3 (VAR_1, ((void*)0), VAR_7, VAR_8);
    }

  for (VAR_5 = *VAR_4; VAR_5; VAR_5 = VAR_6)
    {
      VAR_6 = VAR_5->next;
      FUNC_4 (VAR_1, VAR_5->loc, VAR_5->decl, VAR_5->offset);
      FUNC_5 (VAR_0, VAR_5);
    }
  *VAR_4 = ((void*)0);
}
