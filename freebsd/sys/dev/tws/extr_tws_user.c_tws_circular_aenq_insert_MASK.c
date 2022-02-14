
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef size_t u_int16_t ;
struct tws_softc {int gen_lock; } ;
struct tws_event_packet {scalar_t__ retrieved; } ;
struct tws_circular_q {size_t head; size_t tail; size_t volatile depth; int overflow; scalar_t__ q; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tws_event_packet*,struct tws_event_packet*,int) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct tws_softc *VAR_2, struct tws_circular_q *VAR_3,
struct tws_event_packet *VAR_4)
{

    struct tws_event_packet *VAR_5 = (struct tws_event_packet *)VAR_3->q;
    volatile u_int16_t VAR_6, VAR_7;
    u_int8_t VAR_8;
    FUNC_1(&VAR_2->gen_lock, VAR_0);

    VAR_6 = VAR_3->head;
    VAR_7 = VAR_3->tail;
    VAR_8 = VAR_5[VAR_7].retrieved;

    FUNC_0(&VAR_5[VAR_7], VAR_4, sizeof(struct tws_event_packet));
    VAR_7 = (VAR_7+1) % VAR_3->depth;

    if ( VAR_6 == VAR_7 ) {
        if ( VAR_8 != VAR_1 )
            VAR_3->overflow = 1;
        VAR_3->head = (VAR_6+1) % VAR_3->depth;
    }
    VAR_3->tail = VAR_7;

}
