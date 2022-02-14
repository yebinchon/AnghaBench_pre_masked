
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * ub_event_callback_type ;
typedef int * ub_callback_type ;
struct TYPE_2__ {int * key; } ;
struct ub_result {int async; int qtype; int qclass; TYPE_1__ node; struct ub_result* res; int qname; void* cb_arg; int * cb_event; int * cb; int querynum; } ;
struct ub_ctx {int cfglock; int queries; int num_async; } ;
struct ctx_query {int async; int qtype; int qclass; TYPE_1__ node; struct ctx_query* res; int qname; void* cb_arg; int * cb_event; int * cb; int querynum; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct ub_ctx*,int *) ;
 int FUNC_2 (struct ub_result*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (char const*) ;

struct ctx_query*
FUNC_7(struct ub_ctx* VAR_0, const char* VAR_1, int VAR_2, int VAR_3,
 ub_callback_type VAR_4, ub_event_callback_type VAR_5, void* VAR_6)
{
 struct ctx_query* VAR_7 = (struct ctx_query*)FUNC_0(1, sizeof(*VAR_7));
 if(!VAR_7) return ((void*)0);
 FUNC_3(&VAR_0->cfglock);
 if(!FUNC_1(VAR_0, &VAR_7->querynum)) {
  FUNC_4(&VAR_0->cfglock);
  FUNC_2(VAR_7);
  return ((void*)0);
 }
 FUNC_4(&VAR_0->cfglock);
 VAR_7->node.key = &VAR_7->querynum;
 VAR_7->async = (VAR_4 != ((void*)0) || VAR_5 != ((void*)0));
 VAR_7->cb = VAR_4;
 VAR_7->cb_event = VAR_5;
 VAR_7->cb_arg = VAR_6;
 VAR_7->res = (struct ub_result*)FUNC_0(1, sizeof(*VAR_7->res));
 if(!VAR_7->res) {
  FUNC_2(VAR_7);
  return ((void*)0);
 }
 VAR_7->res->qname = FUNC_6(VAR_1);
 if(!VAR_7->res->qname) {
  FUNC_2(VAR_7->res);
  FUNC_2(VAR_7);
  return ((void*)0);
 }
 VAR_7->res->qtype = VAR_2;
 VAR_7->res->qclass = VAR_3;


 FUNC_3(&VAR_0->cfglock);
 if(VAR_7->async)
  VAR_0->num_async ++;
 (void)FUNC_5(&VAR_0->queries, &VAR_7->node);
 FUNC_4(&VAR_0->cfglock);
 return VAR_7;
}
