
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WRITE_TRAN ;
struct TYPE_12__ {int hand_state; } ;
struct TYPE_8__ {int early_data; } ;
struct TYPE_11__ {int shutdown; int options; int key_update; TYPE_3__* s3; TYPE_1__ ext; int hello_retry_request; int early_data_state; int post_handshake_auth; TYPE_5__ statem; } ;
struct TYPE_9__ {int cert_req; } ;
struct TYPE_10__ {TYPE_2__ tmp; } ;
typedef TYPE_4__ SSL ;
typedef TYPE_5__ OSSL_STATEM ;


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
 int FUNC_0 (TYPE_4__*,int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;

__attribute__((used)) static WRITE_TRAN FUNC_2(SSL *VAR_14)
{
    OSSL_STATEM *VAR_15 = &VAR_14->statem;






    switch (VAR_15->hand_state) {
    default:

        FUNC_0(VAR_14, VAR_1,
                 VAR_5,
                 VAR_0);
        return VAR_12;

    case 139:
        if (VAR_14->post_handshake_auth == VAR_9) {
            VAR_15->hand_state = 135;
            return VAR_11;
        }




        if (!FUNC_1((VAR_14->shutdown & VAR_10) != 0)) {

            FUNC_0(VAR_14, VAR_1,
                     VAR_5,
                     VAR_0);
            return VAR_12;
        }
        VAR_15->hand_state = 129;
        return VAR_11;

    case 138:
        if (VAR_14->early_data_state == VAR_4
                || VAR_14->early_data_state == VAR_3)
            VAR_15->hand_state = 128;
        else if ((VAR_14->options & VAR_8) != 0
                 && VAR_14->hello_retry_request == VAR_6)
            VAR_15->hand_state = 133;
        else
            VAR_15->hand_state = (VAR_14->s3->tmp.cert_req != 0) ? 135
                                                        : 131;
        return VAR_11;

    case 128:
        if (VAR_14->ext.early_data == VAR_2) {
            VAR_15->hand_state = 132;
            return VAR_11;
        }


    case 132:
    case 133:
        VAR_15->hand_state = (VAR_14->s3->tmp.cert_req != 0) ? 135
                                                    : 131;
        return VAR_11;

    case 135:

        VAR_15->hand_state = (VAR_14->s3->tmp.cert_req == 1) ? 134
                                                    : 131;
        return VAR_11;

    case 134:
        VAR_15->hand_state = 131;
        return VAR_11;

    case 137:
    case 130:
    case 136:
    case 131:
        VAR_15->hand_state = 129;
        return VAR_11;

    case 129:
        if (VAR_14->key_update != VAR_7) {
            VAR_15->hand_state = 130;
            return VAR_11;
        }


        return VAR_13;
    }
}
