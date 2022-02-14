
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int WRITE_TRAN ;
struct TYPE_24__ {int hand_state; int request_state; } ;
struct TYPE_22__ {int ticket_expected; int status_expected; } ;
struct TYPE_23__ {int hit; TYPE_5__ ext; TYPE_4__* s3; int renegotiate; TYPE_1__* d1; TYPE_7__ statem; } ;
struct TYPE_20__ {TYPE_2__* new_cipher; } ;
struct TYPE_21__ {TYPE_3__ tmp; } ;
struct TYPE_19__ {int algorithm_auth; } ;
struct TYPE_18__ {int cookie_verified; } ;
typedef TYPE_6__ SSL ;
typedef TYPE_7__ OSSL_STATEM ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;

WRITE_TRAN FUNC_9(SSL *VAR_10)
{
    OSSL_STATEM *VAR_11 = &VAR_10->statem;






    if (FUNC_2(VAR_10))
        return FUNC_5(VAR_10);

    switch (VAR_11->hand_state) {
    default:

        FUNC_4(VAR_10, VAR_1,
                 VAR_2,
                 VAR_0);
        return VAR_8;

    case 140:
        if (VAR_11->request_state == 132) {

            VAR_11->hand_state = 132;
            VAR_11->request_state = 141;
            return VAR_7;
        }

        if (!FUNC_8(VAR_10)) {

            return VAR_8;
        }


    case 141:

        return VAR_9;

    case 132:
        VAR_11->hand_state = 140;
        return VAR_7;

    case 139:
        if (FUNC_0(VAR_10) && !VAR_10->d1->cookie_verified
            && (FUNC_3(VAR_10) & VAR_3)) {
            VAR_11->hand_state = 142;
        } else if (VAR_10->renegotiate == 0 && !FUNC_1(VAR_10)) {

            VAR_11->hand_state = 140;
            return VAR_7;
        } else {
            VAR_11->hand_state = 128;
        }
        return VAR_7;

    case 142:
        return VAR_9;

    case 128:
        if (VAR_10->hit) {
            if (VAR_10->ext.ticket_expected)
                VAR_11->hand_state = 130;
            else
                VAR_11->hand_state = 134;
        } else {


            if (!(VAR_10->s3->tmp.new_cipher->algorithm_auth &
                  (VAR_4 | VAR_6 | VAR_5))) {
                VAR_11->hand_state = 137;
            } else if (FUNC_7(VAR_10)) {
                VAR_11->hand_state = 131;
            } else if (FUNC_6(VAR_10)) {
                VAR_11->hand_state = 136;
            } else {
                VAR_11->hand_state = 129;
            }
        }
        return VAR_7;

    case 137:
        if (VAR_10->ext.status_expected) {
            VAR_11->hand_state = 135;
            return VAR_7;
        }


    case 135:
        if (FUNC_7(VAR_10)) {
            VAR_11->hand_state = 131;
            return VAR_7;
        }


    case 131:
        if (FUNC_6(VAR_10)) {
            VAR_11->hand_state = 136;
            return VAR_7;
        }


    case 136:
        VAR_11->hand_state = 129;
        return VAR_7;

    case 129:
        return VAR_9;

    case 138:
        if (VAR_10->hit) {
            VAR_11->hand_state = 140;
            return VAR_7;
        } else if (VAR_10->ext.ticket_expected) {
            VAR_11->hand_state = 130;
        } else {
            VAR_11->hand_state = 134;
        }
        return VAR_7;

    case 130:
        VAR_11->hand_state = 134;
        return VAR_7;

    case 134:
        VAR_11->hand_state = 133;
        return VAR_7;

    case 133:
        if (VAR_10->hit) {
            return VAR_9;
        }
        VAR_11->hand_state = 140;
        return VAR_7;
    }
}
