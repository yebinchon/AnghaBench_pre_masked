
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef void* uint16_t ;
struct ustorm_eth_rx_producers {void* sge_prod; void* cqe_prod; void* bd_prod; int member_0; } ;
struct bxe_softc {int dummy; } ;
struct bxe_fastpath {int index; scalar_t__ ustorm_rx_prods_offset; } ;
typedef int rx_prods ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ,void*,void*,void*) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void
FUNC_3(struct bxe_softc *VAR_1,
                   struct bxe_fastpath *VAR_2,
                   uint16_t VAR_3,
                   uint16_t VAR_4,
                   uint16_t VAR_5)
{
    struct ustorm_eth_rx_producers VAR_6 = { 0 };
    uint32_t VAR_7;


    VAR_6.bd_prod = VAR_3;
    VAR_6.cqe_prod = VAR_4;
    VAR_6.sge_prod = VAR_5;
    FUNC_2();

    for (VAR_7 = 0; VAR_7 < (sizeof(VAR_6) / 4); VAR_7++) {
        FUNC_1(VAR_1,
               (VAR_2->ustorm_rx_prods_offset + (VAR_7 * 4)),
               ((uint32_t *)&VAR_6)[VAR_7]);
    }

    FUNC_2();

    FUNC_0(VAR_1, VAR_0,
          "RX fp[%d]: wrote prods bd_prod=%u cqe_prod=%u sge_prod=%u\n",
          VAR_2->index, VAR_3, VAR_4, VAR_5);
}
