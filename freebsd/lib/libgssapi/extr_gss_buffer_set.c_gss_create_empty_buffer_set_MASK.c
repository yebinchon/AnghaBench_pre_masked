
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_set_t ;
struct TYPE_5__ {int * elements; scalar_t__ count; } ;
typedef TYPE_1__ gss_buffer_set_desc ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

OM_uint32
FUNC_1(OM_uint32 * VAR_4,
    gss_buffer_set_t *VAR_5)
{
 gss_buffer_set_t VAR_6;

 VAR_6 = (gss_buffer_set_desc *) FUNC_0(sizeof(*VAR_6));
 if (VAR_6 == VAR_1) {
  *VAR_4 = VAR_0;
  return (VAR_3);
 }

 VAR_6->count = 0;
 VAR_6->elements = ((void*)0);

 *VAR_5 = VAR_6;

 *VAR_4 = 0;
 return (VAR_2);
}
