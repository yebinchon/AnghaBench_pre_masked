
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scb {TYPE_1__* hscb; } ;
struct ahc_softc {scalar_t__* qinfifo; int features; int qinfifonext; } ;
struct TYPE_2__ {scalar_t__ tag; scalar_t__ next; int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ahc_softc*,int ,int ) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,struct scb*) ;
 int FUNC_3 (struct ahc_softc*,struct scb*,int) ;
 int FUNC_4 (struct ahc_softc*) ;
 int FUNC_5 (struct scb*) ;
 int FUNC_6 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static __inline void
FUNC_7(struct ahc_softc *VAR_9, struct scb *VAR_10)
{
 FUNC_2(VAR_9, VAR_10);

 if (VAR_10->hscb->tag == VAR_7
  || VAR_10->hscb->next == VAR_7)
  FUNC_6("Attempt to queue invalid SCB tag %x:%x\n",
        VAR_10->hscb->tag, VAR_10->hscb->next);




 VAR_10->hscb->lun &= VAR_6;
 if (FUNC_5(VAR_10) & 0x1)
  VAR_10->hscb->lun |= VAR_8;




 VAR_9->qinfifo[VAR_9->qinfifonext++] = VAR_10->hscb->tag;





 FUNC_3(VAR_9, VAR_10, VAR_2|VAR_3);


 if ((VAR_9->features & VAR_1) != 0) {
  FUNC_0(VAR_9, VAR_4, VAR_9->qinfifonext);
 } else {
  if ((VAR_9->features & VAR_0) == 0)
   FUNC_1(VAR_9);
  FUNC_0(VAR_9, VAR_5, VAR_9->qinfifonext);
  if ((VAR_9->features & VAR_0) == 0)
   FUNC_4(VAR_9);
 }
}
