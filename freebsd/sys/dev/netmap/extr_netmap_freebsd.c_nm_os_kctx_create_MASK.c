
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nm_kctx_cfg {int attach_user; int type; int worker_private; int worker_fn; } ;
struct TYPE_2__ {int type; int worker_private; int worker_fn; } ;
struct nm_kctx {int affinity; int attach_user; TYPE_1__ worker_ctx; int worker_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nm_kctx* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,char*,int *,int ) ;

struct nm_kctx *
FUNC_2(struct nm_kctx_cfg *VAR_4, void *VAR_5)
{
 struct nm_kctx *VAR_6 = ((void*)0);

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1, VAR_2 | VAR_3);
 if (!VAR_6)
  return ((void*)0);

 FUNC_1(&VAR_6->worker_lock, "nm_kthread lock", ((void*)0), VAR_0);
 VAR_6->worker_ctx.worker_fn = VAR_4->worker_fn;
 VAR_6->worker_ctx.worker_private = VAR_4->worker_private;
 VAR_6->worker_ctx.type = VAR_4->type;
 VAR_6->affinity = -1;


 VAR_6->attach_user = VAR_4->attach_user;

 return VAR_6;
}
