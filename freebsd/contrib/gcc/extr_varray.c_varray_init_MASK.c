
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* varray_type ;
struct varray_descriptor {int allocated; int created; } ;
typedef enum varray_data_enum { ____Placeholder_varray_data_enum } varray_data_enum ;
struct TYPE_7__ {size_t size; scalar_t__ uses_ggc; } ;
struct TYPE_6__ {size_t num_elements; int type; char const* name; scalar_t__ elements_used; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* VAR_1 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 struct varray_descriptor* FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (scalar_t__,int) ;

varray_type
FUNC_3 (size_t VAR_2, enum varray_data_enum VAR_3,
      const char *VAR_4)
{
  size_t VAR_5 = VAR_2 * VAR_1[VAR_3].size;
  varray_type VAR_6;






  if (VAR_1[VAR_3].uses_ggc)
    VAR_6 = FUNC_0 (VAR_0 + VAR_5);
  else
    VAR_6 = FUNC_2 (VAR_0 + VAR_5, 1);

  VAR_6->num_elements = VAR_2;
  VAR_6->elements_used = 0;
  VAR_6->type = VAR_3;
  VAR_6->name = VAR_4;
  return VAR_6;
}
