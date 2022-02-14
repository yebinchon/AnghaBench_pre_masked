
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gss_OID_set ;
typedef int gss_OID ;
struct TYPE_3__ {size_t count; int * elements; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const,int *) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_1,
    const gss_OID VAR_2,
    const gss_OID_set VAR_3,
    int *VAR_4)
{
 size_t VAR_5;

 *VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++)
  if (FUNC_0(VAR_2, &VAR_3->elements[VAR_5]))
   *VAR_4 = 1;

 *VAR_1 = 0;
 return (VAR_0);
}
