
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_msg_order {scalar_t__* elem; scalar_t__ jitter_window; scalar_t__ first_seq; scalar_t__ length; scalar_t__ flags; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,struct gss_msg_order**,scalar_t__) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_2,
    struct gss_msg_order **VAR_3,
    OM_uint32 VAR_4,
    OM_uint32 VAR_5,
    OM_uint32 VAR_6,
    int VAR_7)
{
    OM_uint32 VAR_8;

    if (VAR_6 == 0)
 VAR_6 = VAR_0;

    VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_6);
    if(VAR_8 != VAR_1)
        return VAR_8;

    (*VAR_3)->flags = VAR_4;
    (*VAR_3)->length = 0;
    (*VAR_3)->first_seq = VAR_5;
    (*VAR_3)->jitter_window = VAR_6;
    (*VAR_3)->elem[0] = VAR_5 - 1;

    *VAR_2 = 0;
    return VAR_1;
}
