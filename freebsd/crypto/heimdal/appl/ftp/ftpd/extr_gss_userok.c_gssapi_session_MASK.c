
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gssapi_data {scalar_t__ delegated_cred_handle; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,scalar_t__,int ,int ,int,int,int *,int *) ;

int
FUNC_4(void *VAR_3, char *VAR_4)
{
    struct gssapi_data *VAR_5 = VAR_3;
    OM_uint32 VAR_6, VAR_7;
    int VAR_8 = 0;

    if (VAR_5->delegated_cred_handle != VAR_1) {
        VAR_6 = FUNC_3(&VAR_7, VAR_5->delegated_cred_handle,
                               VAR_0, VAR_2,
                               1, 1, ((void*)0), ((void*)0));
        if (FUNC_0(VAR_6))
            VAR_8 = 1;
 FUNC_1(((void*)0), 1);
    }

    FUNC_2(&VAR_7, &VAR_5->delegated_cred_handle);
    return VAR_8;
}
