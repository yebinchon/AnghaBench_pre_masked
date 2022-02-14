
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gsskrb5_ctx ;
typedef int gss_iov_buffer_desc ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int const) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_3,
     const gsskrb5_ctx VAR_4,
     const gss_iov_buffer_desc *VAR_5,
     const gss_iov_buffer_desc *VAR_6,
     const gss_iov_buffer_desc *VAR_7)
{
    if (VAR_5 == ((void*)0)) {
 *VAR_3 = VAR_0;
 return VAR_2;
    }

    if (FUNC_0(VAR_4)) {



 if (VAR_6) {
     *VAR_3 = VAR_0;
     return VAR_2;
 }
 if (VAR_7) {
     *VAR_3 = VAR_0;
     return VAR_2;
 }
    } else {



 if (VAR_6 == ((void*)0)) {
     *VAR_3 = VAR_0;
     return VAR_2;
 }
    }

    *VAR_3 = 0;
    return VAR_1;
}
