
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_name ;
typedef int hx509_context ;
typedef int hx509_cert ;
typedef int heim_integer ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char**) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,char**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char**) ;
 int FUNC_10 (char*) ;
 int * VAR_0 ;

int
FUNC_11(hx509_context VAR_1, hx509_cert VAR_2, FILE *VAR_3)
{
    hx509_name VAR_4;
    char *VAR_5;
    int VAR_6;

    if (VAR_3 == ((void*)0))
 VAR_3 = VAR_0;

    VAR_6 = FUNC_4(VAR_2, &VAR_4);
    if (VAR_6)
 return VAR_6;
    FUNC_9(VAR_4, &VAR_5);
    FUNC_8(&VAR_4);
    FUNC_2(VAR_3, "    issuer:  \"%s\"\n", VAR_5);
    FUNC_3(VAR_5);

    VAR_6 = FUNC_6(VAR_2, &VAR_4);
    if (VAR_6)
 return VAR_6;
    FUNC_9(VAR_4, &VAR_5);
    FUNC_8(&VAR_4);
    FUNC_2(VAR_3, "    subject: \"%s\"\n", VAR_5);
    FUNC_3(VAR_5);

    {
 heim_integer VAR_7;

 VAR_6 = FUNC_5(VAR_2, &VAR_7);
 if (VAR_6)
     return VAR_6;
 VAR_6 = FUNC_1(&VAR_7, &VAR_5);
 if (VAR_6)
     return VAR_6;
 FUNC_0(&VAR_7);
 FUNC_2(VAR_3, "    serial: %s\n", VAR_5);
 FUNC_3(VAR_5);
    }

    FUNC_10("    keyusage: ");
    VAR_6 = FUNC_7(VAR_1, VAR_2, &VAR_5);
    if (VAR_6 == 0) {
 FUNC_2(VAR_3, "%s\n", VAR_5);
 FUNC_3(VAR_5);
    } else
 FUNC_2(VAR_3, "no");

    return 0;
}
