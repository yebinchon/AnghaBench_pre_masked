
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_pem_header ;
typedef int hx509_name ;
typedef int hx509_context ;
typedef int hx509_cert ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char**) ;
 int FUNC_5 (int **,char*,char*) ;

__attribute__((used)) static int
FUNC_6(hx509_context VAR_0, void *VAR_1, hx509_cert VAR_2)
{
    hx509_pem_header **VAR_3 = VAR_1;
    char *VAR_4 = ((void*)0);
    hx509_name VAR_5;
    int VAR_6;

    VAR_6 = FUNC_2(VAR_2, &VAR_5);
    if (VAR_6)
 FUNC_0(1, "hx509_cert_get_subject");

    VAR_6 = FUNC_4(VAR_5, &VAR_4);
    FUNC_3(&VAR_5);
    if (VAR_6)
 FUNC_0(1, "hx509_name_to_string");

    FUNC_5(VAR_3, "Signer", VAR_4);

    FUNC_1(VAR_4);
    return 0;
}
