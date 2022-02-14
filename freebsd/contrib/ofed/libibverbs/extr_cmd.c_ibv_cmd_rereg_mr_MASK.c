
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ibv_rereg_mr_resp {int rkey; int lkey; } ;
struct ibv_rereg_mr {int flags; uintptr_t start; size_t length; int access_flags; int pd_handle; int hca_va; int mr_handle; } ;
struct ibv_pd {TYPE_1__* context; int handle; } ;
struct ibv_mr {TYPE_1__* context; int rkey; int lkey; int handle; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int FUNC_0 (struct ibv_rereg_mr*,size_t,int ,struct ibv_rereg_mr_resp*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ibv_rereg_mr_resp*,size_t) ;
 int VAR_2 ;
 size_t FUNC_2 (int ,struct ibv_rereg_mr*,size_t) ;

int FUNC_3(struct ibv_mr *VAR_3, uint32_t VAR_4, void *VAR_5,
       size_t VAR_6, uint64_t VAR_7, int VAR_8,
       struct ibv_pd *VAR_9, struct ibv_rereg_mr *VAR_10,
       size_t VAR_11, struct ibv_rereg_mr_resp *VAR_12,
       size_t VAR_13)
{
 FUNC_0(VAR_10, VAR_11, VAR_1, VAR_12, VAR_13);

 VAR_10->mr_handle = VAR_3->handle;
 VAR_10->flags = VAR_4;
 VAR_10->start = (uintptr_t)VAR_5;
 VAR_10->length = VAR_6;
 VAR_10->hca_va = VAR_7;
 VAR_10->pd_handle = (VAR_4 & VAR_0) ? VAR_9->handle : 0;
 VAR_10->access_flags = VAR_8;

 if (FUNC_2(VAR_3->context->cmd_fd, VAR_10, VAR_11) != VAR_11)
  return VAR_2;

 (void)FUNC_1(VAR_12, VAR_13);

 VAR_3->lkey = VAR_12->lkey;
 VAR_3->rkey = VAR_12->rkey;
 if (VAR_4 & VAR_0)
  VAR_3->context = VAR_9->context;

 return 0;
}
