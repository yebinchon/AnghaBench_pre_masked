
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef TYPE_2__* gss_buffer_t ;
typedef int gss_OID ;
struct TYPE_6__ {size_t length; int * value; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t*,size_t*,int const) ;
 void* FUNC_1 (int *,size_t,int const) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (void*,int ,int ) ;

OM_uint32
FUNC_4(
    OM_uint32 *VAR_3,
    const krb5_data *VAR_4,
    gss_buffer_t VAR_5,
    const gss_OID VAR_6
)
{
    size_t VAR_7, VAR_8;
    void *VAR_9;

    FUNC_0 (VAR_4->length, &VAR_7, &VAR_8, VAR_6);

    VAR_5->length = VAR_8;
    VAR_5->value = FUNC_2 (VAR_8);
    if (VAR_5->value == ((void*)0)) {
 *VAR_3 = VAR_0;
 return VAR_2;
    }

    VAR_9 = FUNC_1 (VAR_5->value, VAR_7, VAR_6);
    FUNC_3 (VAR_9, VAR_4->data, VAR_4->length);
    return VAR_1;
}
