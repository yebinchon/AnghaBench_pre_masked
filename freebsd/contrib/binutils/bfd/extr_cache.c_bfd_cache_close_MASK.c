
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_4__ {int * iostream; int * iovec; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

bfd_boolean
FUNC_1 (bfd *VAR_2)
{
  if (VAR_2->iovec != &VAR_1)
    return VAR_0;

  if (VAR_2->iostream == ((void*)0))

    return VAR_0;

  return FUNC_0 (VAR_2);
}
