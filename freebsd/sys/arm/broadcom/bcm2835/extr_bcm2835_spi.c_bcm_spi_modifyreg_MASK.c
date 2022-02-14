
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_spi_softc {int sc_mtx; } ;


 int FUNC_0 (struct bcm_spi_softc*,int ) ;
 int FUNC_1 (struct bcm_spi_softc*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct bcm_spi_softc *VAR_1, uint32_t VAR_2, uint32_t VAR_3,
 uint32_t VAR_4)
{
 uint32_t VAR_5;

 FUNC_2(&VAR_1->sc_mtx, VAR_0);
 VAR_5 = FUNC_0(VAR_1, VAR_2);
 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_4;
 FUNC_1(VAR_1, VAR_2, VAR_5);
}
