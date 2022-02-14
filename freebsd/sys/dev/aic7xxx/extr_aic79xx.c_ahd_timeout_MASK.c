
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scb {int flags; struct ahd_softc* ahd_softc; } ;
struct ahd_softc {int timedout_scbs; } ;


 int FUNC_0 (int *,struct scb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ahd_softc*) ;
 int VAR_2 ;

void
FUNC_2(struct scb *VAR_3)
{
 struct ahd_softc *VAR_4;

 VAR_4 = VAR_3->ahd_softc;
 if ((VAR_3->flags & VAR_0) != 0) {
  if ((VAR_3->flags & VAR_1) == 0) {
   FUNC_0(&VAR_4->timedout_scbs, VAR_3,
      VAR_2);
   VAR_3->flags |= VAR_1;
  }
  FUNC_1(VAR_4);
 }
}
