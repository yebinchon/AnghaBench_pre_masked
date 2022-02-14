
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parameter; int * algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int,void*) ;
 int VAR_0 ;

int FUNC_4(X509_ALGOR *VAR_1, ASN1_OBJECT *VAR_2, int VAR_3, void *VAR_4)
{
    if (VAR_1 == ((void*)0))
        return 0;

    if (VAR_3 != VAR_0) {
        if (VAR_1->parameter == ((void*)0))
            VAR_1->parameter = FUNC_2();
        if (VAR_1->parameter == ((void*)0))
            return 0;
    }

    FUNC_0(VAR_1->algorithm);
    VAR_1->algorithm = VAR_2;

    if (VAR_3 == 0)
        return 1;
    if (VAR_3 == VAR_0) {
        FUNC_1(VAR_1->parameter);
        VAR_1->parameter = ((void*)0);
    } else
        FUNC_3(VAR_1->parameter, VAR_3, VAR_4);
    return 1;
}
