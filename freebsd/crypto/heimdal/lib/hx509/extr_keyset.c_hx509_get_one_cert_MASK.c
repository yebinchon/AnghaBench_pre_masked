
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_cursor ;
typedef int hx509_context ;
typedef int hx509_certs ;
typedef int * hx509_cert ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int **) ;
 int FUNC_2 (int ,int ,int *) ;

int
FUNC_3(hx509_context VAR_0, hx509_certs VAR_1, hx509_cert *VAR_2)
{
    hx509_cursor VAR_3;
    int VAR_4;

    *VAR_2 = ((void*)0);

    VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_3);
    if (VAR_4)
 return VAR_4;

    VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2);
    if (VAR_4)
 return VAR_4;

    FUNC_0(VAR_0, VAR_1, VAR_3);
    return 0;
}
