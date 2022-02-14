
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int asection ;
struct TYPE_3__ {void* opd_adjust; } ;
struct TYPE_4__ {scalar_t__ sec_type; TYPE_1__ u; } ;


 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void *
FUNC_1 (asection * VAR_1)
{
  if (VAR_1 != ((void*)0)
      && FUNC_0 (VAR_1) != ((void*)0)
      && FUNC_0 (VAR_1)->sec_type == VAR_0)
    return FUNC_0 (VAR_1)->u.opd_adjust;
  return ((void*)0);
}
