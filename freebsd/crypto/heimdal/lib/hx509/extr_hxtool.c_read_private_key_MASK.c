
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * hx509_private_key ;
typedef int hx509_certs ;


 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int ,int ,int ***) ;
 int * FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int ,int *,int *) ;
 int FUNC_6 (int ,int,int,char*,...) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_1, hx509_private_key *VAR_2)
{
    hx509_private_key *VAR_3;
    hx509_certs VAR_4;
    int VAR_5;

    *VAR_2 = ((void*)0);

    VAR_5 = FUNC_5(VAR_0, VAR_1, 0, ((void*)0), &VAR_4);
    if (VAR_5)
 FUNC_6(VAR_0, 1, VAR_5, "hx509_certs_init: %s", VAR_1);

    VAR_5 = FUNC_1(VAR_0, VAR_4, &VAR_3);
    FUNC_4(&VAR_4);
    if (VAR_5)
 FUNC_6(VAR_0, 1, VAR_5, "hx509_certs_keys_get");
    if (VAR_3[0] == ((void*)0))
 FUNC_3(1, "no keys in key store: %s", VAR_1);

    *VAR_2 = FUNC_2(VAR_3[0]);
    FUNC_0(VAR_0, VAR_3);

    return 0;
}
