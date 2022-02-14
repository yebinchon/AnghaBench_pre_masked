
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * q; } ;
struct TYPE_10__ {int * q; } ;
struct TYPE_9__ {int * q; } ;
struct TYPE_13__ {TYPE_3__ buffered_app_data; TYPE_2__ processed_rcds; TYPE_1__ unprocessed_rcds; } ;
struct TYPE_12__ {TYPE_5__* d; } ;
typedef TYPE_4__ RECORD_LAYER ;
typedef TYPE_5__ DTLS_RECORD_LAYER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 () ;

int FUNC_5(RECORD_LAYER *VAR_2)
{
    DTLS_RECORD_LAYER *VAR_3;

    if ((VAR_3 = FUNC_1(sizeof(*VAR_3))) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }

    VAR_2->d = VAR_3;

    VAR_3->unprocessed_rcds.q = FUNC_4();
    VAR_3->processed_rcds.q = FUNC_4();
    VAR_3->buffered_app_data.q = FUNC_4();

    if (VAR_3->unprocessed_rcds.q == ((void*)0) || VAR_3->processed_rcds.q == ((void*)0)
        || VAR_3->buffered_app_data.q == ((void*)0)) {
        FUNC_3(VAR_3->unprocessed_rcds.q);
        FUNC_3(VAR_3->processed_rcds.q);
        FUNC_3(VAR_3->buffered_app_data.q);
        FUNC_0(VAR_3);
        VAR_2->d = ((void*)0);
        return 0;
    }

    return 1;
}
