
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_rwq_ind_table {TYPE_1__* context; int ind_tbl_handle; } ;
struct ibv_destroy_rwq_ind_table {int ind_tbl_handle; } ;
typedef int cmd ;
struct TYPE_2__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_destroy_rwq_ind_table*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct ibv_destroy_rwq_ind_table*,int ,int) ;
 int FUNC_2 (int ,struct ibv_destroy_rwq_ind_table*,int) ;

int FUNC_3(struct ibv_rwq_ind_table *VAR_2)
{
 struct ibv_destroy_rwq_ind_table VAR_3;
 int VAR_4 = 0;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 FUNC_0(&VAR_3, sizeof(VAR_3), VAR_0);
 VAR_3.ind_tbl_handle = VAR_2->ind_tbl_handle;

 if (FUNC_2(VAR_2->context->cmd_fd, &VAR_3, sizeof(VAR_3)) != sizeof(VAR_3))
  VAR_4 = VAR_1;

 return VAR_4;
}
