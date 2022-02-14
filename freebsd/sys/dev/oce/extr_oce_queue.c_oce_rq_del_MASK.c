
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct oce_rq {scalar_t__ qstate; int * cq; int rq_id; int islro; int parent; } ;
struct oce_mbx {int payload; } ;
struct TYPE_7__ {int rq_flags; int rq_id; } ;
struct TYPE_8__ {TYPE_3__ req; } ;
struct mbx_delete_nic_rq_v1 {TYPE_4__ params; } ;
struct TYPE_5__ {int rq_id; } ;
struct TYPE_6__ {TYPE_1__ req; } ;
struct mbx_delete_nic_rq {TYPE_2__ params; } ;
typedef int mbx ;
typedef int POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct oce_mbx*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct oce_mbx*,int,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct oce_rq *VAR_5)
{
 POCE_SOFTC VAR_6 = (POCE_SOFTC) VAR_5->parent;
 struct oce_mbx VAR_7;
 struct mbx_delete_nic_rq *VAR_8;
 struct mbx_delete_nic_rq_v1 *VAR_9;

 if (VAR_5->qstate == VAR_2) {
  FUNC_0(&VAR_7, sizeof(VAR_7));
  if(!VAR_5->islro) {
   VAR_8 = (struct mbx_delete_nic_rq *)&VAR_7.payload;
   VAR_8->params.req.rq_id = VAR_5->rq_id;
   (void)FUNC_2(VAR_6, &VAR_7, sizeof(struct mbx_delete_nic_rq), VAR_4, 0);
  }else {
   VAR_9 = (struct mbx_delete_nic_rq_v1 *)&VAR_7.payload;
   VAR_9->params.req.rq_id = VAR_5->rq_id;
   VAR_9->params.req.rq_flags = (VAR_1 | VAR_0);
   (void)FUNC_2(VAR_6, &VAR_7, sizeof(struct mbx_delete_nic_rq_v1), VAR_4, 1);
  }
  VAR_5->qstate = VAR_3;
 }

 if (VAR_5->cq != ((void*)0)) {
  FUNC_1(VAR_6, VAR_5->cq);
  VAR_5->cq = ((void*)0);
 }
}
