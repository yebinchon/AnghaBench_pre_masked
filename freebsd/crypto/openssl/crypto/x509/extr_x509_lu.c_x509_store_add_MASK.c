
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int objs; } ;
typedef TYPE_2__ X509_STORE ;
struct TYPE_12__ {int * x509; int * crl; } ;
struct TYPE_14__ {int type; TYPE_1__ data; } ;
typedef TYPE_3__ X509_OBJECT ;
typedef int X509_CRL ;
typedef int X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_7(X509_STORE *VAR_3, void *VAR_4, int VAR_5) {
    X509_OBJECT *VAR_6;
    int VAR_7 = 0, VAR_8 = 0;

    if (VAR_4 == ((void*)0))
        return 0;
    VAR_6 = FUNC_1();
    if (VAR_6 == ((void*)0))
        return 0;

    if (VAR_5) {
        VAR_6->type = VAR_0;
        VAR_6->data.crl = (X509_CRL *)VAR_4;
    } else {
        VAR_6->type = VAR_2;
        VAR_6->data.x509 = (X509 *)VAR_4;
    }
    if (!FUNC_3(VAR_6)) {
        VAR_6->type = VAR_1;
        FUNC_0(VAR_6);
        return 0;
    }

    FUNC_4(VAR_3);
    if (FUNC_2(VAR_3->objs, VAR_6)) {
        VAR_7 = 1;
    } else {
        VAR_8 = FUNC_6(VAR_3->objs, VAR_6);
        VAR_7 = VAR_8 != 0;
    }
    FUNC_5(VAR_3);

    if (VAR_8 == 0)
        FUNC_0(VAR_6);

    return VAR_7;
}
