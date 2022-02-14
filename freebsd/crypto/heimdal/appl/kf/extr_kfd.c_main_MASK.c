
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_log_facility ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,char*,char*,int ,char*,int *) ;
 int FUNC_3 (int ,int,int,char*) ;
 int FUNC_4 (int ,char*,int **) ;
 int FUNC_5 (int ,int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (int *,int,char**) ;
 int VAR_6 ;
 int FUNC_8 (char*) ;

int
FUNC_9(int VAR_7, char **VAR_8)
{
    int VAR_9;
    int VAR_10;
    krb5_log_facility *VAR_11;

    FUNC_8 (VAR_8[0]);
    FUNC_6 (VAR_8[0], VAR_1 | VAR_2,VAR_0);
    VAR_9 = FUNC_7(&VAR_3, VAR_7, VAR_8);
    VAR_10 = FUNC_4(VAR_3, "kfd", &VAR_11);
    if(VAR_10) FUNC_3(VAR_3, 1, VAR_10, "krb5_openlog");
    VAR_10 = FUNC_5(VAR_3, VAR_11);
    if(VAR_10) FUNC_3(VAR_3, 1, VAR_10, "krb5_set_warn_dest");

    VAR_10 = FUNC_1 (VAR_9, VAR_6);
    FUNC_0();
    if (VAR_10 == 0 && VAR_5 != ((void*)0))
        VAR_10 = FUNC_2(VAR_5, "regpag", "-t", VAR_4, "-r", ((void*)0));
    return VAR_10;
}
