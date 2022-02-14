
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int rtx ;
typedef TYPE_2__* edge ;
struct TYPE_5__ {scalar_t__ r; } ;
struct TYPE_6__ {int flags; TYPE_1__ insns; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;

void
FUNC_7 (rtx VAR_2, edge VAR_3)
{


  FUNC_3 (!((VAR_3->flags & VAR_0) && FUNC_0 (VAR_3)));

  if (VAR_3->insns.r == VAR_1)
    FUNC_6 ();
  else
    FUNC_5 (VAR_3->insns.r);

  FUNC_1 (VAR_2);

  VAR_3->insns.r = FUNC_4 ();
  FUNC_2 ();
}
