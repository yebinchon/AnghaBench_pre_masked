
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct oce_mbx {int payload; } ;
struct oce_cq {int * ring; int cq_id; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {TYPE_2__ req; } ;
struct mbx_destroy_common_cq {TYPE_1__ params; } ;
typedef int POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oce_mbx*,int) ;
 int FUNC_1 (struct oce_cq*,int ) ;
 int FUNC_2 (int ,struct oce_mbx*,int,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(POCE_SOFTC VAR_2, struct oce_cq *VAR_3)
{
 struct oce_mbx VAR_4;
 struct mbx_destroy_common_cq *VAR_5;

 if (VAR_3->ring != ((void*)0)) {

  FUNC_0(&VAR_4, sizeof(struct oce_mbx));

  VAR_5 = (struct mbx_destroy_common_cq *)&VAR_4.payload;
  VAR_5->params.req.id = VAR_3->cq_id;
  (void)FUNC_2(VAR_2, &VAR_4,
   sizeof(struct mbx_destroy_common_cq), VAR_1, 0);

  FUNC_3(VAR_2, VAR_3->ring);
  VAR_3->ring = ((void*)0);
 }

 FUNC_1(VAR_3, VAR_0);
 VAR_3 = ((void*)0);
}
