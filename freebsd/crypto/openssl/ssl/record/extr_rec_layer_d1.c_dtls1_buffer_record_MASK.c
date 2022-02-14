
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;


struct TYPE_21__ {int q; } ;
typedef TYPE_2__ record_pqueue ;
struct TYPE_22__ {TYPE_5__* data; } ;
typedef TYPE_3__ pitem ;
struct TYPE_19__ {TYPE_5__* buf; } ;
struct TYPE_24__ {TYPE_11__ rbuf; int recordinfo; TYPE_11__ rrec; scalar_t__ packet_length; int * packet; } ;
struct TYPE_20__ {int rrec; int rbuf; scalar_t__ packet_length; int * packet; } ;
struct TYPE_23__ {TYPE_1__ rlayer; } ;
typedef int SSL3_RECORD ;
typedef int SSL3_BUFFER ;
typedef TYPE_4__ SSL ;
typedef TYPE_5__ DTLS1_RECORD_DATA ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_5__* FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (TYPE_11__*,int *,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_3__* FUNC_10 (unsigned char*,TYPE_5__*) ;
 int * FUNC_11 (int ,TYPE_3__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_4__*) ;

int FUNC_14(SSL *VAR_6, record_pqueue *VAR_7, unsigned char *VAR_8)
{
    DTLS1_RECORD_DATA *VAR_9;
    pitem *VAR_10;


    if (FUNC_12(VAR_7->q) >= 100)
        return 0;

    VAR_9 = FUNC_3(sizeof(*VAR_9));
    VAR_10 = FUNC_10(VAR_8, VAR_9);
    if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0)) {
        FUNC_2(VAR_9);
        FUNC_9(VAR_10);
        FUNC_6(VAR_6, VAR_2, VAR_3,
                 VAR_1);
        return -1;
    }

    VAR_9->packet = VAR_6->rlayer.packet;
    VAR_9->packet_length = VAR_6->rlayer.packet_length;
    FUNC_7(&(VAR_9->rbuf), &VAR_6->rlayer.rbuf, sizeof(SSL3_BUFFER));
    FUNC_7(&(VAR_9->rrec), &VAR_6->rlayer.rrec, sizeof(SSL3_RECORD));

    VAR_10->data = VAR_9;



    if (FUNC_1(FUNC_4(VAR_6)) &&
        (FUNC_5(VAR_6) == VAR_5
         || FUNC_5(VAR_6) == VAR_4)) {
        FUNC_0(FUNC_4(VAR_6), VAR_0,
                 sizeof(VAR_9->recordinfo), &VAR_9->recordinfo);
    }


    VAR_6->rlayer.packet = ((void*)0);
    VAR_6->rlayer.packet_length = 0;
    FUNC_8(&VAR_6->rlayer.rbuf, 0, sizeof(VAR_6->rlayer.rbuf));
    FUNC_8(&VAR_6->rlayer.rrec, 0, sizeof(VAR_6->rlayer.rrec));

    if (!FUNC_13(VAR_6)) {

        FUNC_2(VAR_9->rbuf.buf);
        FUNC_2(VAR_9);
        FUNC_9(VAR_10);
        return -1;
    }

    if (FUNC_11(VAR_7->q, VAR_10) == ((void*)0)) {

        FUNC_2(VAR_9->rbuf.buf);
        FUNC_2(VAR_9);
        FUNC_9(VAR_10);
    }

    return 1;
}
