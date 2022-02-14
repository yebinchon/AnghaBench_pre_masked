
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct oce_mq {scalar_t__ qstate; int * cq; int mq_id; int * ring; int parent; } ;
struct oce_mbx {int payload; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
struct mbx_destroy_common_mq {TYPE_2__ params; } ;
typedef int POCE_SOFTC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct oce_mbx*,int) ;
 int FUNC_1 (struct oce_mq*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,struct oce_mbx*,int,int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct oce_mq *VAR_4)
{
 POCE_SOFTC VAR_5 = (POCE_SOFTC) VAR_4->parent;
 struct oce_mbx VAR_6;
 struct mbx_destroy_common_mq *VAR_7;

 if (!VAR_4)
  return;

 if (VAR_4->ring != ((void*)0)) {
  FUNC_4(VAR_5, VAR_4->ring);
  VAR_4->ring = ((void*)0);
  if (VAR_4->qstate == VAR_1) {
   FUNC_0(&VAR_6, sizeof (struct oce_mbx));
   VAR_7 = (struct mbx_destroy_common_mq *)&VAR_6.payload;
   VAR_7->params.req.id = VAR_4->mq_id;
   (void) FUNC_3(VAR_5, &VAR_6,
    sizeof (struct mbx_destroy_common_mq),
    VAR_3, 0);
  }
  VAR_4->qstate = VAR_2;
 }

 if (VAR_4->cq != ((void*)0)) {
  FUNC_2(VAR_5, VAR_4->cq);
  VAR_4->cq = ((void*)0);
 }

 FUNC_1(VAR_4, VAR_0);
 VAR_4 = ((void*)0);
}
