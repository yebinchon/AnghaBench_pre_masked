
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gss_name_t ;
typedef int gss_cred_id_t ;
typedef int gss_OID_set ;
typedef int gss_OID ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_1 (scalar_t__*,int ,int *) ;
 int FUNC_2 (scalar_t__*,int *) ;
 int FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (scalar_t__*,int *) ;

__attribute__((used)) static OM_uint32
FUNC_5(gss_name_t VAR_5, gss_OID VAR_6)
{
    gss_cred_id_t VAR_7 = VAR_2;
    gss_OID_set VAR_8;
    OM_uint32 VAR_9, VAR_10;

    if (VAR_5 == VAR_3)
 return VAR_4;

    FUNC_2(&VAR_9, &VAR_8);
    FUNC_1(&VAR_9, VAR_6, &VAR_8);

    VAR_10 = FUNC_0(&VAR_9, VAR_5, VAR_1, VAR_8,
      VAR_0, &VAR_7, ((void*)0), ((void*)0));
    FUNC_4(&VAR_9, &VAR_8);
    if (VAR_10 != VAR_4)
 return VAR_10;
    FUNC_3(&VAR_9, &VAR_7);

    return VAR_4;
}
