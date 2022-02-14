
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmx_softc {int mtx; int ch; int ih; void* irq; int irq_rid; void* ioport; int bsh; int bst; int ioport_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,void*,int ,int ,struct cmx_softc*,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 struct cmx_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int ,char*,int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;

int
FUNC_9(device_t VAR_8)
{
 struct cmx_softc *VAR_9 = FUNC_4(VAR_8);




 VAR_9->ioport = FUNC_0(VAR_8, VAR_5,
   &VAR_9->ioport_rid, VAR_4);
 if (!VAR_9->ioport) {
  FUNC_5(VAR_8, "failed to allocate io port\n");
  return VAR_0;
 }
 VAR_9->bst = FUNC_8(VAR_9->ioport);
 VAR_9->bsh = FUNC_7(VAR_9->ioport);
 FUNC_6(&VAR_9->mtx, FUNC_3(VAR_8),
   "cmx softc lock",
   VAR_2 | VAR_3);
 FUNC_2(&VAR_9->ch, &VAR_9->mtx, 0);

 return 0;
}
