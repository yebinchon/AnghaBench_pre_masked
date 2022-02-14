
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ub_event_callback_type ;
struct ub_ctx {TYPE_1__* event_worker; int event_base; int cfglock; int finalized; } ;
struct ctx_query {int dummy; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ub_ctx*) ;
 struct ctx_query* FUNC_1 (struct ub_ctx*,char const*,int,int,int *,int ,void*) ;
 int FUNC_2 (struct ub_ctx*,struct ctx_query*,int*) ;
 TYPE_1__* FUNC_3 (struct ub_ctx*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct ub_ctx* VAR_3, const char* VAR_4, int VAR_5,
 int VAR_6, void* VAR_7, ub_event_callback_type VAR_8,
 int* VAR_9)
{
 struct ctx_query* VAR_10;
 int VAR_11;

 if(VAR_9)
  *VAR_9 = 0;
 FUNC_4(&VAR_3->cfglock);
 if(!VAR_3->finalized) {
  VAR_11 = FUNC_0(VAR_3);
  if(VAR_11) {
   FUNC_5(&VAR_3->cfglock);
   return VAR_11;
  }
 }
 FUNC_5(&VAR_3->cfglock);
 if(!VAR_3->event_worker) {
  VAR_3->event_worker = FUNC_3(VAR_3,
   VAR_3->event_base);
  if(!VAR_3->event_worker) {
   return VAR_0;
  }
 }


 FUNC_6(VAR_3->event_worker->base);


 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0), VAR_8, VAR_7);
 if(!VAR_10)
  return VAR_2;


 if((VAR_11=FUNC_2(VAR_3, VAR_10, VAR_9)) != 0)
  return VAR_11;
 return VAR_1;
}
