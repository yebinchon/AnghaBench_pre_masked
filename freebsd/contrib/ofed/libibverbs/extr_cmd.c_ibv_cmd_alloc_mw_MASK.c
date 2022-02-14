
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_pd {TYPE_1__* context; int handle; } ;
struct ibv_mw {int type; int handle; int rkey; struct ibv_pd* pd; TYPE_1__* context; } ;
struct ibv_alloc_mw_resp {int mw_handle; int rkey; } ;
struct ibv_alloc_mw {int mw_type; int reserved; int pd_handle; } ;
typedef enum ibv_mw_type { ____Placeholder_ibv_mw_type } ibv_mw_type ;
struct TYPE_2__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_alloc_mw*,size_t,int ,struct ibv_alloc_mw_resp*,size_t) ;
 int FUNC_1 (struct ibv_alloc_mw_resp*,size_t) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 size_t FUNC_3 (int ,struct ibv_alloc_mw*,size_t) ;

int FUNC_4(struct ibv_pd *VAR_2, enum ibv_mw_type VAR_3,
       struct ibv_mw *VAR_4, struct ibv_alloc_mw *VAR_5,
       size_t VAR_6,
       struct ibv_alloc_mw_resp *VAR_7, size_t VAR_8)
{
 FUNC_0(VAR_5, VAR_6, VAR_0, VAR_7, VAR_8);
 VAR_5->pd_handle = VAR_2->handle;
 VAR_5->mw_type = VAR_3;
 FUNC_2(VAR_5->reserved, 0, sizeof(VAR_5->reserved));

 if (FUNC_3(VAR_2->context->cmd_fd, VAR_5, VAR_6) != VAR_6)
  return VAR_1;

 (void) FUNC_1(VAR_7, VAR_8);

 VAR_4->context = VAR_2->context;
 VAR_4->pd = VAR_2;
 VAR_4->rkey = VAR_7->rkey;
 VAR_4->handle = VAR_7->mw_handle;
 VAR_4->type = VAR_3;

 return 0;
}
