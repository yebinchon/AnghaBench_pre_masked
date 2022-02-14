
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_4__ {int * iovec; int * iostream; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;

bfd_boolean
FUNC_3 (bfd *VAR_5)
{
  FUNC_0 (VAR_5->iostream != ((void*)0));
  if (VAR_4 >= VAR_0)
    {
      if (! FUNC_1 ())
 return VAR_1;
    }
  VAR_5->iovec = &VAR_3;
  FUNC_2 (VAR_5);
  ++VAR_4;
  return VAR_2;
}
