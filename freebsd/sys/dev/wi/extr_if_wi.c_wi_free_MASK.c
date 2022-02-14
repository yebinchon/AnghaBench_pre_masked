
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wi_softc {int * mem; int mem_rid; int * irq; int irq_rid; int * iobase; int iobase_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct wi_softc* FUNC_1 (int ) ;

void
FUNC_2(device_t VAR_3)
{
 struct wi_softc *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->iobase != ((void*)0)) {
  FUNC_0(VAR_3, VAR_0, VAR_4->iobase_rid, VAR_4->iobase);
  VAR_4->iobase = ((void*)0);
 }
 if (VAR_4->irq != ((void*)0)) {
  FUNC_0(VAR_3, VAR_1, VAR_4->irq_rid, VAR_4->irq);
  VAR_4->irq = ((void*)0);
 }
 if (VAR_4->mem != ((void*)0)) {
  FUNC_0(VAR_3, VAR_2, VAR_4->mem_rid, VAR_4->mem);
  VAR_4->mem = ((void*)0);
 }
}
