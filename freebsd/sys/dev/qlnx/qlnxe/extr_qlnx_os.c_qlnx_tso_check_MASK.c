
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qlnx_fastpath {int tx_lso_wnd_min_len; } ;
struct TYPE_3__ {scalar_t__ ds_len; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __inline int
FUNC_0(struct qlnx_fastpath *VAR_2, bus_dma_segment_t *VAR_3, int VAR_4,
 uint32_t VAR_5)
{
 int VAR_6;
 uint32_t VAR_7, VAR_8 = 1;
        uint32_t VAR_9;
        bus_dma_segment_t *VAR_10;



        if (VAR_4 < VAR_0)
                return (0);

        VAR_6 = 0;

        while ((VAR_6 < VAR_4) && (VAR_5 >= VAR_3->ds_len)) {
                VAR_5 = VAR_5 - VAR_3->ds_len;
                VAR_3++;
                VAR_6++;
                VAR_8++;
        }

        VAR_9 = VAR_0 - VAR_8;

        VAR_4 = VAR_4 - VAR_6;

        while (VAR_4 >= VAR_9) {

                VAR_7 = 0;
                VAR_10 = VAR_3;

                for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++){
                        VAR_7 += VAR_10->ds_len;
                        VAR_10++;
                }

                if (VAR_7 < VAR_1) {
                        VAR_2->tx_lso_wnd_min_len++;
                        return (-1);
                }

                VAR_4 = VAR_4 - 1;
                VAR_3++;
        }

 return (0);
}
