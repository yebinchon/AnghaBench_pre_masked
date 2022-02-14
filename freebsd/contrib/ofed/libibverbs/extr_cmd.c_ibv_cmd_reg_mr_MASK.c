
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ibv_reg_mr_resp {int rkey; int lkey; int mr_handle; } ;
struct ibv_reg_mr {uintptr_t start; size_t length; int access_flags; int pd_handle; int hca_va; } ;
struct ibv_pd {TYPE_1__* context; int handle; } ;
struct ibv_mr {TYPE_1__* context; int rkey; int lkey; int handle; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int FUNC_0 (struct ibv_reg_mr*,size_t,int ,struct ibv_reg_mr_resp*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct ibv_reg_mr_resp*,size_t) ;
 int VAR_1 ;
 size_t FUNC_2 (int ,struct ibv_reg_mr*,size_t) ;

int FUNC_3(struct ibv_pd *VAR_2, void *VAR_3, size_t VAR_4,
     uint64_t VAR_5, int VAR_6,
     struct ibv_mr *VAR_7, struct ibv_reg_mr *VAR_8,
     size_t VAR_9,
     struct ibv_reg_mr_resp *VAR_10, size_t VAR_11)
{

 FUNC_0(VAR_8, VAR_9, VAR_0, VAR_10, VAR_11);

 VAR_8->start = (uintptr_t) VAR_3;
 VAR_8->length = VAR_4;
 VAR_8->hca_va = VAR_5;
 VAR_8->pd_handle = VAR_2->handle;
 VAR_8->access_flags = VAR_6;

 if (FUNC_2(VAR_2->context->cmd_fd, VAR_8, VAR_9) != VAR_9)
  return VAR_1;

 (void) FUNC_1(VAR_10, VAR_11);

 VAR_7->handle = VAR_10->mr_handle;
 VAR_7->lkey = VAR_10->lkey;
 VAR_7->rkey = VAR_10->rkey;
 VAR_7->context = VAR_2->context;

 return 0;
}
