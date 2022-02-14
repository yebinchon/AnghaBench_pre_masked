
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* ub_event_callback_type ) (void*,int,void*,int,int,char*,int) ;
struct ub_ctx {int cfglock; int num_async; int queries; } ;
struct TYPE_4__ {int key; } ;
struct ctx_query {int cancelled; TYPE_2__ node; TYPE_1__* w; void* cb_arg; int (* cb_event ) (void*,int,void*,int,int,char*,int) ;} ;
typedef int sldns_buffer ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
struct TYPE_3__ {struct ub_ctx* ctx; } ;


 int FUNC_0 (struct ctx_query*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (void*,int,void*,int,int,char*,int) ;

void
FUNC_7(void* VAR_2, int VAR_3, sldns_buffer* VAR_4,
 enum sec_status VAR_5, char* VAR_6, int VAR_7)
{
 struct ctx_query* VAR_8 = (struct ctx_query*)VAR_2;
 ub_event_callback_type VAR_9 = VAR_8->cb_event;
 void* VAR_10 = VAR_8->cb_arg;
 int VAR_11 = VAR_8->cancelled;


 struct ub_ctx* VAR_12 = VAR_8->w->ctx;
 FUNC_1(&VAR_12->cfglock);
 (void)FUNC_3(&VAR_12->queries, VAR_8->node.key);
 VAR_12->num_async--;
 FUNC_0(VAR_8);
 FUNC_2(&VAR_12->cfglock);

 if(!VAR_11) {

  int VAR_13 = 0;
  if(VAR_5 == VAR_0)
   VAR_13 = 1;
  else if(VAR_5 == VAR_1)
   VAR_13 = 2;
  (*VAR_9)(VAR_10, VAR_3, (VAR_4?(void*)FUNC_4(VAR_4):((void*)0)),
   (VAR_4?(int)FUNC_5(VAR_4):0), VAR_13, VAR_6, VAR_7);
 }
}
