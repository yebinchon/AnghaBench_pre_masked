
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct oce_wq {scalar_t__ qstate; int * cq; int wq_id; int parent; } ;
struct oce_mbx {int payload; } ;
struct TYPE_3__ {int wq_id; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
struct mbx_delete_nic_wq {TYPE_2__ params; } ;
typedef int POCE_SOFTC ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct oce_mbx*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct oce_mbx*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct oce_wq *VAR_3)
{
 struct oce_mbx VAR_4;
 struct mbx_delete_nic_wq *VAR_5;
 POCE_SOFTC VAR_6 = (POCE_SOFTC) VAR_3->parent;

 if (VAR_3->qstate == VAR_0) {
  FUNC_0(&VAR_4, sizeof(struct oce_mbx));

  VAR_5 = (struct mbx_delete_nic_wq *)&VAR_4.payload;
  VAR_5->params.req.wq_id = VAR_3->wq_id;
  (void)FUNC_2(VAR_6, &VAR_4,
    sizeof(struct mbx_delete_nic_wq), VAR_2, 0);
  VAR_3->qstate = VAR_1;
 }

 if (VAR_3->cq != ((void*)0)) {
  FUNC_1(VAR_6, VAR_3->cq);
  VAR_3->cq = ((void*)0);
 }
}
