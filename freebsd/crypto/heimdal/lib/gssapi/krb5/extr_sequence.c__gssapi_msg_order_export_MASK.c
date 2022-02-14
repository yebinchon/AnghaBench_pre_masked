
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_msg_order {size_t flags; size_t start; size_t length; size_t jitter_window; size_t first_seq; size_t* elem; } ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef size_t OM_uint32 ;


 scalar_t__ FUNC_0 (int *,size_t) ;

krb5_error_code
FUNC_1(krb5_storage *VAR_0, struct gss_msg_order *VAR_1)
{
    krb5_error_code VAR_2;
    OM_uint32 VAR_3;

    VAR_2 = FUNC_0(VAR_0, VAR_1->flags);
    if (VAR_2)
        return VAR_2;
    VAR_2 = FUNC_0(VAR_0, VAR_1->start);
    if (VAR_2)
        return VAR_2;
    VAR_2 = FUNC_0(VAR_0, VAR_1->length);
    if (VAR_2)
        return VAR_2;
    VAR_2 = FUNC_0(VAR_0, VAR_1->jitter_window);
    if (VAR_2)
        return VAR_2;
    VAR_2 = FUNC_0(VAR_0, VAR_1->first_seq);
    if (VAR_2)
        return VAR_2;

    for (VAR_3 = 0; VAR_3 < VAR_1->jitter_window; VAR_3++) {
        VAR_2 = FUNC_0(VAR_0, VAR_1->elem[VAR_3]);
 if (VAR_2)
     return VAR_2;
    }

    return 0;
}
