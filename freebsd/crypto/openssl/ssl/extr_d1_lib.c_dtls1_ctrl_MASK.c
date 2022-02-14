
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_8__ {TYPE_1__* d1; } ;
struct TYPE_7__ {long link_mtu; long mtu; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;





 int * FUNC_0 (TYPE_2__*,struct timeval*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int,long,void*) ;

long FUNC_4(SSL *VAR_1, int VAR_2, long VAR_3, void *VAR_4)
{
    int VAR_5 = 0;

    switch (VAR_2) {
    case 131:
        if (FUNC_0(VAR_1, (struct timeval *)VAR_4) != ((void*)0)) {
            VAR_5 = 1;
        }
        break;
    case 130:
        VAR_5 = FUNC_1(VAR_1);
        break;
    case 129:
        if (VAR_3 < (long)FUNC_2())
            return 0;
        VAR_1->d1->link_mtu = VAR_3;
        return 1;
    case 132:
        return (long)FUNC_2();
    case 128:




        if (VAR_3 < (long)FUNC_2() - VAR_0)
            return 0;
        VAR_1->d1->mtu = VAR_3;
        return VAR_3;
    default:
        VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
        break;
    }
    return VAR_5;
}
