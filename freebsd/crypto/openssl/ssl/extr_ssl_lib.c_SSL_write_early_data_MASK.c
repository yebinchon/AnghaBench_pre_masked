
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int early_data_state; int mode; int wbio; int * psk_use_session_cb; TYPE_2__* session; int server; } ;
struct TYPE_9__ {int max_early_data; } ;
struct TYPE_10__ {TYPE_1__ ext; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,void const*,size_t,size_t*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;

int FUNC_6(SSL *VAR_6, const void *VAR_7, size_t VAR_8, size_t *VAR_9)
{
    int VAR_10, VAR_11;
    size_t VAR_12;
    uint32_t VAR_13;

    switch (VAR_6->early_data_state) {
    case 131:
        if (VAR_6->server
                || !FUNC_2(VAR_6)
                || ((VAR_6->session == ((void*)0) || VAR_6->session->ext.max_early_data == 0)
                     && (VAR_6->psk_use_session_cb == ((void*)0)))) {
            FUNC_4(VAR_4,
                   VAR_0);
            return 0;
        }


    case 133:
        VAR_6->early_data_state = VAR_1;
        VAR_10 = FUNC_1(VAR_6);
        if (VAR_10 <= 0) {

            VAR_6->early_data_state = 133;
            return 0;
        }


    case 128:
        VAR_6->early_data_state = VAR_3;





        VAR_13 = VAR_6->mode & VAR_5;
        VAR_6->mode &= ~VAR_5;
        VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_8, &VAR_12);
        VAR_6->mode |= VAR_13;
        if (!VAR_10) {
            VAR_6->early_data_state = 128;
            return VAR_10;
        }
        VAR_6->early_data_state = 129;


    case 129:

        if (FUNC_5(VAR_6) != 1)
            return 0;
        *VAR_9 = VAR_8;
        VAR_6->early_data_state = 128;
        return 1;

    case 132:
    case 130:
        VAR_11 = VAR_6->early_data_state;

        VAR_6->early_data_state = VAR_2;
        VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9);

        if (VAR_10)
            (void)FUNC_0(VAR_6->wbio);
        VAR_6->early_data_state = VAR_11;
        return VAR_10;

    default:
        FUNC_4(VAR_4, VAR_0);
        return 0;
    }
}
