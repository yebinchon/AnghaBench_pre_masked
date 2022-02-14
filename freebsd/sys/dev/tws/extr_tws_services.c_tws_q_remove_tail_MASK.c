
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
struct tws_softc {struct tws_request** q_tail; int * q_head; int q_lock; } ;
struct tws_request {struct tws_request* prev; int * next; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

struct tws_request *
FUNC_1(struct tws_softc *VAR_1, u_int8_t VAR_2 )
{

    struct tws_request *VAR_3;

    FUNC_0(&VAR_1->q_lock, VAR_0);
    VAR_3 = VAR_1->q_tail[VAR_2];
    if ( !VAR_3 )
        return(((void*)0));
    if ( VAR_3->next == ((void*)0) && VAR_3->prev == ((void*)0) ) {

        VAR_1->q_head[VAR_2] = VAR_1->q_tail[VAR_2] = ((void*)0);
    } else {
        VAR_1->q_tail[VAR_2] = VAR_3->prev;
        VAR_3->prev->next = ((void*)0);
        VAR_3->next = ((void*)0);
        VAR_3->prev = ((void*)0);
    }
    return(VAR_3);
}
