
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmx_softc {int * ioport; int ioport_rid; int * irq; int irq_rid; int * ih; int mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 struct cmx_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(device_t VAR_2)
{
 struct cmx_softc *VAR_3 = FUNC_3(VAR_2);

 FUNC_4(&VAR_3->mtx);
 if (VAR_3->ioport) {
  FUNC_0(VAR_2, VAR_0,
    VAR_3->ioport_rid, VAR_3->ioport);
  FUNC_1(VAR_2, VAR_0,
    VAR_3->ioport_rid, VAR_3->ioport);
  VAR_3->ioport = ((void*)0);
 }
 return;
}
