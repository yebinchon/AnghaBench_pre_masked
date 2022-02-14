
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_kctx_ctx {int worker_private; int (* worker_fn ) (int ) ;scalar_t__ user_td; } ;
struct nm_kctx {scalar_t__ affinity; scalar_t__ run; struct nm_kctx_ctx worker_ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_2)
{
 struct nm_kctx *VAR_3 = VAR_2;
 struct nm_kctx_ctx *VAR_4 = &VAR_3->worker_ctx;

 if (VAR_3->affinity >= 0) {
  FUNC_6(VAR_1);
  FUNC_4(VAR_1, VAR_3->affinity);
  FUNC_8(VAR_1);
 }

 while (VAR_3->run) {




  if (VAR_4->user_td) {
   FUNC_0(VAR_0);
   FUNC_7(0);
   FUNC_1(VAR_0);
  } else {
   FUNC_3();
  }


  VAR_4->worker_fn(VAR_4->worker_private);
 }

 FUNC_2();
}
