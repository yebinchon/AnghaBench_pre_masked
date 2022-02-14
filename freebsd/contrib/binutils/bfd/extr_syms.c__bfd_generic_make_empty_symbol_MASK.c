
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_size_type ;
typedef int bfd ;
struct TYPE_4__ {int * the_bfd; } ;
typedef TYPE_1__ asymbol ;


 TYPE_1__* FUNC_0 (int *,int) ;

asymbol *
FUNC_1 (bfd *VAR_0)
{
  bfd_size_type VAR_1 = sizeof (asymbol);
  asymbol *VAR_2 = FUNC_0 (VAR_0, VAR_1);
  if (VAR_2)
    VAR_2->the_bfd = VAR_0;
  return VAR_2;
}
