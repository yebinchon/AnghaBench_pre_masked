
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {long st_mtime; } ;
struct TYPE_6__ {long mtime; TYPE_1__* iovec; scalar_t__ mtime_set; } ;
typedef TYPE_2__ bfd ;
struct TYPE_5__ {scalar_t__ (* bstat ) (TYPE_2__*,struct stat*) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*,struct stat*) ;

long
FUNC_1 (bfd *VAR_0)
{
  struct stat VAR_1;

  if (VAR_0->mtime_set)
    return VAR_0->mtime;

  if (VAR_0->iovec == ((void*)0))
    return 0;

  if (VAR_0->iovec->bstat (VAR_0, &VAR_1) != 0)
    return 0;

  VAR_0->mtime = VAR_1.st_mtime;
  return VAR_1.st_mtime;
}
