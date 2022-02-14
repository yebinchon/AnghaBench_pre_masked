
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ub_ctx {int cfglock; int qqpipe_lock; int qq_pipe; int num_async; int queries; int dothread; } ;
struct TYPE_2__ {int key; } ;
struct ctx_query {int cancelled; TYPE_1__ node; int async; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ctx_query*) ;
 int * FUNC_1 (struct ctx_query*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int*) ;
 int FUNC_8 (int ,int *,int ,int ) ;

int
FUNC_9(struct ub_ctx* VAR_4, int VAR_5)
{
 struct ctx_query* VAR_6;
 uint8_t* VAR_7 = ((void*)0);
 uint32_t VAR_8 = 0;
 FUNC_3(&VAR_4->cfglock);
 VAR_6 = (struct ctx_query*)FUNC_7(&VAR_4->queries, &VAR_5);
 if(!VAR_6 || !VAR_6->async) {

  FUNC_4(&VAR_4->cfglock);
  return VAR_1;
 }
 FUNC_5(VAR_6->async);
 VAR_6->cancelled = 1;


 if(!VAR_4->dothread) {
  (void)FUNC_6(&VAR_4->queries, VAR_6->node.key);
  VAR_4->num_async--;
  VAR_7 = FUNC_1(VAR_6, &VAR_8);
  FUNC_0(VAR_6);
  FUNC_4(&VAR_4->cfglock);
  if(!VAR_7) {
   return VAR_2;
  }

  FUNC_3(&VAR_4->qqpipe_lock);
  if(!FUNC_8(VAR_4->qq_pipe, VAR_7, VAR_8, 0)) {
   FUNC_4(&VAR_4->qqpipe_lock);
   FUNC_2(VAR_7);
   return VAR_3;
  }
  FUNC_4(&VAR_4->qqpipe_lock);
  FUNC_2(VAR_7);
 } else {
  FUNC_4(&VAR_4->cfglock);
 }
 return VAR_0;
}
