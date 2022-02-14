
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * next_bio; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3 = 0;

    if (VAR_1 == ((void*)0))
        return 0;
    if (VAR_0->next_bio == ((void*)0))
        return 0;
    VAR_3 = FUNC_2(VAR_0->next_bio, VAR_1, VAR_2);
    FUNC_0(VAR_0);
    FUNC_1(VAR_0);
    return VAR_3;
}
