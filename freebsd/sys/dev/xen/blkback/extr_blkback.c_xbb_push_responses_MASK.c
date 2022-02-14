
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rsp_prod_pvt; scalar_t__ req_cons; } ;
struct TYPE_5__ {TYPE_2__ common; } ;
struct xbb_softc {scalar_t__ reqs_queued_for_completion; int reqs_completed; TYPE_1__ rings; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct xbb_softc *VAR_1, int *VAR_2, int *VAR_3)
{
 int VAR_4;




 FUNC_3(&VAR_1->lock, VAR_0);

 VAR_4 = 0;

 FUNC_2(&VAR_1->rings.common, *VAR_3);

 if (VAR_1->rings.common.rsp_prod_pvt == VAR_1->rings.common.req_cons) {






  FUNC_0(&VAR_1->rings.common, VAR_4);
 } else if (FUNC_1(&VAR_1->rings.common)) {

  VAR_4 = 1;
 }

 VAR_1->reqs_completed += VAR_1->reqs_queued_for_completion;
 VAR_1->reqs_queued_for_completion = 0;

 *VAR_2 = VAR_4;
}
