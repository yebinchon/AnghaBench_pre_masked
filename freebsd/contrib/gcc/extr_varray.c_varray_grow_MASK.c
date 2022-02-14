
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* varray_type ;
struct varray_descriptor {size_t allocated; int copied; int resized; } ;
struct TYPE_12__ {size_t size; scalar_t__ uses_ggc; } ;
struct TYPE_10__ {int * vdt_c; } ;
struct TYPE_11__ {size_t num_elements; size_t type; TYPE_1__ data; int name; } ;


 scalar_t__ VAR_0 ;
 TYPE_9__* VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int *,int ,size_t) ;
 struct varray_descriptor* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,scalar_t__) ;

varray_type
FUNC_4 (varray_type VAR_2, size_t VAR_3)
{
  size_t VAR_4 = VAR_2->num_elements;
  if (VAR_3 != VAR_4)
    {
      size_t VAR_5 = VAR_1[VAR_2->type].size;
      size_t VAR_6 = VAR_4 * VAR_5;
      size_t VAR_7 = VAR_3 * VAR_5;
      if (VAR_1[VAR_2->type].uses_ggc)
 VAR_2 = FUNC_0 (VAR_2, VAR_0 + VAR_7);
      else
 VAR_2 = FUNC_3 (VAR_2, VAR_0 + VAR_7);
      VAR_2->num_elements = VAR_3;
      if (VAR_3 > VAR_4)
 FUNC_1 (&VAR_2->data.vdt_c[VAR_6], 0, VAR_7 - VAR_6);




    }

  return VAR_2;
}
