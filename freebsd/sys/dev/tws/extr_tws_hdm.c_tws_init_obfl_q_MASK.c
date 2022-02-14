
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
struct tws_softc {int obfl_q_overrun; int tws_dev; TYPE_1__* sense_bufs; } ;
struct TYPE_2__ {int hdr_pkt_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tws_softc*,char*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (struct tws_softc*,int ,int) ;
 int FUNC_3 (struct tws_softc*,int ,int,int) ;

void
FUNC_4(struct tws_softc *VAR_5)
{
    int VAR_6=0;
    u_int64_t VAR_7;
    u_int32_t VAR_8, VAR_9, VAR_10;

    FUNC_0(VAR_5, "entry", 0, VAR_5->obfl_q_overrun);

    while ( VAR_6 < VAR_4 ) {
        VAR_7 = VAR_5->sense_bufs[VAR_6].hdr_pkt_phy;
        VAR_8 = (u_int32_t)( VAR_7>>32);
        VAR_9 = (u_int32_t) VAR_7;
        FUNC_3(VAR_5, VAR_1, VAR_8, 4);
        FUNC_3(VAR_5, VAR_2, VAR_9, 4);

        VAR_10 = FUNC_2(VAR_5, VAR_3, 4);
        if ( VAR_10 & VAR_0 ) {
            FUNC_1(VAR_5->tws_dev, "OBFL Overrun\n");
            VAR_5->obfl_q_overrun = 1;
            break;
        }
        VAR_6++;
    }

    if ( VAR_6 == VAR_4 )
        VAR_5->obfl_q_overrun = 0;
}
