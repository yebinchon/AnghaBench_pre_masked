
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gss_OID ;
struct TYPE_5__ {scalar_t__ length; struct TYPE_5__* elements; } ;
typedef scalar_t__ OM_uint32 ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_2, gss_OID *VAR_3)
{
 gss_OID VAR_4 = *VAR_3;

 *VAR_3 = VAR_0;

 if (VAR_2 != ((void*)0))
  *VAR_2 = 0;

 if (VAR_4 == VAR_0)
  return (VAR_1);

 if (VAR_4->elements != ((void*)0)) {
  FUNC_0(VAR_4->elements);
  VAR_4->elements = ((void*)0);
 }
 VAR_4->length = 0;
 FUNC_0(VAR_4);

 return (VAR_1);
}
