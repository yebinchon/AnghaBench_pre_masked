
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_6__ {int flags; TYPE_1__* iovec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_5__ {int (* bstat ) (TYPE_2__*,struct stat*) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,struct stat*) ;

int
FUNC_3 (bfd *VAR_2, struct stat *VAR_3)
{
  int VAR_4;

  if ((VAR_2->flags & VAR_0) != 0)
    FUNC_0 ();

  if (VAR_2->iovec)
    VAR_4 = VAR_2->iovec->bstat (VAR_2, VAR_3);
  else
    VAR_4 = -1;

  if (VAR_4 < 0)
    FUNC_1 (VAR_1);
  return VAR_4;
}
