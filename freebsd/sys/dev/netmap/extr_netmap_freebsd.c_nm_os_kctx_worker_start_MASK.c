
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc {int dummy; } ;
struct TYPE_3__ {int type; TYPE_2__* user_td; } ;
struct nm_kctx {int run; int * worker; TYPE_1__ worker_ctx; scalar_t__ attach_user; } ;
struct TYPE_4__ {struct proc* td_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ,struct nm_kctx*,struct proc*,int **,int ,int ,char*,int ) ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int *) ;

int
FUNC_3(struct nm_kctx *VAR_5)
{
 struct proc *VAR_6 = ((void*)0);
 int VAR_7 = 0;




 return VAR_1;

 if (VAR_5->worker)
  return VAR_0;


 if (VAR_5->attach_user) {
  VAR_5->worker_ctx.user_td = VAR_3;
  VAR_6 = VAR_3->td_proc;
 }


 VAR_5->run = 1;

 if((VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6,
   &VAR_5->worker, VAR_2 , 0, "nm-kthread-%ld",
   VAR_5->worker_ctx.type))) {
  goto err;
 }

 FUNC_2("nm_kthread started td %p", VAR_5->worker);

 return 0;
err:
 FUNC_1("nm_kthread start failed err %d", VAR_7);
 VAR_5->worker = ((void*)0);
 return VAR_7;
}
