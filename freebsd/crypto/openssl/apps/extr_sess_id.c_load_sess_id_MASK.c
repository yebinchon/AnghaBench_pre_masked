
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_SESSION ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int VAR_1 ;
 int * FUNC_4 (char*,char,int) ;
 int * FUNC_5 (int *,int *) ;

__attribute__((used)) static SSL_SESSION *FUNC_6(char *VAR_2, int VAR_3)
{
    SSL_SESSION *VAR_4 = ((void*)0);
    BIO *VAR_5 = ((void*)0);

    VAR_5 = FUNC_4(VAR_2, 'r', VAR_3);
    if (VAR_5 == ((void*)0))
        goto end;
    if (VAR_3 == VAR_0)
        VAR_4 = FUNC_5(VAR_5, ((void*)0));
    else
        VAR_4 = FUNC_3(VAR_5, ((void*)0), ((void*)0), ((void*)0));
    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_1, "unable to load SSL_SESSION\n");
        FUNC_2(VAR_1);
        goto end;
    }

 end:
    FUNC_0(VAR_5);
    return VAR_4;
}
