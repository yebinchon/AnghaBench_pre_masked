
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_timestamp ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_3,
         krb5_context VAR_4,
         OM_uint32 VAR_5,
         OM_uint32 *VAR_6)
{
    krb5_timestamp VAR_7;
    krb5_error_code VAR_8;

    if (VAR_5 == 0) {
 *VAR_6 = VAR_0;
 return VAR_1;
    }

    VAR_8 = FUNC_0(VAR_4, &VAR_7);
    if (VAR_8) {
 *VAR_3 = VAR_8;
 return VAR_2;
    }

    if (VAR_5 < VAR_7)
 *VAR_6 = 0;
    else
 *VAR_6 = VAR_5 - VAR_7;

    return VAR_1;
}
