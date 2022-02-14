
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_context ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,char*) ;

int
FUNC_7(int VAR_0, char **VAR_1)
{
    hx509_context VAR_2;
    int VAR_3 = 0;

    VAR_3 = FUNC_2(&VAR_2);
    if (VAR_3)
 FUNC_0(1, "hx509_context_init failed with %d", VAR_3);

    VAR_3 += FUNC_5(VAR_2, "CN=foo,C=SE");
    VAR_3 += FUNC_5(VAR_2, "CN=foo,CN=kaka,CN=FOO,DC=ad1,C=SE");
    VAR_3 += FUNC_5(VAR_2, "1.2.3.4=foo,C=SE");
    VAR_3 += FUNC_6(VAR_2, "=");
    VAR_3 += FUNC_6(VAR_2, "CN=foo,=foo");
    VAR_3 += FUNC_6(VAR_2, "CN=foo,really-unknown-type=foo");

    VAR_3 += FUNC_4(VAR_2, "UID=${uid},C=SE", "UID=lha,C=SE");
    VAR_3 += FUNC_4(VAR_2, "UID=foo${uid},C=SE", "UID=foolha,C=SE");
    VAR_3 += FUNC_4(VAR_2, "UID=${uid}bar,C=SE", "UID=lhabar,C=SE");
    VAR_3 += FUNC_4(VAR_2, "UID=f${uid}b,C=SE", "UID=flhab,C=SE");
    VAR_3 += FUNC_4(VAR_2, "UID=${uid}${uid},C=SE", "UID=lhalha,C=SE");
    VAR_3 += FUNC_4(VAR_2, "UID=${uid}{uid},C=SE", "UID=lha{uid},C=SE");

    VAR_3 += FUNC_3(VAR_2);

    FUNC_1(&VAR_2);

    return VAR_3;
}
