
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bktr_softc {int res_mem; int mem_rid; int res_irq; int irq_rid; int res_ih; int bktrdev; int tunerdev; int vbidev; int vbimutex; int * msp3400c_info; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bktr_softc*,int ,int ) ;
 int FUNC_1 (struct bktr_softc*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 struct bktr_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct bktr_softc*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static int
FUNC_11( device_t VAR_6 )
{
 struct bktr_softc *VAR_7 = FUNC_6(VAR_6);
 FUNC_0(VAR_7, VAR_2, VAR_0);
 FUNC_1(VAR_7, VAR_1, VAR_3);
 FUNC_5(VAR_7->vbidev);
 FUNC_5(VAR_7->tunerdev);
 FUNC_5(VAR_7->bktrdev);




 FUNC_4(VAR_6, VAR_7->res_irq, VAR_7->res_ih);
 FUNC_3(VAR_6, VAR_4, VAR_7->irq_rid, VAR_7->res_irq);
 FUNC_3(VAR_6, VAR_5, VAR_7->mem_rid, VAR_7->res_mem);

 return 0;
}
