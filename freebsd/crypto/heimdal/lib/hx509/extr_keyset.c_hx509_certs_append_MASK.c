
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_lock ;
typedef int hx509_context ;
typedef int hx509_certs ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char const*,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;

int
FUNC_3(hx509_context VAR_0,
     hx509_certs VAR_1,
     hx509_lock VAR_2,
     const char *VAR_3)
{
    hx509_certs VAR_4;
    int VAR_5;

    VAR_5 = FUNC_1(VAR_0, VAR_3, 0, VAR_2, &VAR_4);
    if (VAR_5)
 return VAR_5;
    VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_4);
    FUNC_0(&VAR_4);
    return VAR_5;
}
