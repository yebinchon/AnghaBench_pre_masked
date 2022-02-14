
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_create_comp_channel_resp {int fd; } ;
struct ibv_create_comp_channel {int dummy; } ;
struct ibv_context {int cmd_fd; } ;
struct ibv_comp_channel {scalar_t__ refcnt; int fd; struct ibv_context* context; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_create_comp_channel*,int,int ,struct ibv_create_comp_channel_resp*,int) ;
 int FUNC_1 (struct ibv_create_comp_channel_resp*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct ibv_comp_channel*) ;
 struct ibv_comp_channel* FUNC_3 (struct ibv_context*) ;
 struct ibv_comp_channel* FUNC_4 (int) ;
 int FUNC_5 (int ,struct ibv_create_comp_channel*,int) ;

struct ibv_comp_channel *FUNC_6(struct ibv_context *VAR_2)
{
 struct ibv_comp_channel *VAR_3;
 struct ibv_create_comp_channel VAR_4;
 struct ibv_create_comp_channel_resp VAR_5;

 if (VAR_1 <= 2)
  return FUNC_3(VAR_2);

 VAR_3 = FUNC_4(sizeof *VAR_3);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_4, sizeof VAR_4, VAR_0, &VAR_5, sizeof VAR_5);
 if (FUNC_5(VAR_2->cmd_fd, &VAR_4, sizeof VAR_4) != sizeof VAR_4) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 (void) FUNC_1(&VAR_5, sizeof VAR_5);

 VAR_3->context = VAR_2;
 VAR_3->fd = VAR_5.fd;
 VAR_3->refcnt = 0;

 return VAR_3;
}
