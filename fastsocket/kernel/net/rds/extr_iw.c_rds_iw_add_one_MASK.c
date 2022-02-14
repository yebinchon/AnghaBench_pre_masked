
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_iw_device {int dma_local_lkey; int device_cap_flags; int * pd; int * mr; int list; int conn_list; int cm_id_list; int * mr_pool; struct ib_device* dev; int max_sge; int max_qp_wr; int max_wrs; int spinlock; } ;
struct ib_device_attr {int dma_local_lkey; int device_cap_flags; int * pd; int * mr; int list; int conn_list; int cm_id_list; int * mr_pool; struct ib_device* dev; int max_sge; int max_qp_wr; int max_wrs; int spinlock; } ;
struct ib_device {scalar_t__ node_type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (struct ib_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (struct ib_device*,struct rds_iw_device*) ;
 int FUNC_7 (struct ib_device*,int *,struct rds_iw_device*) ;
 int FUNC_8 (struct rds_iw_device*) ;
 struct rds_iw_device* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,int ) ;
 int VAR_7 ;
 int * FUNC_12 (struct rds_iw_device*) ;
 int VAR_8 ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct ib_device *VAR_9)
{
 struct rds_iw_device *VAR_10;
 struct ib_device_attr *VAR_11;


 if (VAR_9->node_type != VAR_5)
  return;

 VAR_11 = FUNC_9(sizeof *VAR_11, VAR_0);
 if (!VAR_11)
  return;

 if (FUNC_6(VAR_9, VAR_11)) {
  FUNC_13("Query device failed for %s\n", VAR_9->name);
  goto free_attr;
 }

 VAR_10 = FUNC_9(sizeof *VAR_10, VAR_0);
 if (!VAR_10)
  goto free_attr;

 FUNC_14(&VAR_10->spinlock);

 VAR_10->dma_local_lkey = !!(VAR_11->device_cap_flags & VAR_4);
 VAR_10->max_wrs = VAR_11->max_qp_wr;
 VAR_10->max_sge = FUNC_11(VAR_11->max_sge, VAR_6);

 VAR_10->dev = VAR_9;
 VAR_10->pd = FUNC_2(VAR_9);
 if (FUNC_1(VAR_10->pd))
  goto free_dev;

 if (!VAR_10->dma_local_lkey) {
  VAR_10->mr = FUNC_5(VAR_10->pd,
     VAR_2 |
     VAR_3 |
     VAR_1);
  if (FUNC_1(VAR_10->mr))
   goto err_pd;
 } else
  VAR_10->mr = ((void*)0);

 VAR_10->mr_pool = FUNC_12(VAR_10);
 if (FUNC_1(VAR_10->mr_pool)) {
  VAR_10->mr_pool = ((void*)0);
  goto err_mr;
 }

 FUNC_0(&VAR_10->cm_id_list);
 FUNC_0(&VAR_10->conn_list);
 FUNC_10(&VAR_10->list, &VAR_8);

 FUNC_7(VAR_9, &VAR_7, VAR_10);

 goto free_attr;

err_mr:
 if (VAR_10->mr)
  FUNC_4(VAR_10->mr);
err_pd:
 FUNC_3(VAR_10->pd);
free_dev:
 FUNC_8(VAR_10);
free_attr:
 FUNC_8(VAR_11);
}
