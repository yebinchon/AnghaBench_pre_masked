
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ub_ctx {int cfglock; int num_async; int queries; } ;
struct TYPE_6__ {int key; } ;
struct ctx_query {int msg_security; TYPE_4__* w; TYPE_2__ node; scalar_t__ cancelled; } ;
typedef int sldns_buffer ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
struct TYPE_8__ {TYPE_3__* env; struct ub_ctx* ctx; scalar_t__ is_bg_thread; TYPE_1__* back; } ;
struct TYPE_7__ {int * scratch_buffer; } ;
struct TYPE_5__ {scalar_t__ want_to_quit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,struct ctx_query*,int *,int ,char*,int) ;
 int FUNC_1 (struct ctx_query*) ;
 int FUNC_2 (int *,int,int *,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(void* VAR_2, int VAR_3, sldns_buffer* VAR_4, enum sec_status VAR_5,
 char* VAR_6, int VAR_7)
{
 struct ctx_query* VAR_8 = (struct ctx_query*)VAR_2;

 if(VAR_8->cancelled || VAR_8->w->back->want_to_quit) {
  if(VAR_8->w->is_bg_thread) {

   struct ub_ctx* VAR_9 = VAR_8->w->ctx;
   FUNC_3(&VAR_9->cfglock);
   (void)FUNC_5(&VAR_9->queries, VAR_8->node.key);
   VAR_9->num_async--;
   FUNC_1(VAR_8);
   FUNC_4(&VAR_9->cfglock);
  }

  return;
 }
 VAR_8->msg_security = VAR_5;
 if(!VAR_4) {
  VAR_4 = VAR_8->w->env->scratch_buffer;
 }
 if(VAR_3 != 0) {
  FUNC_2(VAR_4, VAR_3, ((void*)0), 0, VAR_0, ((void*)0));
 }
 FUNC_0(VAR_8->w, VAR_8, VAR_4, VAR_1, VAR_6, VAR_7);
}
