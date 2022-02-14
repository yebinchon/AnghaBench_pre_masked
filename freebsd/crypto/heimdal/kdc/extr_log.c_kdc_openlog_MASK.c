
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int logf; } ;
typedef TYPE_1__ krb5_kdc_configuration ;
typedef int krb5_context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,int ,int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (char**) ;
 char** FUNC_6 (int ,int *,char const*,char const*,int *) ;
 int FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(krb5_context VAR_1,
     const char *VAR_2,
     krb5_kdc_configuration *VAR_3)
{
    char **VAR_4 = ((void*)0), **VAR_5;
    FUNC_7(VAR_1, "kdc", &VAR_3->logf);
    VAR_4 = FUNC_6(VAR_1, ((void*)0), VAR_2, "logging", ((void*)0));
    if(VAR_4 == ((void*)0))
 VAR_4 = FUNC_6(VAR_1, ((void*)0), "logging", VAR_2, ((void*)0));
    if(VAR_4){
 for(VAR_5 = VAR_4; *VAR_5; VAR_5++)
     FUNC_4(VAR_1, VAR_3->logf, *VAR_5);
 FUNC_5(VAR_4);
    }else {
 char *VAR_6;
 if (FUNC_0(&VAR_6, "0-1/FILE:%d/%d", FUNC_3(VAR_1),
     VAR_0) < 0)
     FUNC_1(1, ((void*)0));
 FUNC_4(VAR_1, VAR_3->logf, VAR_6);
 FUNC_2(VAR_6);
    }
    FUNC_8(VAR_1, VAR_3->logf);
}
