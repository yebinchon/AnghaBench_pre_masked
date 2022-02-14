
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int shutdown; scalar_t__ post_handshake_auth; TYPE_2__* s3; scalar_t__ pha_context_len; int * pha_context; } ;
struct TYPE_13__ {int cert_req; scalar_t__ ctype_len; int * ctype; scalar_t__* valid_flags; } ;
struct TYPE_14__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef int RAW_EXTENSION ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int **,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int *,int ) ;
 int FUNC_11 (TYPE_3__*,int *,int ,int **,int *,int) ;
 int FUNC_12 (TYPE_3__*,int ,int *,int *,int ,int) ;

MSG_PROCESS_RETURN FUNC_13(SSL *VAR_16, PACKET *VAR_17)
{
    size_t VAR_18;


    for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
        VAR_16->s3->tmp.valid_flags[VAR_18] = 0;

    if (FUNC_5(VAR_16)) {
        PACKET VAR_19, VAR_20;
        RAW_EXTENSION *VAR_21 = ((void*)0);

        if ((VAR_16->shutdown & VAR_15) != 0) {





            return VAR_5;
        }


        FUNC_0(VAR_16->s3->tmp.ctype);
        VAR_16->s3->tmp.ctype = ((void*)0);
        VAR_16->s3->tmp.ctype_len = 0;
        FUNC_0(VAR_16->pha_context);
        VAR_16->pha_context = ((void*)0);

        if (!FUNC_1(VAR_17, &VAR_19) ||
            !FUNC_3(&VAR_19, &VAR_16->pha_context, &VAR_16->pha_context_len)) {
            FUNC_7(VAR_16, VAR_6,
                     VAR_9,
                     VAR_13);
            return VAR_4;
        }

        if (!FUNC_2(VAR_17, &VAR_20)) {
            FUNC_7(VAR_16, VAR_6,
                     VAR_9,
                     VAR_12);
            return VAR_4;
        }
        if (!FUNC_11(VAR_16, &VAR_20,
                                    VAR_8,
                                    &VAR_21, ((void*)0), 1)
            || !FUNC_12(VAR_16, VAR_8,
                                         VAR_21, ((void*)0), 0, 1)) {

            FUNC_0(VAR_21);
            return VAR_4;
        }
        FUNC_0(VAR_21);
        if (!FUNC_9(VAR_16)) {
            FUNC_7(VAR_16, VAR_7,
                     VAR_9,
                     VAR_12);
            return VAR_4;
        }
    } else {
        PACKET VAR_22;


        if (!FUNC_1(VAR_17, &VAR_22)) {
            FUNC_7(VAR_16, VAR_6,
                     VAR_9,
                     VAR_13);
            return VAR_4;
        }

        if (!FUNC_3(&VAR_22, &VAR_16->s3->tmp.ctype, &VAR_16->s3->tmp.ctype_len)) {
            FUNC_7(VAR_16, VAR_7,
                     VAR_9,
                     VAR_0);
            return VAR_4;
        }

        if (FUNC_6(VAR_16)) {
            PACKET VAR_23;

            if (!FUNC_2(VAR_17, &VAR_23)) {
                FUNC_7(VAR_16, VAR_6,
                         VAR_9,
                         VAR_13);
                return VAR_4;
            }





            if (!FUNC_10(VAR_16, &VAR_23, 0)) {
                FUNC_7(VAR_16, VAR_7,
                         VAR_9,
                         VAR_14);
                return VAR_4;
            }
            if (!FUNC_9(VAR_16)) {
                FUNC_7(VAR_16, VAR_7,
                         VAR_9,
                         VAR_1);
                return VAR_4;
            }
        }


        if (!FUNC_8(VAR_16, VAR_17)) {

            return VAR_4;
        }
    }

    if (FUNC_4(VAR_17) != 0) {
        FUNC_7(VAR_16, VAR_6,
                 VAR_9,
                 VAR_13);
        return VAR_4;
    }


    VAR_16->s3->tmp.cert_req = 1;
    if (FUNC_5(VAR_16) && VAR_16->post_handshake_auth != VAR_10)
        return VAR_3;

    return VAR_2;
}
