
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int q; } ;
struct TYPE_9__ {int q; } ;
struct TYPE_8__ {int q; } ;
struct TYPE_12__ {TYPE_3__ buffered_app_data; TYPE_2__ processed_rcds; TYPE_1__ unprocessed_rcds; } ;
struct TYPE_11__ {TYPE_5__* d; } ;
typedef TYPE_4__ RECORD_LAYER ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(RECORD_LAYER *VAR_0)
{
    FUNC_0(VAR_0);
    FUNC_2(VAR_0->d->unprocessed_rcds.q);
    FUNC_2(VAR_0->d->processed_rcds.q);
    FUNC_2(VAR_0->d->buffered_app_data.q);
    FUNC_1(VAR_0->d);
    VAR_0->d = ((void*)0);
}
