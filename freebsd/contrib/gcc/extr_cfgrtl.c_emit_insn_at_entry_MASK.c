
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int rtx ;
typedef int edge_iterator ;
typedef TYPE_1__* edge ;
struct TYPE_6__ {int succs; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_1__*) ;

void
FUNC_5 (rtx VAR_2)
{
  edge_iterator VAR_3 = FUNC_2 (VAR_1->succs);
  edge VAR_4 = FUNC_1 (VAR_3);
  FUNC_3 (VAR_4->flags & VAR_0);

  FUNC_4 (VAR_2, VAR_4);
  FUNC_0 ();
}
