
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eth_spe {int dummy; } ;
struct bxe_softc {scalar_t__ spq_prod_idx; struct eth_spe* spq_prod_bd; struct eth_spe* spq; struct eth_spe* spq_last_bd; } ;



__attribute__((used)) static inline
struct eth_spe *FUNC_0(struct bxe_softc *VAR_0)
{
    struct eth_spe *VAR_1 = VAR_0->spq_prod_bd;

    if (VAR_0->spq_prod_bd == VAR_0->spq_last_bd) {

        VAR_0->spq_prod_bd = VAR_0->spq;
        VAR_0->spq_prod_idx = 0;
    } else {
        VAR_0->spq_prod_bd++;
        VAR_0->spq_prod_idx++;
    }

    return (VAR_1);
}
