
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int tso_segsz; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct bxe_softc {int dummy; } ;
typedef int int32_t ;
struct TYPE_5__ {int ds_len; } ;
typedef TYPE_2__ bus_dma_segment_t ;


 unsigned short FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct bxe_softc *VAR_0,
                  int VAR_1,
                  bus_dma_segment_t *VAR_2,
                  struct mbuf *VAR_3)
{
    uint32_t VAR_4, VAR_5, VAR_6;
    int32_t VAR_7, VAR_8;
    unsigned short VAR_9;
    int VAR_10;

    VAR_10 = 0;
    VAR_6 = 0;
    VAR_5 = 10;
    VAR_4 = VAR_1 - VAR_5;
    VAR_9 = FUNC_0(VAR_3->m_pkthdr.tso_segsz);






    for (VAR_7 = 1; (VAR_7 <= VAR_5); VAR_7++) {
        VAR_6 += FUNC_0(VAR_2[VAR_7].ds_len);
    }


    if (VAR_6 < VAR_9) {
        return (1);
    }


    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++, VAR_7++) {

        VAR_6 -= FUNC_0(VAR_2[VAR_8+1].ds_len);

        VAR_6 += FUNC_0(VAR_2[VAR_7].ds_len);
        if (VAR_6 < VAR_9) {
            return (1);
        }
    }

    return (0);
}
