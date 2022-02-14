
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gss_name_t ;
typedef int gss_ctx_id_t ;
typedef int gss_buffer_desc ;
typedef int gss_OID ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int ,int *,int ,int ,int ,int ,int ,int ,int *,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static OM_uint32
FUNC_5(gss_name_t VAR_7, gss_OID VAR_8)
{
    OM_uint32 VAR_9, VAR_10;
    gss_ctx_id_t VAR_11 = VAR_3;
    gss_buffer_desc VAR_12;

    VAR_10 = FUNC_2(&VAR_9,
        VAR_4,
        &VAR_11,
        VAR_7,
        VAR_8,
        0,
        VAR_0,
        VAR_2,
        VAR_1,
        ((void*)0),
        &VAR_12,
        ((void*)0),
        ((void*)0));
    if (FUNC_0(VAR_10)) {
 FUNC_3(VAR_8, VAR_10, VAR_9);
 return VAR_5;
    }
    FUNC_4(&VAR_9, &VAR_12);
    FUNC_1(&VAR_9, &VAR_11, ((void*)0));

    return VAR_6;
}
