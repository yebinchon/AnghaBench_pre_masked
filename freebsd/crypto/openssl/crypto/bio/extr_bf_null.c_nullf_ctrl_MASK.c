
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * next_bio; } ;
typedef TYPE_1__ BIO ;




 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 long FUNC_2 (int *,int,long,void*) ;

__attribute__((used)) static long FUNC_3(BIO *VAR_0, int VAR_1, long VAR_2, void *VAR_3)
{
    long VAR_4;

    if (VAR_0->next_bio == ((void*)0))
        return 0;
    switch (VAR_1) {
    case 128:
        FUNC_0(VAR_0);
        VAR_4 = FUNC_2(VAR_0->next_bio, VAR_1, VAR_2, VAR_3);
        FUNC_1(VAR_0);
        break;
    case 129:
        VAR_4 = 0L;
        break;
    default:
        VAR_4 = FUNC_2(VAR_0->next_bio, VAR_1, VAR_2, VAR_3);
    }
    return VAR_4;
}
