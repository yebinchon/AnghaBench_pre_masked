
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef size_t u_int16_t ;
struct TYPE_3__ {scalar_t__ head; scalar_t__ tail; size_t depth; scalar_t__ q; scalar_t__ overflow; } ;
struct tws_softc {TYPE_1__ aen_q; } ;
struct TYPE_4__ {void* status; } ;
struct tws_ioctl_packet {struct tws_event_packet* data_buf; TYPE_2__ driver_pkt; } ;
struct tws_event_packet {int retrieved; int sequence_id; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct tws_softc*,char*,struct tws_softc*,int) ;
 int FUNC_1 (struct tws_event_packet*,struct tws_event_packet*,int) ;

__attribute__((used)) static void
FUNC_2(struct tws_softc *VAR_3, u_long VAR_4,
                            struct tws_ioctl_packet *VAR_5)
{
    u_int16_t VAR_6=0;
    struct tws_event_packet VAR_7, *VAR_8;

    if ( VAR_3->aen_q.head == VAR_3->aen_q.tail ) {
        VAR_5->driver_pkt.status = VAR_0;
        return;
    }

    VAR_5->driver_pkt.status = 0;





    if ( VAR_3->aen_q.overflow ) {
        VAR_5->driver_pkt.status = VAR_1;
        VAR_3->aen_q.overflow = 0;
    }

    VAR_8 = (struct tws_event_packet *)VAR_3->aen_q.q;

    switch (VAR_4) {
        case 131 :
            VAR_6 = VAR_3->aen_q.head;
            break;
        case 130 :

            VAR_6 = (VAR_3->aen_q.depth + VAR_3->aen_q.tail - 1) % VAR_3->aen_q.depth;
            break;
        case 129 :
            FUNC_1(&VAR_7, VAR_5->data_buf, sizeof(struct tws_event_packet));
            VAR_6 = VAR_3->aen_q.head;
            do {
                if ( VAR_8[VAR_6].sequence_id ==
                           (VAR_7.sequence_id + 1) )
                    break;
                VAR_6 = (VAR_6+1) % VAR_3->aen_q.depth;
            }while ( VAR_6 != VAR_3->aen_q.tail );
            if ( VAR_6 == VAR_3->aen_q.tail ) {
                VAR_5->driver_pkt.status = VAR_0;
                return;
            }
            break;
        case 128 :
            FUNC_1(&VAR_7, VAR_5->data_buf, sizeof(struct tws_event_packet));
            VAR_6 = VAR_3->aen_q.head;
            do {
                if ( VAR_8[VAR_6].sequence_id ==
                           (VAR_7.sequence_id - 1) )
                    break;
                VAR_6 = (VAR_6+1) % VAR_3->aen_q.depth;
            }while ( VAR_6 != VAR_3->aen_q.tail );
            if ( VAR_6 == VAR_3->aen_q.tail ) {
                VAR_5->driver_pkt.status = VAR_0;
                return;
            }
            break;
        default :
            FUNC_0(VAR_3, "not a valid event", VAR_3, VAR_4);
            VAR_5->driver_pkt.status = VAR_0;
            return;
    }

    FUNC_1(VAR_5->data_buf, &VAR_8[VAR_6],
                           sizeof(struct tws_event_packet));
    VAR_8[VAR_6].retrieved = VAR_2;

    return;

}
