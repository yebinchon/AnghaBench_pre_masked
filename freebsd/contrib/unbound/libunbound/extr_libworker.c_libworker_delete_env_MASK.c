
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct libworker {int back; int sslctx; TYPE_1__* env; scalar_t__ is_bg_thread; int is_bg; int ctx; } ;
struct TYPE_2__ {int rnd; int hints; int fwds; int scratch; int scratch_buffer; int alloc; int mesh; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct libworker* VAR_0)
{
 if(VAR_0->env) {
  FUNC_7(VAR_0->back);
  FUNC_5(VAR_0->env->mesh);
  FUNC_1(VAR_0->ctx, VAR_0->env->alloc,
   !VAR_0->is_bg || VAR_0->is_bg_thread);
  FUNC_9(VAR_0->env->scratch_buffer);
  FUNC_8(VAR_0->env->scratch);
  FUNC_2(VAR_0->env->fwds);
  FUNC_4(VAR_0->env->hints);
  FUNC_10(VAR_0->env->rnd);
  FUNC_3(VAR_0->env);
 }



 FUNC_6(VAR_0->back);
}
