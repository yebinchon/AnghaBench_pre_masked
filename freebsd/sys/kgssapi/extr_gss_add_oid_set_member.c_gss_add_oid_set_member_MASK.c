
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* gss_OID_set ;
typedef int gss_OID_desc ;
typedef TYPE_2__* gss_OID ;
struct TYPE_11__ {int length; struct TYPE_11__* elements; } ;
struct TYPE_10__ {int count; TYPE_2__* elements; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,TYPE_2__* const,TYPE_1__*,int*) ;
 void* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;

OM_uint32
FUNC_4(OM_uint32 *VAR_3,
    const gss_OID VAR_4,
    gss_OID_set *VAR_5)
{
 OM_uint32 VAR_6;
 gss_OID_set VAR_7 = *VAR_5;
 gss_OID VAR_8;
 gss_OID VAR_9;
 int VAR_10;

 *VAR_3 = 0;

 VAR_6 = FUNC_1(VAR_3,
     VAR_4, *VAR_5, &VAR_10);
 if (VAR_6)
  return (VAR_6);
 if (VAR_10)
  return (VAR_0);

 VAR_8 = FUNC_2((VAR_7->count + 1) * sizeof(gss_OID_desc),
     VAR_1, VAR_2);

 VAR_9 = &VAR_8[VAR_7->count];
 VAR_9->elements = FUNC_2(VAR_4->length, VAR_1, VAR_2);
 VAR_9->length = VAR_4->length;
 FUNC_3(VAR_9->elements, VAR_4->elements, VAR_4->length);

 if (VAR_7->elements) {
  FUNC_3(VAR_8, VAR_7->elements,
      VAR_7->count * sizeof(gss_OID_desc));
  FUNC_0(VAR_7->elements, VAR_1);
 }
 VAR_7->elements = VAR_8;
 VAR_7->count++;

 return (VAR_0);
}
