
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * next_bio; scalar_t__ ptr; } ;
typedef int BIO_ACCEPT ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    BIO_ACCEPT *VAR_4;

    FUNC_0(VAR_0);
    VAR_4 = (BIO_ACCEPT *)VAR_0->ptr;

    while (VAR_0->next_bio == ((void*)0)) {
        VAR_3 = FUNC_3(VAR_0, VAR_4);
        if (VAR_3 <= 0)
            return VAR_3;
    }

    VAR_3 = FUNC_2(VAR_0->next_bio, VAR_1, VAR_2);
    FUNC_1(VAR_0);
    return VAR_3;
}
