
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct gssapi_data {int context_hdl; } ;
typedef int gss_qop_t ;
struct TYPE_5__ {int length; void* value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int OM_uint32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ,TYPE_1__*,TYPE_1__*,int*,int *) ;
 int FUNC_3 (void*,void*,int) ;

__attribute__((used)) static int
FUNC_4(void *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    OM_uint32 VAR_4, VAR_5;
    gss_buffer_desc VAR_6, VAR_7;
    gss_qop_t VAR_8;
    int VAR_9;
    struct gssapi_data *VAR_10 = VAR_0;
    size_t VAR_11;

    VAR_6.length = VAR_2;
    VAR_6.value = VAR_1;
    VAR_4 = FUNC_2 (&VAR_5,
      VAR_10->context_hdl,
      &VAR_6,
      &VAR_7,
      &VAR_9,
      &VAR_8);
    if(FUNC_0(VAR_4))
 return -1;
    FUNC_3(VAR_1, VAR_7.value, VAR_7.length);
    VAR_11 = VAR_7.length;
    FUNC_1(&VAR_5, &VAR_7);
    return VAR_11;
}
