
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct libworker {TYPE_3__* ctx; scalar_t__ is_bg_thread; scalar_t__ want_quit; } ;
struct TYPE_5__ {int key; } ;
struct ctx_query {TYPE_2__ node; TYPE_1__* res; int msg; int msg_len; } ;
typedef int sldns_buffer ;
struct TYPE_6__ {int rr_pipe; int num_async; int queries; int cfglock; } ;
struct TYPE_4__ {int was_ratelimited; void* why_bogus; } ;


 int VAR_0 ;
 int FUNC_0 (struct ctx_query*) ;
 int * FUNC_1 (struct ctx_query*,int,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (char*) ;
 int FUNC_10 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_11(struct libworker* VAR_1, struct ctx_query* VAR_2, sldns_buffer* VAR_3,
 int VAR_4, char* VAR_5, int VAR_6)
{
 uint8_t* VAR_7 = ((void*)0);
 uint32_t VAR_8 = 0;

 if(VAR_1->want_quit) {
  FUNC_0(VAR_2);
  return;
 }

 if(VAR_1->is_bg_thread) {
  FUNC_2(&VAR_1->ctx->cfglock);
  if(VAR_5)
   VAR_2->res->why_bogus = FUNC_9(VAR_5);
  VAR_2->res->was_ratelimited = VAR_6;
  if(VAR_3) {
   VAR_2->msg_len = FUNC_8(VAR_3);
   VAR_2->msg = FUNC_5(FUNC_7(VAR_3), VAR_2->msg_len);
   if(!VAR_2->msg) {
    VAR_7 = FUNC_1(VAR_2, VAR_0, ((void*)0), &VAR_8);
   } else {
    VAR_7 = FUNC_1(VAR_2, VAR_4, ((void*)0), &VAR_8);
   }
  } else {
   VAR_7 = FUNC_1(VAR_2, VAR_4, ((void*)0), &VAR_8);
  }
  FUNC_3(&VAR_1->ctx->cfglock);
 } else {
  if(VAR_5)
   VAR_2->res->why_bogus = FUNC_9(VAR_5);
  VAR_2->res->was_ratelimited = VAR_6;
  VAR_7 = FUNC_1(VAR_2, VAR_4, VAR_3, &VAR_8);
  (void)FUNC_6(&VAR_1->ctx->queries, VAR_2->node.key);
  VAR_1->ctx->num_async--;
  FUNC_0(VAR_2);
 }

 if(!VAR_7) {
  FUNC_4("out of memory for async answer");
  return;
 }
 if(!FUNC_10(VAR_1->ctx->rr_pipe, VAR_7, VAR_8)) {
  FUNC_4("out of memory for async answer");
  return;
 }
}
