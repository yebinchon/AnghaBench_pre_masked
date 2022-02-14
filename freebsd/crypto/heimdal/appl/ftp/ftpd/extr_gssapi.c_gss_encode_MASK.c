
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct gssapi_data {int context_hdl; } ;
struct TYPE_4__ {int length; void* value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ,TYPE_1__*,int*,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, void *VAR_3, int VAR_4, int VAR_5, void **VAR_6)
{
    OM_uint32 VAR_7, VAR_8;
    gss_buffer_desc VAR_9, VAR_10;
    int VAR_11;
    struct gssapi_data *VAR_12 = VAR_2;

    VAR_9.length = VAR_4;
    VAR_9.value = VAR_3;
    VAR_7 = FUNC_0 (&VAR_8,
    VAR_12->context_hdl,
    VAR_5 == VAR_1,
    VAR_0,
    &VAR_9,
    &VAR_11,
    &VAR_10);
    *VAR_6 = VAR_10.value;
    return VAR_10.length;
}
