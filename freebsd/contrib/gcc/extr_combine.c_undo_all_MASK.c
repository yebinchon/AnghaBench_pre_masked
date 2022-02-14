
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int m; int i; int r; } ;
struct TYPE_4__ {int * r; int * i; } ;
struct undo {int kind; struct undo* next; TYPE_2__ old_contents; TYPE_1__ where; } ;
struct TYPE_6__ {struct undo* undos; struct undo* frees; } ;


 int FUNC_0 (int ,int ) ;



 int FUNC_1 () ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  struct undo *VAR_1, *VAR_2;

  for (VAR_1 = VAR_0.undos; VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;
      switch (VAR_1->kind)
 {
 case 128:
   *VAR_1->where.r = VAR_1->old_contents.r;
   break;
 case 130:
   *VAR_1->where.i = VAR_1->old_contents.i;
   break;
 case 129:
   FUNC_0 (*VAR_1->where.r, VAR_1->old_contents.m);
   break;
 default:
   FUNC_1 ();
 }

      VAR_1->next = VAR_0.frees;
      VAR_0.frees = VAR_1;
    }

  VAR_0.undos = 0;
}
