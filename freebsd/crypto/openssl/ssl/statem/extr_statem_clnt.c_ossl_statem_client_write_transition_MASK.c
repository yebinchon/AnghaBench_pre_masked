
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WRITE_TRAN ;
struct TYPE_15__ {int hand_state; } ;
struct TYPE_14__ {int options; int hit; TYPE_2__* s3; int early_data_state; int hello_retry_request; int renegotiate; TYPE_4__ statem; } ;
struct TYPE_12__ {int cert_req; } ;
struct TYPE_13__ {int flags; int npn_seen; TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ OSSL_STATEM ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*) ;

WRITE_TRAN FUNC_6(SSL *VAR_11)
{
    OSSL_STATEM *VAR_12 = &VAR_11->statem;






    if (FUNC_1(VAR_11))
        return FUNC_3(VAR_11);

    switch (VAR_12->hand_state) {
    default:

        FUNC_2(VAR_11, VAR_1,
                 VAR_4,
                 VAR_0);
        return VAR_9;

    case 128:
        if (!VAR_11->renegotiate) {




            return VAR_10;
        }


    case 141:
        VAR_12->hand_state = 133;
        return VAR_8;

    case 133:
        if (VAR_11->early_data_state == VAR_2) {




            if ((VAR_11->options & VAR_6) != 0)
                VAR_12->hand_state = 134;
            else
                VAR_12->hand_state = 129;
            return VAR_8;
        }




        return VAR_10;

    case 137:





        if ((VAR_11->options & VAR_6) != 0
                && VAR_11->early_data_state != VAR_3)
            VAR_12->hand_state = 134;
        else
            VAR_12->hand_state = 133;
        return VAR_8;

    case 129:
        return VAR_10;

    case 142:
        VAR_12->hand_state = 133;
        return VAR_8;

    case 138:
        if (VAR_11->s3->tmp.cert_req)
            VAR_12->hand_state = 136;
        else
            VAR_12->hand_state = 131;
        return VAR_8;

    case 136:
        VAR_12->hand_state = 131;
        return VAR_8;

    case 131:
        if (VAR_11->s3->tmp.cert_req == 1) {
            VAR_12->hand_state = 135;
        } else {
            VAR_12->hand_state = 134;
        }
        if (VAR_11->s3->flags & VAR_7) {
            VAR_12->hand_state = 134;
        }
        return VAR_8;

    case 135:
        VAR_12->hand_state = 134;
        return VAR_8;

    case 134:
        if (VAR_11->hello_retry_request == VAR_5) {
            VAR_12->hand_state = 133;
        } else if (VAR_11->early_data_state == VAR_2) {
            VAR_12->hand_state = 129;
        } else {



            if (!FUNC_0(VAR_11) && VAR_11->s3->npn_seen)
                VAR_12->hand_state = 130;
            else
                VAR_12->hand_state = 132;

        }
        return VAR_8;


    case 130:
        VAR_12->hand_state = 132;
        return VAR_8;


    case 132:
        if (VAR_11->hit) {
            VAR_12->hand_state = 128;
            return VAR_8;
        } else {
            return VAR_10;
        }

    case 140:
        if (VAR_11->hit) {
            VAR_12->hand_state = 134;
            return VAR_8;
        } else {
            VAR_12->hand_state = 128;
            return VAR_8;
        }

    case 139:




        if (FUNC_4(VAR_11, 1)) {
            if (!FUNC_5(VAR_11)) {

                return VAR_9;
            }
            VAR_12->hand_state = 133;
            return VAR_8;
        }
        VAR_12->hand_state = 128;
        return VAR_8;
    }
}
