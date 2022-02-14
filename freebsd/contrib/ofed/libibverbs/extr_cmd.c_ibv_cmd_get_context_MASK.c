
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_get_context_resp {int num_comp_vectors; int async_fd; } ;
struct ibv_get_context {int dummy; } ;
struct ibv_context {int num_comp_vectors; int async_fd; int cmd_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibv_get_context*,size_t,int ,struct ibv_get_context_resp*,size_t) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ibv_get_context_resp*,size_t) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (int ,struct ibv_get_context*,size_t) ;

int FUNC_3(struct ibv_context *VAR_5, struct ibv_get_context *VAR_6,
   size_t VAR_7, struct ibv_get_context_resp *VAR_8,
   size_t VAR_9)
{
 if (VAR_3 < VAR_2)
  return VAR_0;

 FUNC_0(VAR_6, VAR_7, VAR_1, VAR_8, VAR_9);

 if (FUNC_2(VAR_5->cmd_fd, VAR_6, VAR_7) != VAR_7)
  return VAR_4;

 (void) FUNC_1(VAR_8, VAR_9);

 VAR_5->async_fd = VAR_8->async_fd;
 VAR_5->num_comp_vectors = VAR_8->num_comp_vectors;

 return 0;
}
