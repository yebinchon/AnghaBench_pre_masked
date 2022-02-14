
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hx509_name ;
typedef int hx509_context ;
typedef int hx509_cert ;
struct TYPE_4__ {int issuer; int subject; } ;
struct TYPE_5__ {TYPE_1__ tbsCertificate; } ;
typedef TYPE_2__ Certificate ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (void*,char*,char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char**) ;

int
FUNC_6(hx509_context VAR_0, void *VAR_1, hx509_cert VAR_2)
{
    Certificate *VAR_3;
    hx509_name VAR_4;
    char *VAR_5, *VAR_6;

    VAR_3 = FUNC_0(VAR_2);

    FUNC_1(&VAR_3->tbsCertificate.subject, &VAR_4);
    FUNC_5(VAR_4, &VAR_5);
    FUNC_4(&VAR_4);
    FUNC_1(&VAR_3->tbsCertificate.issuer, &VAR_4);
    FUNC_5(VAR_4, &VAR_6);
    FUNC_4(&VAR_4);
    FUNC_2(VAR_1, "subject: %s\nissuer: %s\n", VAR_5, VAR_6);
    FUNC_3(VAR_5);
    FUNC_3(VAR_6);
    return 0;
}
