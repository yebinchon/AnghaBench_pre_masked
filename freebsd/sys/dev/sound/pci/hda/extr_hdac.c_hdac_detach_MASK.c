
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct hdac_softc {int num_ss; int lock; int * chan_dmat; int corb_dma; int rirb_dma; int pos_dma; TYPE_2__* streams; int unsolq_task; TYPE_1__* codecs; } ;
struct TYPE_12__ {int bdl; } ;
typedef TYPE_2__ device_t ;
struct TYPE_11__ {int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__,TYPE_2__) ;
 int FUNC_2 (TYPE_2__,TYPE_2__**,int*) ;
 scalar_t__ FUNC_3 (TYPE_2__) ;
 struct hdac_softc* FUNC_4 (TYPE_2__) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct hdac_softc*,int *) ;
 int FUNC_7 (struct hdac_softc*) ;
 int FUNC_8 (struct hdac_softc*) ;
 int FUNC_9 (struct hdac_softc*) ;
 int FUNC_10 (struct hdac_softc*,int ) ;
 int FUNC_11 (struct hdac_softc*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_3)
{
 struct hdac_softc *VAR_4 = FUNC_4(VAR_3);
 device_t *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if ((VAR_9 = FUNC_2(VAR_3, &VAR_5, &VAR_8)) != 0)
  return (VAR_9);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = (intptr_t)FUNC_3(VAR_5[VAR_7]);
  if ((VAR_9 = FUNC_1(VAR_3, VAR_5[VAR_7])) != 0) {
   FUNC_5(VAR_5, VAR_1);
   return (VAR_9);
  }
  VAR_4->codecs[VAR_6].dev = ((void*)0);
 }
 FUNC_5(VAR_5, VAR_1);

 FUNC_8(VAR_4);
 FUNC_10(VAR_4, 0);
 FUNC_11(VAR_4);
 FUNC_13(VAR_2, &VAR_4->unsolq_task);
 FUNC_7(VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_4->num_ss; VAR_7++)
  FUNC_6(VAR_4, &VAR_4->streams[VAR_7].bdl);
 FUNC_5(VAR_4->streams, VAR_0);
 FUNC_6(VAR_4, &VAR_4->pos_dma);
 FUNC_6(VAR_4, &VAR_4->rirb_dma);
 FUNC_6(VAR_4, &VAR_4->corb_dma);
 if (VAR_4->chan_dmat != ((void*)0)) {
  FUNC_0(VAR_4->chan_dmat);
  VAR_4->chan_dmat = ((void*)0);
 }
 FUNC_9(VAR_4);
 FUNC_12(VAR_4->lock);
 return (0);
}
