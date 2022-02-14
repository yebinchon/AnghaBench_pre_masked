
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glxsb_softc {int sc_task_mtx; int sc_tq; int sc_sr; int sc_rid; int sc_dma; int sc_cryptotask; int sc_rngco; int sc_cid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct glxsb_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct glxsb_softc*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_1)
{
 struct glxsb_softc *VAR_2 = FUNC_4(VAR_1);

 FUNC_3(VAR_2->sc_cid);

 FUNC_2(&VAR_2->sc_rngco);
 FUNC_7(VAR_2->sc_tq, &VAR_2->sc_cryptotask);
 FUNC_0(VAR_1);
 FUNC_5(VAR_2, &VAR_2->sc_dma);
 FUNC_1(VAR_1, VAR_0, VAR_2->sc_rid, VAR_2->sc_sr);
 FUNC_8(VAR_2->sc_tq);
 FUNC_6(&VAR_2->sc_task_mtx);
 return (0);
}
