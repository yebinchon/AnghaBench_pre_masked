
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_1__* iovec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_5__ {int (* bflush ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

int
FUNC_1 (bfd *VAR_1)
{
  if ((VAR_1->flags & VAR_0) != 0)
    return 0;

  if (VAR_1->iovec)
    return VAR_1->iovec->bflush (VAR_1);
  return 0;
}
