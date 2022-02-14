
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ub_callback_type ;
struct ub_ctx {int created_bg; int qqpipe_lock; int qq_pipe; int cfglock; int num_async; int queries; int finalized; } ;
struct TYPE_2__ {int key; } ;
struct ctx_query {int querynum; TYPE_1__ node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ub_ctx*) ;
 struct ctx_query* FUNC_1 (struct ub_ctx*,char const*,int,int,int ,int *,void*) ;
 int FUNC_2 (struct ctx_query*) ;
 int * FUNC_3 (struct ctx_query*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ub_ctx*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int *,int ,int ) ;

int
FUNC_10(struct ub_ctx* VAR_3, const char* VAR_4, int VAR_5,
 int VAR_6, void* VAR_7, ub_callback_type VAR_8, int* VAR_9)
{
 struct ctx_query* VAR_10;
 uint8_t* VAR_11 = ((void*)0);
 uint32_t VAR_12 = 0;

 if(VAR_9)
  *VAR_9 = 0;
 FUNC_6(&VAR_3->cfglock);
 if(!VAR_3->finalized) {
  int VAR_13 = FUNC_0(VAR_3);
  if(VAR_13) {
   FUNC_7(&VAR_3->cfglock);
   return VAR_13;
  }
 }
 if(!VAR_3->created_bg) {
  int VAR_14;
  VAR_3->created_bg = 1;
  FUNC_7(&VAR_3->cfglock);
  VAR_14 = FUNC_5(VAR_3);
  if(VAR_14) {
   FUNC_6(&VAR_3->cfglock);
   VAR_3->created_bg = 0;
   FUNC_7(&VAR_3->cfglock);
   return VAR_14;
  }
 } else {
  FUNC_7(&VAR_3->cfglock);
 }


 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, ((void*)0), VAR_7);
 if(!VAR_10)
  return VAR_1;


 FUNC_6(&VAR_3->cfglock);
 VAR_11 = FUNC_3(VAR_10, &VAR_12);
 if(!VAR_11) {
  (void)FUNC_8(&VAR_3->queries, VAR_10->node.key);
  VAR_3->num_async--;
  FUNC_2(VAR_10);
  FUNC_7(&VAR_3->cfglock);
  return VAR_1;
 }
 if(VAR_9)
  *VAR_9 = VAR_10->querynum;
 FUNC_7(&VAR_3->cfglock);

 FUNC_6(&VAR_3->qqpipe_lock);
 if(!FUNC_9(VAR_3->qq_pipe, VAR_11, VAR_12, 0)) {
  FUNC_7(&VAR_3->qqpipe_lock);
  FUNC_4(VAR_11);
  return VAR_2;
 }
 FUNC_7(&VAR_3->qqpipe_lock);
 FUNC_4(VAR_11);
 return VAR_0;
}
