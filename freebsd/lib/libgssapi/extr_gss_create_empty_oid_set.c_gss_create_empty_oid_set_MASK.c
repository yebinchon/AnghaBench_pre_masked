
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gss_OID_set_desc ;
typedef TYPE_1__* gss_OID_set ;
struct TYPE_5__ {scalar_t__ elements; scalar_t__ count; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_4,
    gss_OID_set *VAR_5)
{
 gss_OID_set VAR_6;

 *VAR_4 = 0;
 *VAR_5 = VAR_1;

 VAR_6 = FUNC_0(sizeof(gss_OID_set_desc));
 if (!VAR_6) {
  *VAR_4 = VAR_0;
  return (VAR_3);
 }

 VAR_6->count = 0;
 VAR_6->elements = 0;
 *VAR_5 = VAR_6;

 return (VAR_2);
}
