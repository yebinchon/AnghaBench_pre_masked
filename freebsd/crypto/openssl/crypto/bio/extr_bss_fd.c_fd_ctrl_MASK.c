
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num; int shutdown; int init; } ;
typedef TYPE_1__ BIO ;
 scalar_t__ FUNC_0 (int,long,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static long FUNC_2(BIO *VAR_0, int VAR_1, long VAR_2, void *VAR_3)
{
    long VAR_4 = 1;
    int *VAR_5;

    switch (VAR_1) {
    case 134:
        VAR_2 = 0;

    case 131:
        VAR_4 = (long)FUNC_0(VAR_0->num, VAR_2, 0);
        break;
    case 130:
    case 136:
        VAR_4 = (long)FUNC_0(VAR_0->num, 0, 1);
        break;
    case 128:
        FUNC_1(VAR_0);
        VAR_0->num = *((int *)VAR_3);
        VAR_0->shutdown = (int)VAR_2;
        VAR_0->init = 1;
        break;
    case 129:
        if (VAR_0->init) {
            VAR_5 = (int *)VAR_3;
            if (VAR_5 != ((void*)0))
                *VAR_5 = VAR_0->num;
            VAR_4 = VAR_0->num;
        } else
            VAR_4 = -1;
        break;
    case 137:
        VAR_4 = VAR_0->shutdown;
        break;
    case 133:
        VAR_0->shutdown = (int)VAR_2;
        break;
    case 135:
    case 132:
        VAR_4 = 0;
        break;
    case 139:
    case 138:
        VAR_4 = 1;
        break;
    default:
        VAR_4 = 0;
        break;
    }
    return VAR_4;
}
