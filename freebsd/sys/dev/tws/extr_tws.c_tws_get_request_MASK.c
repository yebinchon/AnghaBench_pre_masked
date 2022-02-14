
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int16_t ;
struct mtx {int dummy; } ;
struct tws_softc {struct tws_request* reqs; struct mtx gen_lock; struct mtx q_lock; } ;
struct tws_request {scalar_t__ state; size_t type; int * prev; int next; int timeout; int * ccb_ptr; int * cb; int error_code; int flags; scalar_t__ length; int * data; TYPE_1__* cmd_pkt; } ;
struct tws_command_apache {int dummy; } ;
struct TYPE_2__ {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtx*) ;
 int FUNC_3 (struct mtx*) ;
 struct tws_request* FUNC_4 (struct tws_softc*,int ) ;

struct tws_request *
FUNC_5(struct tws_softc *VAR_7, u_int16_t VAR_8)
{
    struct mtx *VAR_9 = ((VAR_8 == VAR_6) ? &VAR_7->q_lock : &VAR_7->gen_lock);
    struct tws_request *VAR_10 = ((void*)0);

    FUNC_2(VAR_9);

    if (VAR_8 == VAR_6) {
        VAR_10 = FUNC_4(VAR_7, VAR_1);
    } else {
        if ( VAR_7->reqs[VAR_8].state == VAR_4 ) {
            VAR_10 = &VAR_7->reqs[VAR_8];
        }
    }

    if ( VAR_10 ) {
        FUNC_0(&VAR_10->cmd_pkt->cmd, sizeof(struct tws_command_apache));
        VAR_10->data = ((void*)0);
        VAR_10->length = 0;
        VAR_10->type = VAR_8;
        VAR_10->flags = VAR_0;
        VAR_10->error_code = VAR_2;
        VAR_10->cb = ((void*)0);
        VAR_10->ccb_ptr = ((void*)0);
 FUNC_1(&VAR_10->timeout);
        VAR_10->next = *(VAR_10->prev = ((void*)0));

        VAR_10->state = ((VAR_8 == VAR_6) ? VAR_5 : VAR_3);
    }

    FUNC_3(VAR_9);

    return(VAR_10);
}
