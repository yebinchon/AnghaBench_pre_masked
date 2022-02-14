
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char*) ;

__attribute__((used)) static asection *
FUNC_1 (bfd *VAR_1, bfd_boolean VAR_2)
{
  asection *VAR_3 = FUNC_0 (VAR_1, ".got");

  if (VAR_3 == ((void*)0) || (! VAR_2 && (VAR_3->flags & VAR_0) != 0))
    return ((void*)0);
  return VAR_3;
}
