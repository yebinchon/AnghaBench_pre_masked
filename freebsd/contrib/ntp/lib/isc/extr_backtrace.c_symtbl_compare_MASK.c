
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void const* addr; } ;
typedef TYPE_1__ isc_backtrace_symmap_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_0(const void *VAR_2, const void *VAR_3) {
 const isc_backtrace_symmap_t *VAR_4 = VAR_3;
 const isc_backtrace_symmap_t *VAR_5 =
  &VAR_1[VAR_0 - 1];

 if (VAR_0 == 1 || VAR_4 == VAR_5) {
  if (VAR_2 >= VAR_4->addr) {





   return (0);
  }
  return (-1);
 }


 if (VAR_2 < VAR_4->addr)
  return (-1);
 else if (VAR_2 >= (VAR_4 + 1)->addr)
  return (1);
 return (0);
}
