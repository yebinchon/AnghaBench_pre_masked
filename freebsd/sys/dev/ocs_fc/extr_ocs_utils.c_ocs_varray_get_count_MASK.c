
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int lock; int entry_count; } ;
typedef TYPE_1__ ocs_varray_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

uint32_t
FUNC_2(ocs_varray_t *VAR_0)
{
 uint32_t VAR_1;

 FUNC_0(&VAR_0->lock);
  VAR_1 = VAR_0->entry_count;
 FUNC_1(&VAR_0->lock);
 return VAR_1;
}
