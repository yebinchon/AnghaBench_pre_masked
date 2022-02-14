
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bxe_softc {int mtu; int num_queues; TYPE_1__* fp; } ;
struct TYPE_2__ {int rx_buf_size; int mbuf_alloc_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct bxe_softc *VAR_4)
{
    int VAR_5;
    uint32_t VAR_6;

    VAR_6 = (VAR_1 + VAR_0 + VAR_4->mtu);

    for (VAR_5 = 0; VAR_5 < VAR_4->num_queues; VAR_5++) {
        if(VAR_6 <= VAR_2){
            VAR_4->fp[VAR_5].rx_buf_size = VAR_6;
            VAR_4->fp[VAR_5].mbuf_alloc_size = VAR_2;
        }else if (VAR_6 <= VAR_3){
            VAR_4->fp[VAR_5].rx_buf_size = VAR_6;
            VAR_4->fp[VAR_5].mbuf_alloc_size = VAR_3;
        }else if (VAR_6 <= (VAR_3 + VAR_2)){
            VAR_4->fp[VAR_5].rx_buf_size = VAR_2;
            VAR_4->fp[VAR_5].mbuf_alloc_size = VAR_2;
        }else if (VAR_6 <= (2 * VAR_3)){
            VAR_4->fp[VAR_5].rx_buf_size = VAR_3;
            VAR_4->fp[VAR_5].mbuf_alloc_size = VAR_3;
        }else {
            VAR_4->fp[VAR_5].rx_buf_size = VAR_2;
            VAR_4->fp[VAR_5].mbuf_alloc_size = VAR_2;
        }
    }
}
