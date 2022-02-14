
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct libworker {TYPE_1__* ctx; scalar_t__ is_bg_thread; } ;
struct ctx_query {int cancelled; } ;
struct TYPE_2__ {int cfglock; } ;


 struct ctx_query* FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct libworker* VAR_0, uint8_t* VAR_1, uint32_t VAR_2)
{
 struct ctx_query* VAR_3;
 if(VAR_0->is_bg_thread) {
  FUNC_2(&VAR_0->ctx->cfglock);
  VAR_3 = FUNC_0(VAR_0->ctx, VAR_1, VAR_2);
  FUNC_3(&VAR_0->ctx->cfglock);
 } else {
  VAR_3 = FUNC_0(VAR_0->ctx, VAR_1, VAR_2);
 }
 if(!VAR_3) {


  return;
 }
 VAR_3->cancelled = 1;
 FUNC_1(VAR_1);
}
