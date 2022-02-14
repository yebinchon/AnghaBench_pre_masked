
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int gss_OID_desc ;
typedef TYPE_1__* gss_OID ;
struct TYPE_6__ {int length; void* elements; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 TYPE_1__* const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,void*,int) ;

OM_uint32 FUNC_3(OM_uint32 *VAR_4,
    const gss_OID VAR_5,
    gss_OID *VAR_6)
{
 gss_OID VAR_7;

 *VAR_4 = 0;
 *VAR_6 = VAR_1;

 if (VAR_5 == VAR_1)
  return (VAR_2);

 VAR_7 = FUNC_1(sizeof(gss_OID_desc));
 if (!VAR_7) {
  *VAR_4 = VAR_0;
  return (VAR_3);
 }

 VAR_7->elements = FUNC_1(VAR_5->length);
 if (!VAR_7->elements) {
  FUNC_0(VAR_7);
  *VAR_4 = VAR_0;
  return (VAR_3);
 }

 FUNC_2(VAR_7->elements, VAR_5->elements, VAR_5->length);
 VAR_7->length = VAR_5->length;

 *VAR_6 = VAR_7;

 return (VAR_2);
}
