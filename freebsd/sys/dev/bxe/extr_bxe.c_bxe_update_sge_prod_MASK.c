
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union eth_sgl_or_raw_data {int * sgl; } ;
typedef size_t uint16_t ;
struct bxe_softc {int dummy; } ;
struct bxe_fastpath {size_t last_max_sge; size_t rx_sge_prod; int index; int * sge_mask; } ;


 int FUNC_0 (int *,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct bxe_softc*,int ,char*,int ,size_t,size_t) ;
 int VAR_3 ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct bxe_fastpath*) ;
 int FUNC_6 (struct bxe_fastpath*,size_t) ;
 size_t FUNC_7 (int ) ;

__attribute__((used)) static inline void
FUNC_8(struct bxe_softc *VAR_4,
                    struct bxe_fastpath *VAR_5,
                    uint16_t VAR_6,
                    union eth_sgl_or_raw_data *VAR_7)
{
    uint16_t VAR_8, VAR_9, VAR_10;
    uint16_t VAR_11 = 0;
    uint16_t VAR_12;

    if (!VAR_6) {
        return;
    }


    for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
        FUNC_0(VAR_5->sge_mask,
                            FUNC_2(FUNC_7(VAR_7->sgl[VAR_12])));
    }

    FUNC_1(VAR_4, VAR_3,
          "fp[%02d] fp_cqe->sgl[%d] = %d\n",
          VAR_5->index, VAR_6 - 1,
          FUNC_7(VAR_7->sgl[VAR_6 - 1]));


    FUNC_6(VAR_5,
                            FUNC_7(VAR_7->sgl[VAR_6 - 1]));

    VAR_8 = FUNC_2(VAR_5->last_max_sge);
    VAR_9 = VAR_8 >> VAR_1;
    VAR_10 = FUNC_2(VAR_5->rx_sge_prod) >> VAR_1;


    if (VAR_9 + 1 != VAR_10) {
        VAR_9++;
    }


    for (VAR_12 = VAR_10; VAR_12 != VAR_9; VAR_12 = FUNC_3(VAR_12)) {
        if (FUNC_4(VAR_5->sge_mask[VAR_12])) {
            break;
        }

        VAR_5->sge_mask[VAR_12] = VAR_0;
        VAR_11 += VAR_2;
    }

    if (VAR_11 > 0) {
        VAR_5->rx_sge_prod += VAR_11;

        FUNC_5(VAR_5);
    }

    FUNC_1(VAR_4, VAR_3,
          "fp[%02d] fp->last_max_sge=%d fp->rx_sge_prod=%d\n",
          VAR_5->index, VAR_5->last_max_sge, VAR_5->rx_sge_prod);
}
