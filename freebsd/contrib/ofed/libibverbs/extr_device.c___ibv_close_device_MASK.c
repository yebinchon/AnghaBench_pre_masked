
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct verbs_device {TYPE_1__* ops; } ;
struct verbs_context {struct verbs_context* priv; } ;
struct ibv_context {int async_fd; int cmd_fd; int device; } ;
struct TYPE_2__ {int (* free_context ) (struct ibv_context*) ;int (* uninit_context ) (struct verbs_device*,struct ibv_context*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct verbs_context*) ;
 int FUNC_2 (struct verbs_device*,struct ibv_context*) ;
 int FUNC_3 (struct ibv_context*) ;
 struct verbs_context* FUNC_4 (struct ibv_context*) ;
 struct verbs_device* FUNC_5 (int ) ;

int FUNC_6(struct ibv_context *VAR_1)
{
 int VAR_2 = VAR_1->async_fd;
 int VAR_3 = VAR_1->cmd_fd;
 int VAR_4 = -1;
 struct verbs_context *VAR_5;
 struct verbs_device *VAR_6 = FUNC_5(VAR_1->device);

 VAR_5 = FUNC_4(VAR_1);
 if (VAR_5) {
  VAR_6->ops->uninit_context(VAR_6, VAR_1);
  FUNC_1(VAR_5->priv);
  FUNC_1(VAR_5);
 } else {
  VAR_6->ops->free_context(VAR_1);
 }

 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 if (VAR_0 <= 2)
  FUNC_0(VAR_4);

 return 0;
}
