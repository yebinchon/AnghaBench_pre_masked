
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WRITE_TRAN ;
struct TYPE_9__ {int hand_state; } ;
struct TYPE_7__ {int ticket_expected; } ;
struct TYPE_8__ {int options; int sent_tickets; int num_tickets; int hit; TYPE_1__ ext; int post_handshake_auth; int hello_retry_request; int key_update; TYPE_3__ statem; } ;
typedef TYPE_2__ SSL ;
typedef TYPE_3__ OSSL_STATEM ;


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
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static WRITE_TRAN FUNC_2(SSL *VAR_13)
{
    OSSL_STATEM *VAR_14 = &VAR_13->statem;






    switch (VAR_14->hand_state) {
    default:

        FUNC_0(VAR_13, VAR_1,
                 VAR_2,
                 VAR_0);
        return VAR_11;

    case 140:
        if (VAR_13->key_update != VAR_5) {
            VAR_14->hand_state = 130;
            return VAR_10;
        }
        if (VAR_13->post_handshake_auth == VAR_9) {
            VAR_14->hand_state = 135;
            return VAR_10;
        }

        return VAR_12;

    case 139:
        VAR_14->hand_state = 128;
        return VAR_10;

    case 128:
        if ((VAR_13->options & VAR_6) != 0
                && VAR_13->hello_retry_request != VAR_3)
            VAR_14->hand_state = 133;
        else if (VAR_13->hello_retry_request == VAR_4)
            VAR_14->hand_state = 141;
        else
            VAR_14->hand_state = 132;
        return VAR_10;

    case 133:
        if (VAR_13->hello_retry_request == VAR_4)
            VAR_14->hand_state = 141;
        else
            VAR_14->hand_state = 132;
        return VAR_10;

    case 132:
        if (VAR_13->hit)
            VAR_14->hand_state = 131;
        else if (FUNC_1(VAR_13))
            VAR_14->hand_state = 135;
        else
            VAR_14->hand_state = 136;

        return VAR_10;

    case 135:
        if (VAR_13->post_handshake_auth == VAR_9) {
            VAR_13->post_handshake_auth = VAR_8;
            VAR_14->hand_state = 140;
        } else {
            VAR_14->hand_state = 136;
        }
        return VAR_10;

    case 136:
        VAR_14->hand_state = 134;
        return VAR_10;

    case 134:
        VAR_14->hand_state = 131;
        return VAR_10;

    case 131:
        VAR_14->hand_state = 141;
        return VAR_10;

    case 141:
        return VAR_12;

    case 138:





        if (VAR_13->post_handshake_auth == VAR_8) {
            VAR_13->post_handshake_auth = VAR_7;
        } else if (!VAR_13->ext.ticket_expected) {




            VAR_14->hand_state = 140;
            return VAR_10;
        }
        if (VAR_13->num_tickets > VAR_13->sent_tickets)
            VAR_14->hand_state = 129;
        else
            VAR_14->hand_state = 140;
        return VAR_10;

    case 137:
    case 130:
        VAR_14->hand_state = 140;
        return VAR_10;

    case 129:




        if (VAR_13->hit || VAR_13->num_tickets <= VAR_13->sent_tickets) {

            VAR_14->hand_state = 140;
        }
        return VAR_10;
    }
}
