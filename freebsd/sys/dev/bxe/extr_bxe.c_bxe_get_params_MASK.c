
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {scalar_t__ wol; int rx_ring_size; int tx_ring_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bxe_softc*) ;

__attribute__((used)) static void
FUNC_1(struct bxe_softc *VAR_2)
{

    FUNC_0(VAR_2);


    VAR_2->tx_ring_size = VAR_1;
    VAR_2->rx_ring_size = VAR_0;


    VAR_2->wol = 0;
}
