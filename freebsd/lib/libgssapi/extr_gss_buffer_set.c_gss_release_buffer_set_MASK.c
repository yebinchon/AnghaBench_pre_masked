
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_set_t ;
struct TYPE_6__ {size_t count; struct TYPE_6__* elements; } ;
typedef scalar_t__ OM_uint32 ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*,TYPE_1__*) ;

OM_uint32
FUNC_2(OM_uint32 * VAR_2, gss_buffer_set_t *VAR_3)
{
 size_t VAR_4;
 OM_uint32 VAR_5;

 *VAR_2 = 0;

 if (*VAR_3 == VAR_0)
  return (VAR_1);

 for (VAR_4 = 0; VAR_4 < (*VAR_3)->count; VAR_4++)
  FUNC_1(&VAR_5, &((*VAR_3)->elements[VAR_4]));

 FUNC_0((*VAR_3)->elements);

 (*VAR_3)->elements = ((void*)0);
 (*VAR_3)->count = 0;

 FUNC_0(*VAR_3);
 *VAR_3 = VAR_0;

 return (VAR_1);
}
