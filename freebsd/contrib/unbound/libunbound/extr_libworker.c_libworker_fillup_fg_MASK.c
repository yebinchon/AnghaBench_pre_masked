
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ctx_query {int msg_security; TYPE_2__* w; TYPE_3__* res; int msg; int msg_len; } ;
typedef int sldns_buffer ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
struct TYPE_6__ {int was_ratelimited; int rcode; int why_bogus; } ;
struct TYPE_5__ {TYPE_1__* env; } ;
struct TYPE_4__ {int scratch; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct ctx_query* VAR_1, int VAR_2, sldns_buffer* VAR_3,
 enum sec_status VAR_4, char* VAR_5, int VAR_6)
{
 VAR_1->res->was_ratelimited = VAR_6;
 if(VAR_5)
  VAR_1->res->why_bogus = FUNC_4(VAR_5);
 if(VAR_2 != 0) {
  VAR_1->res->rcode = VAR_2;
  VAR_1->msg_security = VAR_4;
  return;
 }

 VAR_1->res->rcode = VAR_0;
 VAR_1->msg_security = 0;
 VAR_1->msg = FUNC_1(FUNC_2(VAR_3), FUNC_3(VAR_3));
 VAR_1->msg_len = FUNC_3(VAR_3);
 if(!VAR_1->msg) {
  return;
 }


 VAR_1->msg_security = VAR_4;
 FUNC_0(VAR_1->res, VAR_3, VAR_1->w->env->scratch, VAR_4);
}
