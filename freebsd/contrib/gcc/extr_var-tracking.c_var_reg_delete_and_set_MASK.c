
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int rtx ;
struct TYPE_8__ {TYPE_2__** regs; } ;
typedef TYPE_1__ dataflow_set ;
typedef TYPE_2__* attrs ;
struct TYPE_9__ {scalar_t__ decl; scalar_t__ offset; struct TYPE_9__* next; int loc; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_8 (dataflow_set *VAR_1, rtx VAR_2, bool VAR_3)
{
  tree VAR_4 = FUNC_1 (VAR_2);
  HOST_WIDE_INT VAR_5 = FUNC_2 (VAR_2);
  attrs VAR_6, VAR_7;
  attrs *VAR_8;

  VAR_4 = FUNC_6 (VAR_4);

  VAR_8 = &VAR_1->regs[FUNC_0 (VAR_2)];
  for (VAR_6 = *VAR_8; VAR_6; VAR_6 = VAR_7)
    {
      VAR_7 = VAR_6->next;
      if (VAR_6->decl != VAR_4 || VAR_6->offset != VAR_5)
 {
   FUNC_4 (VAR_1, VAR_6->loc, VAR_6->decl, VAR_6->offset);
   FUNC_5 (VAR_0, VAR_6);
   *VAR_8 = VAR_7;
 }
      else
 {
   VAR_6->loc = VAR_2;
   VAR_8 = &VAR_6->next;
 }
    }
  if (VAR_3)
    FUNC_3 (VAR_1, VAR_2, VAR_4, VAR_5);
  FUNC_7 (VAR_1, VAR_2);
}
