
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int * data; scalar_t__ length; } ;
typedef TYPE_1__ krb5_data ;
typedef TYPE_2__* gss_buffer_t ;
typedef int gss_OID ;
struct TYPE_6__ {int * value; int length; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int **,int ,int const) ;

OM_uint32
FUNC_1(
    OM_uint32 *VAR_1,
    gss_buffer_t VAR_2,
    krb5_data *VAR_3,
    const gss_OID VAR_4
)
{
    u_char *VAR_5;
    OM_uint32 VAR_6;

    VAR_5 = VAR_2->value;
    VAR_6 = FUNC_0(&VAR_5,
        VAR_2->length,
        VAR_4);
    if (VAR_6) {
 *VAR_1 = 0;
 return VAR_6;
    }

    VAR_3->length = VAR_2->length -
 (VAR_5 - (u_char *)VAR_2->value);
    VAR_3->data = VAR_5;
    return VAR_0;
}
