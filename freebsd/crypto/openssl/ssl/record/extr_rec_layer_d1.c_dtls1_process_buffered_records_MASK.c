
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_16__ ;
typedef struct TYPE_20__ TYPE_13__ ;


typedef int pitem ;
struct TYPE_21__ {TYPE_2__* d; int rrec; } ;
struct TYPE_25__ {TYPE_16__ rlayer; } ;
struct TYPE_24__ {scalar_t__ length; } ;
struct TYPE_22__ {scalar_t__ epoch; int q; } ;
struct TYPE_20__ {scalar_t__ epoch; } ;
struct TYPE_23__ {scalar_t__ r_epoch; TYPE_1__ unprocessed_rcds; TYPE_13__ processed_rcds; } ;
typedef TYPE_3__ SSL3_RECORD ;
typedef int SSL3_BUFFER ;
typedef TYPE_4__ SSL ;
typedef int DTLS1_BITMAP ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_16__*) ;
 TYPE_3__* FUNC_2 (TYPE_16__*) ;
 int FUNC_3 (TYPE_16__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*,TYPE_13__*,int ) ;
 int * FUNC_9 (TYPE_4__*,TYPE_3__*,unsigned int*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int FUNC_12 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_13 (TYPE_4__*) ;
 int * FUNC_14 (int ) ;

int FUNC_15(SSL *VAR_3)
{
    pitem *VAR_4;
    SSL3_BUFFER *VAR_5;
    SSL3_RECORD *VAR_6;
    DTLS1_BITMAP *VAR_7;
    unsigned int VAR_8;
    int VAR_9 = 1;

    VAR_4 = FUNC_14(VAR_3->rlayer.d->unprocessed_rcds.q);
    if (VAR_4) {

        if (VAR_3->rlayer.d->unprocessed_rcds.epoch != VAR_3->rlayer.d->r_epoch)
            return 1;

        VAR_6 = FUNC_2(&VAR_3->rlayer);

        VAR_5 = FUNC_1(&VAR_3->rlayer);

        if (FUNC_4(VAR_5) > 0) {






            return 1;
        }


        while (FUNC_14(VAR_3->rlayer.d->unprocessed_rcds.q)) {
            FUNC_10(VAR_3);
            VAR_7 = FUNC_9(VAR_3, VAR_6, &VAR_8);
            if (VAR_7 == ((void*)0)) {





                 FUNC_7(VAR_3, VAR_1,
                          VAR_2,
                          VAR_0);
                 return 0;
            }


            if (!FUNC_0(FUNC_6(VAR_3)))

            {






                VAR_9 = FUNC_12(VAR_3, VAR_7);
            }

            if (!VAR_9 || !FUNC_11(VAR_3, VAR_7)) {
                if (FUNC_13(VAR_3)) {

                    return -1;
                }

                VAR_6->length = 0;
                FUNC_3(&VAR_3->rlayer);
                continue;
            }

            if (FUNC_8(VAR_3, &(VAR_3->rlayer.d->processed_rcds),
                    FUNC_5(VAR_3->rlayer.rrec)) < 0) {

                return 0;
            }
        }
    }





    VAR_3->rlayer.d->processed_rcds.epoch = VAR_3->rlayer.d->r_epoch;
    VAR_3->rlayer.d->unprocessed_rcds.epoch = VAR_3->rlayer.d->r_epoch + 1;

    return 1;
}
