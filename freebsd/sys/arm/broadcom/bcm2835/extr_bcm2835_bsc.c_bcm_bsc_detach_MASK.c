
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_bsc_softc {scalar_t__ sc_mem_res; scalar_t__ sc_irq_res; scalar_t__ sc_intrhand; int sc_mtx; int * sc_iicbus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 struct bcm_bsc_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct bcm_bsc_softc *VAR_3;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3->sc_iicbus != ((void*)0))
  FUNC_3(VAR_2, VAR_3->sc_iicbus);
 FUNC_5(&VAR_3->sc_mtx);
 if (VAR_3->sc_intrhand)
  FUNC_2(VAR_2, VAR_3->sc_irq_res, VAR_3->sc_intrhand);
 if (VAR_3->sc_irq_res)
  FUNC_1(VAR_2, VAR_0, 0, VAR_3->sc_irq_res);
 if (VAR_3->sc_mem_res)
  FUNC_1(VAR_2, VAR_1, 0, VAR_3->sc_mem_res);

 return (0);
}
