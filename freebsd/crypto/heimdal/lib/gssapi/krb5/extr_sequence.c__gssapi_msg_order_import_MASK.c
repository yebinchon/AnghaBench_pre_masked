
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_msg_order {size_t flags; size_t start; size_t length; size_t jitter_window; size_t first_seq; int * elem; } ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef size_t int32_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gss_msg_order**) ;
 scalar_t__ FUNC_1 (int *,size_t*) ;
 scalar_t__ FUNC_2 (scalar_t__*,struct gss_msg_order**,size_t) ;

OM_uint32
FUNC_3(OM_uint32 *VAR_2,
    krb5_storage *VAR_3,
    struct gss_msg_order **VAR_4)
{
    OM_uint32 VAR_5;
    krb5_error_code VAR_6;
    int32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_6 = FUNC_1(VAR_3, &VAR_8);
    if (VAR_6)
 goto failed;
    VAR_6 = FUNC_1(VAR_3, &VAR_9);
    if (VAR_6)
 goto failed;
    VAR_6 = FUNC_1(VAR_3, &VAR_10);
    if (VAR_6)
 goto failed;
    VAR_6 = FUNC_1(VAR_3, &VAR_11);
    if (VAR_6)
 goto failed;
    VAR_6 = FUNC_1(VAR_3, &VAR_12);
    if (VAR_6)
 goto failed;

    VAR_5 = FUNC_2(VAR_2, VAR_4, VAR_11);
    if (VAR_5 != VAR_0)
        return VAR_5;

    (*VAR_4)->flags = VAR_8;
    (*VAR_4)->start = VAR_9;
    (*VAR_4)->length = VAR_10;
    (*VAR_4)->jitter_window = VAR_11;
    (*VAR_4)->first_seq = VAR_12;

    for( VAR_7 = 0; VAR_7 < VAR_11; VAR_7++ ) {
        VAR_6 = FUNC_1(VAR_3, (int32_t*)&((*VAR_4)->elem[VAR_7]));
 if (VAR_6)
     goto failed;
    }

    *VAR_2 = 0;
    return VAR_0;

failed:
    FUNC_0(VAR_4);
    *VAR_2 = VAR_6;
    return VAR_1;
}
