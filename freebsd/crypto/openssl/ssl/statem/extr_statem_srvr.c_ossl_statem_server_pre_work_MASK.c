
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int WORK_STATE ;
struct TYPE_22__ {int hand_state; int use_timer; } ;
struct TYPE_21__ {TYPE_5__* s3; int early_data_state; TYPE_4__* method; TYPE_1__* session; int sent_tickets; int shutdown; TYPE_7__ statem; } ;
struct TYPE_17__ {int new_cipher; } ;
struct TYPE_20__ {int flags; TYPE_2__ tmp; } ;
struct TYPE_19__ {TYPE_3__* ssl3_enc; } ;
struct TYPE_18__ {int (* setup_key_block ) (TYPE_6__*) ;} ;
struct TYPE_16__ {int cipher; } ;
typedef TYPE_6__ SSL ;
typedef TYPE_7__ OSSL_STATEM ;


 int FUNC_0 (int ) ;

 int VAR_0 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,int ,int,int) ;

WORK_STATE FUNC_8(SSL *VAR_4, WORK_STATE VAR_5)
{
    OSSL_STATEM *VAR_6 = &VAR_4->statem;

    switch (VAR_6->hand_state) {
    default:

        break;

    case 131:
        VAR_4->shutdown = 0;
        if (FUNC_1(VAR_4))
            FUNC_4(VAR_4);
        break;

    case 135:
        VAR_4->shutdown = 0;
        if (FUNC_1(VAR_4)) {
            FUNC_4(VAR_4);

            VAR_6->use_timer = 0;
        }
        break;

    case 128:
        if (FUNC_1(VAR_4)) {




            VAR_6->use_timer = 1;
        }
        break;

    case 129:

        if (FUNC_1(VAR_4) && FUNC_0(FUNC_3(VAR_4))) {

            return FUNC_5(VAR_4);
        }

        return VAR_3;

    case 130:
        if (FUNC_2(VAR_4) && VAR_4->sent_tickets == 0) {







            return FUNC_7(VAR_4, VAR_5, 0, 0);
        } if (FUNC_1(VAR_4)) {




            VAR_6->use_timer = 0;
        }
        break;

    case 132:
        if (FUNC_2(VAR_4))
            break;
        VAR_4->session->cipher = VAR_4->s3->tmp.new_cipher;
        if (!VAR_4->method->ssl3_enc->setup_key_block(VAR_4)) {

            return VAR_2;
        }
        if (FUNC_1(VAR_4)) {






            VAR_6->use_timer = 0;
        }
        return VAR_3;

    case 134:
        if (VAR_4->early_data_state != VAR_0
                && (VAR_4->s3->flags & VAR_1) == 0)
            return VAR_3;


    case 133:

        return FUNC_7(VAR_4, VAR_5, 1, 1);
    }

    return VAR_3;
}
