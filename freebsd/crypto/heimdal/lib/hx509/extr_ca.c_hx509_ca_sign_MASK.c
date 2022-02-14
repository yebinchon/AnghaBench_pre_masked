
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hx509_context ;
typedef int hx509_cert ;
typedef int hx509_ca_tbs ;
typedef int ai ;
struct TYPE_5__ {int subject; } ;
struct TYPE_6__ {TYPE_1__ tbsCertificate; } ;
typedef TYPE_2__ Certificate ;
typedef int AuthorityKeyIdentifier ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_2__ const*,int *) ;
 int FUNC_5 (int *,int ,int) ;

int
FUNC_6(hx509_context VAR_0,
       hx509_ca_tbs VAR_1,
       hx509_cert VAR_2,
       hx509_cert *VAR_3)
{
    const Certificate *VAR_4;
    AuthorityKeyIdentifier VAR_5;
    int VAR_6;

    FUNC_5(&VAR_5, 0, sizeof(VAR_5));

    VAR_4 = FUNC_1(VAR_2);

    VAR_6 = FUNC_4(VAR_0, VAR_4, &VAR_5);
    if (VAR_6)
 goto out;

    VAR_6 = FUNC_2(VAR_0,
    VAR_1,
    FUNC_0(VAR_2),
    &VAR_5,
    &VAR_4->tbsCertificate.subject,
    VAR_3);

out:
    FUNC_3(&VAR_5);

    return VAR_6;
}
