
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,char**,int (*) (int,int ,int )) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,int,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_4 (int,int ,int ) ;

int
FUNC_5(krb5_context *VAR_4, int VAR_5, char **VAR_6)
{
    int VAR_7 = FUNC_0(VAR_4, &VAR_5, VAR_6, FUNC_4);
    krb5_error_code VAR_8;

    if(VAR_6[VAR_5] != ((void*)0))
 FUNC_4(1, VAR_0, VAR_3);
    if (VAR_2 != ((void*)0))
 VAR_8 = FUNC_3 (*VAR_4, VAR_2, &VAR_1);
    else
 VAR_8 = FUNC_2 (*VAR_4, &VAR_1);
    if (VAR_8)
 FUNC_1 (*VAR_4, 1, VAR_8, "krb5_kt_resolve/default");
    return VAR_7;
}
