
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gss_OID_set ;
struct TYPE_5__ {struct TYPE_5__* elements; } ;
typedef scalar_t__ OM_uint32 ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_3,
    gss_OID_set *VAR_4)
{

 *VAR_3 = 0;
 if (VAR_4 && *VAR_4) {
  if ((*VAR_4)->elements)
   FUNC_0((*VAR_4)->elements, VAR_2);
  FUNC_0(*VAR_4, VAR_2);
  *VAR_4 = VAR_0;
 }
 return (VAR_1);
}
