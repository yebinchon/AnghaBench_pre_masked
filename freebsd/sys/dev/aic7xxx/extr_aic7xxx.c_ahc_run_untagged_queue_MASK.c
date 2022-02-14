
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scb_tailq {int dummy; } ;
struct scb {int flags; } ;
struct ahc_softc {scalar_t__ untagged_queue_lock; } ;


 int VAR_0 ;
 struct scb* FUNC_0 (struct scb_tailq*) ;
 int FUNC_1 (struct ahc_softc*,struct scb*) ;
 int FUNC_2 (struct scb*) ;

void
FUNC_3(struct ahc_softc *VAR_1, struct scb_tailq *VAR_2)
{
 struct scb *VAR_3;

 if (VAR_1->untagged_queue_lock != 0)
  return;

 if ((VAR_3 = FUNC_0(VAR_2)) != ((void*)0)
  && (VAR_3->flags & VAR_0) == 0) {
  VAR_3->flags |= VAR_0;



  FUNC_2(VAR_3);
  FUNC_1(VAR_1, VAR_3);
 }
}
