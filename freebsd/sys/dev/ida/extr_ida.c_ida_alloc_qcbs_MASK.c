
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ida_softc {int free_qcbs; TYPE_2__* hwqcbs; int buffer_dmat; struct ida_qcb* qcbs; } ;
struct ida_qcb {TYPE_2__* hwqcb; int hwqcb_busaddr; int flags; struct ida_softc* ida; int dmamap; } ;
struct TYPE_4__ {struct ida_qcb* qcb; } ;
struct TYPE_3__ {int sle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ida_qcb*,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct ida_softc*,TYPE_2__*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct ida_softc *VAR_3)
{
 struct ida_qcb *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = &VAR_3->qcbs[VAR_6];

  VAR_5 = FUNC_1(VAR_3->buffer_dmat, 0, &VAR_4->dmamap);
  if (VAR_5 != 0)
   return (VAR_5);

  VAR_4->ida = VAR_3;
  VAR_4->flags = VAR_1;
  VAR_4->hwqcb = &VAR_3->hwqcbs[VAR_6];
  VAR_4->hwqcb->qcb = VAR_4;
  VAR_4->hwqcb_busaddr = FUNC_2(VAR_3, VAR_4->hwqcb);
  FUNC_0(&VAR_3->free_qcbs, VAR_4, VAR_2.sle);
 }
 return (0);
}
