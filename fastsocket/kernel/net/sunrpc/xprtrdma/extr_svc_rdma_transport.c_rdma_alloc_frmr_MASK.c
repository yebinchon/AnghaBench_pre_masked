
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svcxprt_rdma {TYPE_1__* sc_cm_id; int sc_pd; } ;
struct svc_rdma_fastreg_mr {int frmr_list; struct ib_mr* page_list; struct ib_mr* mr; } ;
struct ib_mr {int dummy; } ;
typedef struct ib_mr ib_fast_reg_page_list ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 struct svc_rdma_fastreg_mr* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ib_mr*) ;
 int VAR_2 ;
 struct ib_mr* FUNC_3 (int ,int ) ;
 struct ib_mr* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ib_mr*) ;
 int FUNC_6 (struct svc_rdma_fastreg_mr*) ;
 struct svc_rdma_fastreg_mr* FUNC_7 (int,int ) ;

__attribute__((used)) static struct svc_rdma_fastreg_mr *FUNC_8(struct svcxprt_rdma *VAR_3)
{
 struct ib_mr *VAR_4;
 struct ib_fast_reg_page_list *VAR_5;
 struct svc_rdma_fastreg_mr *VAR_6;

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  goto err;

 VAR_4 = FUNC_3(VAR_3->sc_pd, VAR_2);
 if (FUNC_2(VAR_4))
  goto err_free_frmr;

 VAR_5 = FUNC_4(VAR_3->sc_cm_id->device,
      VAR_2);
 if (FUNC_2(VAR_5))
  goto err_free_mr;

 VAR_6->mr = VAR_4;
 VAR_6->page_list = VAR_5;
 FUNC_1(&VAR_6->frmr_list);
 return VAR_6;

 err_free_mr:
 FUNC_5(VAR_4);
 err_free_frmr:
 FUNC_6(VAR_6);
 err:
 return FUNC_0(-VAR_0);
}
