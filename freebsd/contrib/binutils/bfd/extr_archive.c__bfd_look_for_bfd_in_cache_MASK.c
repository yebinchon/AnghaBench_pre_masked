
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar_cache {int * arbfd; int ptr; } ;
typedef scalar_t__ htab_t ;
typedef int file_ptr ;
typedef int bfd ;
struct TYPE_2__ {scalar_t__ cache; } ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__,struct ar_cache*) ;

bfd *
FUNC_2 (bfd *VAR_0, file_ptr VAR_1)
{
  htab_t VAR_2 = FUNC_0 (VAR_0)->cache;
  struct ar_cache VAR_3;
  VAR_3.ptr = VAR_1;

  if (VAR_2)
    {
      struct ar_cache *VAR_4 = (struct ar_cache *) FUNC_1 (VAR_2, &VAR_3);
      if (!VAR_4)
 return ((void*)0);
      else
 return VAR_4->arbfd;
    }
  else
    return ((void*)0);
}
