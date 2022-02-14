
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mxge_slice_state {int if_drv_flags; } ;
struct TYPE_7__ {int num_slices; int down_cnt; int intr_coal_delay; int dev; TYPE_1__* ifp; struct mxge_slice_state* ss; } ;
typedef TYPE_2__ mxge_softc_t ;
typedef int mxge_cmd_t ;
struct TYPE_6__ {int if_drv_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(mxge_softc_t *VAR_2, int VAR_3)
{
 mxge_cmd_t VAR_4;
 int VAR_5, VAR_6;
 VAR_2->ifp->if_drv_flags &= ~VAR_0;
 if (!VAR_3) {
  VAR_6 = VAR_2->down_cnt;
  FUNC_4();
  VAR_5 = FUNC_3(VAR_2, VAR_1, &VAR_4);
  if (VAR_5) {
   FUNC_1(VAR_2->dev,
          "Couldn't bring down link\n");
  }
  if (VAR_6 == VAR_2->down_cnt) {

   FUNC_0(10 * VAR_2->intr_coal_delay);
  }
  FUNC_4();
  if (VAR_6 == VAR_2->down_cnt) {
   FUNC_1(VAR_2->dev, "never got down irq\n");
  }
 }
 FUNC_2(VAR_2);

 return 0;
}
