
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct frchain {TYPE_2__* fix_tail; TYPE_2__* fix_root; TYPE_1__* frch_last; scalar_t__ frch_root; struct frchain* frch_next; } ;
typedef int segT ;
struct TYPE_5__ {scalar_t__ fr_type; scalar_t__ fr_next; } ;
typedef TYPE_1__ fragS ;
struct TYPE_6__ {struct TYPE_6__* fx_next; } ;
typedef TYPE_2__ fixS ;
struct TYPE_7__ {TYPE_2__* fix_tail; TYPE_2__* fix_root; } ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int ) ;

__attribute__((used)) static fragS *
FUNC_2 (segT VAR_0, struct frchain *VAR_1)
{
  fragS VAR_2, *VAR_3 = &VAR_2;
  fixS VAR_4, *VAR_5 = &VAR_4;

  for (; VAR_1; VAR_1 = VAR_1->frch_next)
    {
      VAR_3->fr_next = VAR_1->frch_root;
      VAR_3 = VAR_1->frch_last;
      FUNC_0 (VAR_3->fr_type != 0);
      if (VAR_1->fix_root != (fixS *) ((void*)0))
 {
   if (FUNC_1 (VAR_0)->fix_root == (fixS *) ((void*)0))
     FUNC_1 (VAR_0)->fix_root = VAR_1->fix_root;
   VAR_5->fx_next = VAR_1->fix_root;
   FUNC_1 (VAR_0)->fix_tail = VAR_1->fix_tail;
   VAR_5 = VAR_1->fix_tail;
 }
    }
  FUNC_0 (VAR_3->fr_type != 0);
  FUNC_0 (VAR_3 != &VAR_2);
  VAR_3->fr_next = 0;
  return VAR_3;
}
