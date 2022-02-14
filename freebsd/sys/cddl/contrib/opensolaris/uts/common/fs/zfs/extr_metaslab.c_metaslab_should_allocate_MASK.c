
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_3__ {scalar_t__ ms_max_size; unsigned long long ms_weight; } ;
typedef TYPE_1__ metaslab_t ;
typedef int boolean_t ;


 unsigned long long VAR_0 ;
 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (unsigned long long) ;

boolean_t
FUNC_2(metaslab_t *VAR_1, uint64_t VAR_2)
{
 boolean_t VAR_3;

 if (VAR_1->ms_max_size != 0)
  return (VAR_1->ms_max_size >= VAR_2);

 if (!FUNC_1(VAR_1->ms_weight)) {






  VAR_3 = (VAR_2 <
      1ULL << (FUNC_0(VAR_1->ms_weight) + 1));
 } else {
  VAR_3 = (VAR_2 <=
      (VAR_1->ms_weight & ~VAR_0));
 }
 return (VAR_3);
}
