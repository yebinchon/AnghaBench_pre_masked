
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_6__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef TYPE_2__* gss_buffer_t ;
struct TYPE_7__ {int length; int value; } ;
typedef int OM_uint32 ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_storage *VAR_0, krb5_data VAR_1,
     OM_uint32 VAR_2, OM_uint32 VAR_3,
     uint32_t VAR_4, gss_buffer_t VAR_5)
{
    krb5_error_code VAR_6;
    krb5_data VAR_7;

    VAR_7.data = VAR_5->value;
    VAR_7.length = VAR_5->length;

    VAR_6 = FUNC_1(VAR_0, VAR_1);
    if (VAR_6) return VAR_6;
    VAR_6 = FUNC_0(VAR_0, VAR_2);
    if (VAR_6) return VAR_6;
    VAR_6 = FUNC_0(VAR_0, VAR_3);
    if (VAR_6) return VAR_6;
    VAR_6 = FUNC_1(VAR_0, VAR_7);
    return VAR_6;
}
