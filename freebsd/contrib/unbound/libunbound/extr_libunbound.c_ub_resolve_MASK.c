
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_result {int answer_len; int * answer_packet; } ;
struct ub_ctx {int cfglock; int queries; int finalized; } ;
struct TYPE_2__ {int key; } ;
struct ctx_query {TYPE_1__ node; struct ub_result* res; int * msg; scalar_t__ msg_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ub_ctx*) ;
 struct ctx_query* FUNC_1 (struct ub_ctx*,char const*,int,int,int *,int *,int *) ;
 int FUNC_2 (struct ctx_query*) ;
 int FUNC_3 (struct ub_ctx*,struct ctx_query*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

int
FUNC_7(struct ub_ctx* VAR_2, const char* VAR_3, int VAR_4,
 int VAR_5, struct ub_result** VAR_6)
{
 struct ctx_query* VAR_7;
 int VAR_8;
 *VAR_6 = ((void*)0);

 FUNC_4(&VAR_2->cfglock);
 if(!VAR_2->finalized) {
  VAR_8 = FUNC_0(VAR_2);
  if(VAR_8) {
   FUNC_5(&VAR_2->cfglock);
   return VAR_8;
  }
 }

 FUNC_5(&VAR_2->cfglock);
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0), ((void*)0), ((void*)0));
 if(!VAR_7)
  return VAR_1;


 VAR_8 = FUNC_3(VAR_2, VAR_7);
 if(VAR_8) {
  FUNC_4(&VAR_2->cfglock);
  (void)FUNC_6(&VAR_2->queries, VAR_7->node.key);
  FUNC_2(VAR_7);
  FUNC_5(&VAR_2->cfglock);
  return VAR_8;
 }
 VAR_7->res->answer_packet = VAR_7->msg;
 VAR_7->res->answer_len = (int)VAR_7->msg_len;
 VAR_7->msg = ((void*)0);
 *VAR_6 = VAR_7->res;
 VAR_7->res = ((void*)0);

 FUNC_4(&VAR_2->cfglock);
 (void)FUNC_6(&VAR_2->queries, VAR_7->node.key);
 FUNC_2(VAR_7);
 FUNC_5(&VAR_2->cfglock);
 return VAR_0;
}
