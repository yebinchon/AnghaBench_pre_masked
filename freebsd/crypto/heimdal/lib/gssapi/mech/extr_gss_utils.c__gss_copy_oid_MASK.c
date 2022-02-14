
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gss_OID ;
struct TYPE_4__ {size_t length; int elements; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ,size_t) ;

OM_uint32
FUNC_2(OM_uint32 *VAR_3,
    const gss_OID VAR_4, gss_OID VAR_5)
{
 size_t VAR_6 = VAR_4->length;

 *VAR_3 = 0;
 VAR_5->elements = FUNC_0(VAR_6);
 if (!VAR_5->elements) {
  VAR_5->length = 0;
  *VAR_3 = VAR_0;
  return VAR_2;
 }
 VAR_5->length = VAR_6;
 FUNC_1(VAR_5->elements, VAR_4->elements, VAR_6);
 return (VAR_1);
}
