
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fc; } ;
struct sbp_softc {TYPE_2__ fd; int dmat; } ;
struct sbp_dev {int dma; TYPE_1__* ocb; int login_callout; TYPE_3__* target; } ;
struct TYPE_6__ {struct sbp_softc* sbp; } ;
struct TYPE_4__ {int dmamap; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbp_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct sbp_softc*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sbp_dev*,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct sbp_dev *VAR_2)
{
 struct sbp_softc *VAR_3;
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return;
 VAR_3 = VAR_2->target->sbp;
 FUNC_1(VAR_3);
 FUNC_3(&VAR_2->login_callout);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_3(&VAR_2->ocb[VAR_4].timer);
  FUNC_2(VAR_3->dmat, VAR_2->ocb[VAR_4].dmamap);
 }
 FUNC_5(VAR_3->fd.fc, &VAR_2->dma);
 FUNC_4(VAR_2, VAR_0);
 FUNC_0(VAR_3);
}
