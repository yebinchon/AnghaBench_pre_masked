
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_size; } ;
struct bfd_in_memory {int size; } ;
typedef int file_ptr ;
struct TYPE_6__ {int flags; TYPE_1__* iovec; scalar_t__ iostream; } ;
typedef TYPE_2__ bfd ;
struct TYPE_5__ {scalar_t__ (* bstat ) (TYPE_2__*,struct stat*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,struct stat*) ;

file_ptr
FUNC_1 (bfd *VAR_1)
{
  struct stat VAR_2;

  if ((VAR_1->flags & VAR_0) != 0)
    return ((struct bfd_in_memory *) VAR_1->iostream)->size;

  if (VAR_1->iovec == ((void*)0))
    return 0;

  if (VAR_1->iovec->bstat (VAR_1, &VAR_2) != 0)
    return 0;

  return VAR_2.st_size;
}
