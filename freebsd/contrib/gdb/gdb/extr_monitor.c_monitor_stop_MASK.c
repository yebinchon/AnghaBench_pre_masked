
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ stop; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  FUNC_0 ("MON stop\n");
  if ((VAR_1->flags & VAR_0) != 0)
    FUNC_2 (VAR_2);
  if (VAR_1->stop)
    FUNC_1 (VAR_1->stop);
}
