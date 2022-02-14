
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int edge_iterator ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_7__ {int preds; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4 (basic_block VAR_1)
{
  edge VAR_2;
  edge_iterator VAR_3;

  for (VAR_3 = FUNC_2 (VAR_1->preds); (VAR_2 = FUNC_1 (VAR_3)); )
    {
      if ((VAR_2->flags & VAR_0) == VAR_0)
 FUNC_3 (VAR_2);
      else
 FUNC_0 (&VAR_3);
    }
}
