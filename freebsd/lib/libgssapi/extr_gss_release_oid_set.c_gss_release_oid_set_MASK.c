
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* gss_OID_set ;
typedef TYPE_1__* gss_OID ;
struct TYPE_6__ {size_t count; struct TYPE_6__* elements; } ;
typedef scalar_t__ OM_uint32 ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_2,
    gss_OID_set *VAR_3)
{
 gss_OID_set VAR_4;
 gss_OID VAR_5;
 size_t VAR_6;

 *VAR_2 = 0;
 if (VAR_3) {
  VAR_4 = *VAR_3;
  if (VAR_4) {
   for (VAR_6 = 0; VAR_6 < VAR_4->count; VAR_6++) {
    VAR_5 = &VAR_4->elements[VAR_6];
    if (VAR_5->elements)
     FUNC_0(VAR_5->elements);
   }
   FUNC_0(VAR_4->elements);
   FUNC_0(VAR_4);
   *VAR_3 = VAR_0;
  }
 }
 return (VAR_1);
}
