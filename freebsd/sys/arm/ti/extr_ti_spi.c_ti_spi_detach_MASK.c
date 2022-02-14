
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_spi_softc {scalar_t__ sc_mem_res; scalar_t__ sc_irq_res; scalar_t__ sc_intrhand; int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ti_spi_softc*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 struct ti_spi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6)
{
 struct ti_spi_softc *VAR_7;

 VAR_7 = FUNC_4(VAR_6);


 FUNC_0(VAR_7, VAR_0, 0);
 FUNC_0(VAR_7, VAR_1, 0xffff);


 FUNC_0(VAR_7, VAR_2, VAR_3);

 FUNC_1(VAR_6);

 FUNC_5(&VAR_7->sc_mtx);
 if (VAR_7->sc_intrhand)
  FUNC_3(VAR_6, VAR_7->sc_irq_res, VAR_7->sc_intrhand);
 if (VAR_7->sc_irq_res)
  FUNC_2(VAR_6, VAR_4, 0, VAR_7->sc_irq_res);
 if (VAR_7->sc_mem_res)
  FUNC_2(VAR_6, VAR_5, 0, VAR_7->sc_mem_res);

 return (0);
}
