
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xbb_xen_req {int operation; int id; } ;
struct TYPE_6__ {int rsp_prod_pvt; } ;
struct TYPE_9__ {int rsp_prod_pvt; } ;
struct TYPE_7__ {TYPE_1__ common; TYPE_5__ x86_64; TYPE_5__ x86_32; TYPE_5__ native; } ;
struct xbb_softc {int abi; int reqs_queued_for_completion; TYPE_2__ rings; int reqs_completed_with_error; int lock; } ;
struct TYPE_8__ {int status; int operation; int id; } ;
typedef TYPE_3__ blkif_response_t ;





 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct xbb_softc *VAR_2, struct xbb_xen_req *VAR_3, int VAR_4)
{
 blkif_response_t *VAR_5;
 FUNC_1(&VAR_2->lock, VAR_1);






 switch (VAR_2->abi) {
 case 130:
  VAR_5 = FUNC_0(&VAR_2->rings.native,
      VAR_2->rings.native.rsp_prod_pvt);
  break;
 case 129:
  VAR_5 = (blkif_response_t *)
      FUNC_0(&VAR_2->rings.x86_32,
          VAR_2->rings.x86_32.rsp_prod_pvt);
  break;
 case 128:
  VAR_5 = (blkif_response_t *)
      FUNC_0(&VAR_2->rings.x86_64,
          VAR_2->rings.x86_64.rsp_prod_pvt);
  break;
 default:
  FUNC_2("Unexpected blkif protocol ABI.");
 }

 VAR_5->id = VAR_3->id;
 VAR_5->operation = VAR_3->operation;
 VAR_5->status = VAR_4;

 if (VAR_4 != VAR_0)
  VAR_2->reqs_completed_with_error++;

 VAR_2->rings.common.rsp_prod_pvt++;

 VAR_2->reqs_queued_for_completion++;

}
