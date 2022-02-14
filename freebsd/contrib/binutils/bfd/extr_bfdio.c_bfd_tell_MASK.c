
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ file_ptr ;
struct TYPE_6__ {int flags; scalar_t__ where; scalar_t__ origin; scalar_t__ my_archive; TYPE_1__* iovec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_5__ {scalar_t__ (* btell ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

file_ptr
FUNC_1 (bfd *VAR_1)
{
  file_ptr VAR_2;

  if ((VAR_1->flags & VAR_0) != 0)
    return VAR_1->where;

  if (VAR_1->iovec)
    {
      VAR_2 = VAR_1->iovec->btell (VAR_1);

      if (VAR_1->my_archive)
 VAR_2 -= VAR_1->origin;
    }
  else
    VAR_2 = 0;

  VAR_1->where = VAR_2;
  return VAR_2;
}
