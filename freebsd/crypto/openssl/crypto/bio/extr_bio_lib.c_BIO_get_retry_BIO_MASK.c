
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int retry_reason; struct TYPE_5__* next_bio; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (TYPE_1__*) ;

BIO *FUNC_1(BIO *VAR_0, int *VAR_1)
{
    BIO *VAR_2, *VAR_3;

    VAR_2 = VAR_3 = VAR_0;
    for (;;) {
        if (!FUNC_0(VAR_2))
            break;
        VAR_3 = VAR_2;
        VAR_2 = VAR_2->next_bio;
        if (VAR_2 == ((void*)0))
            break;
    }
    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_3->retry_reason;
    return VAR_3;
}
