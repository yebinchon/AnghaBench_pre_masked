
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,int ,int ) ;

int FUNC_5(BIO *VAR_0, X509 *VAR_1)
{
    FUNC_4(VAR_0, "subject=", FUNC_2(VAR_1), FUNC_3());
    FUNC_0(VAR_0, "\n");
    FUNC_4(VAR_0, "issuer=", FUNC_1(VAR_1), FUNC_3());
    FUNC_0(VAR_0, "\n");

    return 0;
}
