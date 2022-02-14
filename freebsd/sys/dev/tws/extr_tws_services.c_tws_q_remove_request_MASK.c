
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct tws_softc {struct tws_request** q_head; struct tws_request** q_tail; int q_lock; } ;
struct tws_request {size_t request_id; TYPE_1__* prev; struct tws_request* next; } ;
struct TYPE_2__ {struct tws_request* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct tws_softc*,char*,int ,size_t) ;
 int FUNC_1 (int *,int ) ;
 struct tws_request* FUNC_2 (struct tws_softc*,size_t) ;
 struct tws_request* FUNC_3 (struct tws_softc*,size_t) ;

struct tws_request *
FUNC_4(struct tws_softc *VAR_1, struct tws_request *VAR_2,
                                 u_int8_t VAR_3 )
{

    struct tws_request *VAR_4;

    FUNC_1(&VAR_1->q_lock, VAR_0);
    if ( VAR_2 == ((void*)0) ) {
        FUNC_0(VAR_1, "null req", 0, VAR_3);
        return(((void*)0));
    }

    if ( VAR_2 == VAR_1->q_head[VAR_3] )
        return(FUNC_2(VAR_1, VAR_3));
    if ( VAR_2 == VAR_1->q_tail[VAR_3] )
        return(FUNC_3(VAR_1, VAR_3));







    if ( VAR_2->next == ((void*)0) || VAR_2->prev == ((void*)0) ) {
        FUNC_0(VAR_1, "invalid req", 0, VAR_3);
        return(((void*)0));
    }


    VAR_4 = VAR_1->q_head[VAR_3];
    while ( VAR_4 ) {
        if ( VAR_2 == VAR_4 )
            break;
        VAR_4 = VAR_4->next;
    }

    if ( !VAR_4 ) {
        FUNC_0(VAR_1, "req not in q", 0, VAR_2->request_id);
        return(((void*)0));
    }


    VAR_2->prev->next = VAR_4->next;
    VAR_2->next->prev = VAR_4->prev;
    VAR_2->next = ((void*)0);
    VAR_2->prev = ((void*)0);
    return(VAR_2);
}
