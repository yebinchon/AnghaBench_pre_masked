
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int hand_state; } ;
struct TYPE_8__ {int early_data; } ;
struct TYPE_12__ {int post_handshake_auth; int early_data_state; TYPE_4__* session; TYPE_3__* s3; TYPE_1__ ext; int hello_retry_request; TYPE_6__ statem; } ;
struct TYPE_11__ {int * peer; } ;
struct TYPE_9__ {int cert_request; } ;
struct TYPE_10__ {TYPE_2__ tmp; } ;
typedef TYPE_5__ SSL ;
typedef TYPE_6__ OSSL_STATEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;

 void* VAR_11 ;
 int VAR_12 ;


__attribute__((used)) static int FUNC_0(SSL *VAR_13, int VAR_14)
{
    OSSL_STATEM *VAR_15 = &VAR_13->statem;






    switch (VAR_15->hand_state) {
    default:
        break;

    case 133:
        if (VAR_13->hello_retry_request == VAR_8) {
            if (VAR_14 == VAR_2) {
                VAR_15->hand_state = VAR_10;
                return 1;
            }
            break;
        } else if (VAR_13->ext.early_data == VAR_6) {
            if (VAR_14 == VAR_3) {
                VAR_15->hand_state = 129;
                return 1;
            }
            break;
        }


    case 129:
    case 128:
        if (VAR_13->s3->tmp.cert_request) {
            if (VAR_14 == VAR_0) {
                VAR_15->hand_state = 131;
                return 1;
            }
        } else {
            if (VAR_14 == VAR_4) {
                VAR_15->hand_state = VAR_11;
                return 1;
            }
        }
        break;

    case 131:
        if (VAR_13->session->peer == ((void*)0)) {
            if (VAR_14 == VAR_4) {
                VAR_15->hand_state = VAR_11;
                return 1;
            }
        } else {
            if (VAR_14 == VAR_1) {
                VAR_15->hand_state = 130;
                return 1;
            }
        }
        break;

    case 130:
        if (VAR_14 == VAR_4) {
            VAR_15->hand_state = VAR_11;
            return 1;
        }
        break;

    case 132:




        if (VAR_13->early_data_state == VAR_7)
            break;

        if (VAR_14 == VAR_0
                && VAR_13->post_handshake_auth == VAR_9) {
            VAR_15->hand_state = 131;
            return 1;
        }

        if (VAR_14 == VAR_5) {
            VAR_15->hand_state = VAR_12;
            return 1;
        }
        break;
    }


    return 0;
}
