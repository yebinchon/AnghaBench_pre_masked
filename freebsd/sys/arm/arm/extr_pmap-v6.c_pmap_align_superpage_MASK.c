
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_ooffset_t ;
typedef int vm_offset_t ;
typedef TYPE_1__* vm_object_t ;
struct TYPE_3__ {int flags; int pg_color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3(vm_object_t VAR_3, vm_ooffset_t VAR_4,
    vm_offset_t *VAR_5, vm_size_t VAR_6)
{
 vm_offset_t VAR_7;

 if (VAR_6 < VAR_2)
  return;
 if (VAR_3 != ((void*)0) && (VAR_3->flags & VAR_0) != 0)
  VAR_4 += FUNC_2(VAR_3->pg_color);
 VAR_7 = VAR_4 & VAR_1;
 if (VAR_6 - ((VAR_2 - VAR_7) & VAR_1) < VAR_2 ||
     (*VAR_5 & VAR_1) == VAR_7)
  return;
 if ((*VAR_5 & VAR_1) < VAR_7)
  *VAR_5 = FUNC_1(*VAR_5) + VAR_7;
 else
  *VAR_5 = FUNC_0(*VAR_5) + VAR_7;
}
