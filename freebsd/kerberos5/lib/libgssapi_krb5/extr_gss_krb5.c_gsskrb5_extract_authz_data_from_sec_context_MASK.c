
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct TYPE_18__ {int length; int* components; } ;
typedef TYPE_2__ heim_oid ;
typedef scalar_t__ gss_ctx_id_t ;
typedef TYPE_3__* gss_buffer_t ;
typedef TYPE_4__* gss_buffer_set_t ;
struct TYPE_21__ {size_t length; int* elements; } ;
typedef TYPE_5__ gss_OID_desc ;
struct TYPE_20__ {int count; TYPE_1__* elements; } ;
struct TYPE_19__ {int* value; int length; } ;
struct TYPE_17__ {size_t length; int* value; } ;
struct TYPE_16__ {int length; int elements; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_14__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_2__*,int *) ;
 size_t FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (unsigned char*,size_t,TYPE_2__*,size_t*) ;
 int FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (scalar_t__*,scalar_t__,TYPE_5__*,TYPE_4__**) ;
 int FUNC_8 (scalar_t__*,TYPE_4__**) ;
 void* FUNC_9 (size_t) ;
 int FUNC_10 (int*,int*,int) ;

OM_uint32
FUNC_11(OM_uint32 *VAR_7,
         gss_ctx_id_t VAR_8,
         int VAR_9,
         gss_buffer_t VAR_10)
{
    gss_buffer_set_t VAR_11 = VAR_2;
    OM_uint32 VAR_12;
    gss_OID_desc VAR_13;
    heim_oid VAR_14, VAR_15;
    size_t VAR_16;

    if (VAR_8 == VAR_3) {
 *VAR_7 = VAR_0;
 return VAR_6;
    }



    if (FUNC_3(VAR_4->elements,
      VAR_4->length,
      &VAR_14, ((void*)0)) != 0) {
 *VAR_7 = VAR_0;
 return VAR_6;
    }

    VAR_15.length = VAR_14.length + 1;
    VAR_15.components = FUNC_1(VAR_15.length, sizeof(*VAR_15.components));
    if (VAR_15.components == ((void*)0)) {
 FUNC_2(&VAR_14);

 *VAR_7 = VAR_1;
 return VAR_6;
    }

    FUNC_10(VAR_15.components, VAR_14.components,
    VAR_14.length * sizeof(*VAR_14.components));

    FUNC_2(&VAR_14);

    VAR_15.components[VAR_15.length - 1] = VAR_9;

    VAR_13.length = FUNC_4(&VAR_15);
    VAR_13.elements = FUNC_9(VAR_13.length);
    if (VAR_13.elements == ((void*)0)) {
 FUNC_6(VAR_15.components);
 *VAR_7 = VAR_1;
 return VAR_6;
    }

    if (FUNC_5((unsigned char *)VAR_13.elements + VAR_13.length - 1,
      VAR_13.length, &VAR_15, &VAR_16) != 0) {
 FUNC_6(VAR_15.components);
 FUNC_6(VAR_13.elements);
 *VAR_7 = VAR_0;
 return VAR_6;
    }
    if (VAR_13.length != VAR_16)
 FUNC_0();

    FUNC_6(VAR_15.components);



    VAR_12 = FUNC_7 (VAR_7,
            VAR_8,
            &VAR_13,
            &VAR_11);

    FUNC_6(VAR_13.elements);

    if (VAR_12)
 return VAR_12;

    if (VAR_11 == VAR_2 || VAR_11->count != 1) {
 FUNC_8(VAR_7, &VAR_11);
 *VAR_7 = VAR_0;
 return VAR_6;
    }

    VAR_10->value = FUNC_9(VAR_11->elements[0].length);
    if (VAR_10->value == ((void*)0)) {
 FUNC_8(VAR_7, &VAR_11);
 *VAR_7 = VAR_1;
 return VAR_6;
    }

    VAR_10->length = VAR_11->elements[0].length;
    FUNC_10(VAR_10->value, VAR_11->elements[0].value, VAR_10->length);
    FUNC_8(VAR_7, &VAR_11);

    *VAR_7 = 0;
    return VAR_5;
}
