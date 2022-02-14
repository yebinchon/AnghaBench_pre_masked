
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scb {int flags; struct scb* col_scb; TYPE_1__* hscb; } ;
struct TYPE_5__ {int any_dev_free_scb_list; int ** scbindex; } ;
struct ahd_softc {TYPE_2__ scb_data; } ;
struct TYPE_6__ {int le; } ;
struct TYPE_4__ {int control; } ;


 int FUNC_0 (struct ahd_softc*,struct scb*) ;
 int FUNC_1 (int *,struct scb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (struct scb*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ahd_softc*,struct scb*,int ) ;
 int FUNC_4 (struct ahd_softc*,struct scb*) ;
 int FUNC_5 (struct ahd_softc*,struct scb*) ;
 TYPE_3__ VAR_5 ;

void
FUNC_6(struct ahd_softc *VAR_6, struct scb *VAR_7)
{


 VAR_7->flags = VAR_1;
 VAR_7->hscb->control = 0;
 VAR_6->scb_data.scbindex[FUNC_2(VAR_7)] = ((void*)0);

 if (VAR_7->col_scb == ((void*)0)) {




  FUNC_1(&VAR_6->scb_data.any_dev_free_scb_list,
     VAR_7, VAR_5.le);
 } else if ((VAR_7->col_scb->flags & VAR_2) != 0) {






  FUNC_4(VAR_6, VAR_7->col_scb);
  FUNC_1(&VAR_6->scb_data.any_dev_free_scb_list,
     VAR_7, VAR_5.le);
  FUNC_1(&VAR_6->scb_data.any_dev_free_scb_list,
     VAR_7->col_scb, VAR_5.le);
 } else if ((VAR_7->col_scb->flags
    & (VAR_3|VAR_0)) == VAR_0
  && (VAR_7->col_scb->hscb->control & VAR_4) != 0) {






  FUNC_3(VAR_6, VAR_7,
     FUNC_0(VAR_6, VAR_7->col_scb));
 } else {






  FUNC_1(&VAR_6->scb_data.any_dev_free_scb_list,
     VAR_7, VAR_5.le);
 }

 FUNC_5(VAR_6, VAR_7);
}
