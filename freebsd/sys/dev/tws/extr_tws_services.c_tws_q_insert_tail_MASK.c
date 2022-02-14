
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
struct tws_softc {struct tws_request** q_tail; int q_lock; } ;
struct tws_request {struct tws_request* next; struct tws_request* prev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct tws_softc*,struct tws_request*,size_t) ;

void
FUNC_2(struct tws_softc *VAR_1, struct tws_request *VAR_2,
                                u_int8_t VAR_3 )
{

    FUNC_0(&VAR_1->q_lock, VAR_0);
    if ( VAR_1->q_tail[VAR_3] == ((void*)0) ) {
        FUNC_1(VAR_1, VAR_2, VAR_3);
    } else {
        VAR_2->prev = VAR_1->q_tail[VAR_3];
        VAR_2->next = ((void*)0);
        VAR_1->q_tail[VAR_3]->next = VAR_2;
        VAR_1->q_tail[VAR_3] = VAR_2;
    }

}
