
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gss_name_t ;
typedef int gss_cred_usage_t ;
typedef int gss_cred_id_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int ,int ,int ,int ,int ,int *,int *,int *,int *) ;
 int FUNC_2 (int,scalar_t__,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_4(gss_name_t VAR_6, gss_cred_usage_t VAR_7)
{
    OM_uint32 VAR_8, VAR_9;
    gss_cred_id_t VAR_10, VAR_11, VAR_12;

    VAR_8 = FUNC_0(&VAR_9, VAR_6,
    VAR_1,
    VAR_3,
    VAR_7,
    &VAR_10,
    ((void*)0),
    ((void*)0));
    if (VAR_8 != VAR_5)
 FUNC_2(1, VAR_9, "aquire %d != GSS_S_COMPLETE", (int)VAR_8);

    VAR_8 = FUNC_1(&VAR_9,
       VAR_10,
       VAR_2,
       VAR_4,
       VAR_7,
       VAR_1,
       VAR_1,
       &VAR_11,
       ((void*)0),
       ((void*)0),
       ((void*)0));

    if (VAR_8 != VAR_5)
 FUNC_2(1, VAR_9, "add_cred %d != GSS_S_COMPLETE", (int)VAR_8);

    VAR_8 = FUNC_3(&VAR_9, &VAR_10);
    if (VAR_8 != VAR_5)
 FUNC_2(1, VAR_9, "release %d != GSS_S_COMPLETE", (int)VAR_8);

    VAR_8 = FUNC_1(&VAR_9,
       VAR_11,
       VAR_2,
       VAR_4,
       VAR_0,
       VAR_1,
       VAR_1,
       &VAR_12,
       ((void*)0),
       ((void*)0),
       ((void*)0));

    VAR_8 = FUNC_3(&VAR_9, &VAR_11);
    if (VAR_8 != VAR_5)
 FUNC_2(1, VAR_9, "release 2 %d != GSS_S_COMPLETE", (int)VAR_8);

    VAR_8 = FUNC_3(&VAR_9, &VAR_12);
    if (VAR_8 != VAR_5)
 FUNC_2(1, VAR_9, "release 2 %d != GSS_S_COMPLETE", (int)VAR_8);
}
