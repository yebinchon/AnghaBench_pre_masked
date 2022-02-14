
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_create_cq_resp {int cqe; int cq_handle; } ;
struct ibv_create_cq {uintptr_t user_handle; int cqe; int comp_vector; int comp_channel; scalar_t__ reserved; } ;
struct ibv_cq {struct ibv_context* context; int cqe; int handle; } ;
struct ibv_context {int cmd_fd; } ;
struct ibv_comp_channel {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_create_cq*,size_t,int ,struct ibv_create_cq_resp*,size_t) ;
 int FUNC_1 (struct ibv_create_cq_resp*,size_t) ;
 int VAR_1 ;
 size_t FUNC_2 (int ,struct ibv_create_cq*,size_t) ;

int FUNC_3(struct ibv_context *VAR_2, int VAR_3,
        struct ibv_comp_channel *VAR_4,
        int VAR_5, struct ibv_cq *VAR_6,
        struct ibv_create_cq *VAR_7, size_t VAR_8,
        struct ibv_create_cq_resp *VAR_9, size_t VAR_10)
{
 FUNC_0(VAR_7, VAR_8, VAR_0, VAR_9, VAR_10);
 VAR_7->user_handle = (uintptr_t) VAR_6;
 VAR_7->cqe = VAR_3;
 VAR_7->comp_vector = VAR_5;
 VAR_7->comp_channel = VAR_4 ? VAR_4->fd : -1;
 VAR_7->reserved = 0;

 if (FUNC_2(VAR_2->cmd_fd, VAR_7, VAR_8) != VAR_8)
  return VAR_1;

 (void) FUNC_1(VAR_9, VAR_10);

 VAR_6->handle = VAR_9->cq_handle;
 VAR_6->cqe = VAR_9->cqe;
 VAR_6->context = VAR_2;

 return 0;
}
