
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* d1; } ;
struct TYPE_8__ {int num_alerts; } ;
struct TYPE_9__ {size_t mtu; TYPE_1__ timeout; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;

int FUNC_4(SSL *VAR_6)
{
    size_t VAR_7;

    VAR_6->d1->timeout.num_alerts++;


    if (VAR_6->d1->timeout.num_alerts > 2
        && !(FUNC_1(VAR_6) & VAR_4)) {
        VAR_7 =
            FUNC_0(FUNC_2(VAR_6), VAR_0, 0, ((void*)0));
        if (VAR_7 < VAR_6->d1->mtu)
            VAR_6->d1->mtu = VAR_7;
    }

    if (VAR_6->d1->timeout.num_alerts > VAR_1) {

        FUNC_3(VAR_6, VAR_2, VAR_3,
                 VAR_5);
        return -1;
    }

    return 0;
}
