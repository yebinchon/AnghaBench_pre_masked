
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct bxe_softc {scalar_t__ tx_ring_size; } ;
struct bxe_fastpath {scalar_t__ tx_bd_cons; scalar_t__ tx_bd_prod; } ;
typedef scalar_t__ int16_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline uint16_t
FUNC_1(struct bxe_softc *VAR_0,
             struct bxe_fastpath *VAR_1)
{
    int16_t VAR_2;
    uint16_t VAR_3;
    uint16_t VAR_4;

    VAR_3 = VAR_1->tx_bd_prod;
    VAR_4 = VAR_1->tx_bd_cons;

    VAR_2 = FUNC_0(VAR_3, VAR_4);

    return (int16_t)(VAR_0->tx_ring_size) - VAR_2;
}
