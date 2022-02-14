
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gssapi_data {int delegated_cred_handle; int context_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(void *VAR_3)
{
    struct gssapi_data *VAR_4 = VAR_3;
    VAR_4->context_hdl = VAR_0;
    VAR_4->delegated_cred_handle = VAR_1;







    return 0;


}
