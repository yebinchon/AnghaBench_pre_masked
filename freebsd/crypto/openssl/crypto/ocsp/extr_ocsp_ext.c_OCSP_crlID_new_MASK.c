
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_EXTENSION ;
struct TYPE_5__ {int * crlTime; int * crlNum; int * crlUrl; } ;
typedef TYPE_1__ OCSP_CRLID ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,long) ;
 int FUNC_5 (int *,char const*,int) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 () ;
 int * FUNC_8 (int ,int ,TYPE_1__*) ;

X509_EXTENSION *FUNC_9(const char *VAR_1, long *VAR_2, char *VAR_3)
{
    X509_EXTENSION *VAR_4 = ((void*)0);
    OCSP_CRLID *VAR_5 = ((void*)0);

    if ((VAR_5 = FUNC_7()) == ((void*)0))
        goto err;
    if (VAR_1) {
        if ((VAR_5->crlUrl = FUNC_2()) == ((void*)0))
            goto err;
        if (!(FUNC_5(VAR_5->crlUrl, VAR_1, -1)))
            goto err;
    }
    if (VAR_2) {
        if ((VAR_5->crlNum = FUNC_3()) == ((void*)0))
            goto err;
        if (!(FUNC_4(VAR_5->crlNum, *VAR_2)))
            goto err;
    }
    if (VAR_3) {
        if ((VAR_5->crlTime = FUNC_0()) == ((void*)0))
            goto err;
        if (!(FUNC_1(VAR_5->crlTime, VAR_3)))
            goto err;
    }
    VAR_4 = FUNC_8(VAR_0, 0, VAR_5);
 err:
    FUNC_6(VAR_5);
    return VAR_4;
}
