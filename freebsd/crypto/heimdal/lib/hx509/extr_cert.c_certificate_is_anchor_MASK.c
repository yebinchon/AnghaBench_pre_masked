
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int certificate; int match; } ;
typedef TYPE_1__ hx509_query ;
typedef int hx509_context ;
typedef int * hx509_certs ;
typedef int hx509_cert ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_4(hx509_context VAR_1,
        hx509_certs VAR_2,
        const hx509_cert VAR_3)
{
    hx509_query VAR_4;
    hx509_cert VAR_5;
    int VAR_6;

    if (VAR_2 == ((void*)0))
 return 0;

    FUNC_1(&VAR_4);

    VAR_4.match = VAR_0;
    VAR_4.certificate = FUNC_0(VAR_3);

    VAR_6 = FUNC_3(VAR_1, VAR_2, &VAR_4, &VAR_5);
    if (VAR_6 == 0)
 FUNC_2(VAR_5);
    return VAR_6 == 0;
}
