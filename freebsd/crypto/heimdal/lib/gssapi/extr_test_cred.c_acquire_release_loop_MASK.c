
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
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int,scalar_t__,char*,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_3(gss_name_t VAR_3, int VAR_4, gss_cred_usage_t VAR_5)
{
    OM_uint32 VAR_6, VAR_7;
    gss_cred_id_t VAR_8;
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
 VAR_6 = FUNC_0(&VAR_7, VAR_3,
        VAR_0,
        VAR_1,
        VAR_5,
        &VAR_8,
        ((void*)0),
        ((void*)0));
 if (VAR_6 != VAR_2)
     FUNC_1(1, VAR_7, "aquire %d %d != GSS_S_COMPLETE",
      VAR_9, (int)VAR_6);

 VAR_6 = FUNC_2(&VAR_7, &VAR_8);
 if (VAR_6 != VAR_2)
     FUNC_1(1, VAR_7, "release %d %d != GSS_S_COMPLETE",
      VAR_9, (int)VAR_6);
    }
}
