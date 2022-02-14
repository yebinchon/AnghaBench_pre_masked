
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct tws_softc {int dma_mem_phys; struct tws_sense* sense_bufs; } ;
struct tws_sense {int hdr_pkt_phy; } ;
struct tws_command_packet {int dummy; } ;


 int FUNC_0 (struct tws_softc*,char*,struct tws_softc*,int) ;
 int VAR_0 ;

struct tws_sense *
FUNC_1(struct tws_softc *VAR_1, u_int64_t VAR_2)
{
    struct tws_sense *VAR_3;
    int VAR_4;
    FUNC_0(VAR_1, "entry",VAR_1,VAR_2);

    VAR_4 = (VAR_2 - VAR_1->dma_mem_phys) / sizeof(struct tws_command_packet);
    if ( VAR_4>= 0 && VAR_4<VAR_0) {
        VAR_3 = &VAR_1->sense_bufs[VAR_4];
        if ( VAR_2 == VAR_3->hdr_pkt_phy )
            return(VAR_3);
    }

    FUNC_0(VAR_1, "return null",0,VAR_2);
    return(((void*)0));

}
