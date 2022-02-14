
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_iw_device {int spinlock; int cm_id_list; } ;
struct rds_iw_cm_id {int list; struct rdma_cm_id* cm_id; } ;
struct rdma_cm_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rds_iw_cm_id* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct rds_iw_device *VAR_2, struct rdma_cm_id *VAR_3)
{
 struct rds_iw_cm_id *VAR_4;

 VAR_4 = FUNC_0(sizeof *VAR_4, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->cm_id = VAR_3;

 FUNC_2(&VAR_2->spinlock);
 FUNC_1(&VAR_4->list, &VAR_2->cm_id_list);
 FUNC_3(&VAR_2->spinlock);

 return 0;
}
