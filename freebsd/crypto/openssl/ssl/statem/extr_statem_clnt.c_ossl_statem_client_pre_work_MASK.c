
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WORK_STATE ;
struct TYPE_10__ {int hand_state; int use_timer; } ;
struct TYPE_9__ {int early_data_state; int hit; int shutdown; TYPE_2__ statem; } ;
typedef TYPE_1__ SSL ;
typedef TYPE_2__ OSSL_STATEM ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;





 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int,int) ;

WORK_STATE FUNC_6(SSL *VAR_4, WORK_STATE VAR_5)
{
    OSSL_STATEM *VAR_6 = &VAR_4->statem;

    switch (VAR_6->hand_state) {
    default:

        break;

    case 131:
        VAR_4->shutdown = 0;
        if (FUNC_1(VAR_4)) {

            if (!FUNC_4(VAR_4)) {

                return VAR_2;
            }
        }
        break;

    case 132:
        if (FUNC_1(VAR_4)) {
            if (VAR_4->hit) {




                VAR_6->use_timer = 0;
            }

            if (FUNC_0(FUNC_2(VAR_4))) {

                return FUNC_3(VAR_4);
            }

        }
        break;

    case 128:





        if (VAR_4->early_data_state == VAR_0
                || VAR_4->early_data_state == VAR_1)
            return VAR_3;


    case 130:
        return FUNC_5(VAR_4, VAR_5, 0, 1);

    case 129:

        return FUNC_5(VAR_4, VAR_5, 1, 1);
    }

    return VAR_3;
}
