
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_pd {struct ibv_context* context; int handle; } ;
struct ibv_context {int cmd_fd; } ;
struct ibv_alloc_pd_resp {int pd_handle; } ;
struct ibv_alloc_pd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_alloc_pd*,size_t,int ,struct ibv_alloc_pd_resp*,size_t) ;
 int FUNC_1 (struct ibv_alloc_pd_resp*,size_t) ;
 int VAR_1 ;
 size_t FUNC_2 (int ,struct ibv_alloc_pd*,size_t) ;

int FUNC_3(struct ibv_context *VAR_2, struct ibv_pd *VAR_3,
       struct ibv_alloc_pd *VAR_4, size_t VAR_5,
       struct ibv_alloc_pd_resp *VAR_6, size_t VAR_7)
{
 FUNC_0(VAR_4, VAR_5, VAR_0, VAR_6, VAR_7);

 if (FUNC_2(VAR_2->cmd_fd, VAR_4, VAR_5) != VAR_5)
  return VAR_1;

 (void) FUNC_1(VAR_6, VAR_7);

 VAR_3->handle = VAR_6->pd_handle;
 VAR_3->context = VAR_2;

 return 0;
}
