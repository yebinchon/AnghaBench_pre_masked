
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int * ub_callback_type ;
struct ub_result {int answer_len; int * answer_packet; int rcode; } ;
struct ub_ctx {int cfglock; int num_async; int queries; } ;
struct regional {int dummy; } ;
struct TYPE_2__ {int key; } ;
struct ctx_query {TYPE_1__ node; struct ub_result* res; int * msg; scalar_t__ msg_len; int msg_security; void* cb_arg; int * cb; scalar_t__ cancelled; int async; } ;
typedef int sldns_buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ctx_query* FUNC_0 (struct ub_ctx*,int *,int ,int*) ;
 int FUNC_1 (struct ctx_query*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ub_result*,int *,struct regional*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *,int ) ;
 struct regional* FUNC_9 () ;
 int FUNC_10 (struct regional*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *,int *,scalar_t__) ;
 int FUNC_16 (struct ub_result*) ;

__attribute__((used)) static int
FUNC_17(struct ub_ctx* VAR_2, uint8_t* VAR_3, uint32_t VAR_4,
 ub_callback_type* VAR_5, void** VAR_6, int* VAR_7,
 struct ub_result** VAR_8)
{
 struct ctx_query* VAR_9;
 if(FUNC_2(VAR_3, VAR_4) != VAR_1) {
  FUNC_7("error: bad data from bg worker %d",
   (int)FUNC_2(VAR_3, VAR_4));
  return 0;
 }

 FUNC_4(&VAR_2->cfglock);
 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7);
 if(!VAR_9) {
  FUNC_5(&VAR_2->cfglock);


  return 1;
 }
 FUNC_6(VAR_9->async);


 if(VAR_9->cancelled) {
  *VAR_5 = ((void*)0);
  *VAR_6 = ((void*)0);
 } else {
  *VAR_5 = VAR_9->cb;
  *VAR_6 = VAR_9->cb_arg;
 }
 if(*VAR_7) {
  *VAR_8 = ((void*)0);
  FUNC_16(VAR_9->res);
 } else {

  sldns_buffer* VAR_10 = FUNC_14(VAR_9->msg_len);
  struct regional* VAR_11 = FUNC_9();
  *VAR_8 = VAR_9->res;
  (*VAR_8)->rcode = VAR_0;
  if(VAR_11 && VAR_10) {
   FUNC_11(VAR_10);
   FUNC_15(VAR_10, VAR_9->msg, VAR_9->msg_len);
   FUNC_12(VAR_10);
   FUNC_3(*VAR_8, VAR_10, VAR_11,
    VAR_9->msg_security);
  }
  (*VAR_8)->answer_packet = VAR_9->msg;
  (*VAR_8)->answer_len = (int)VAR_9->msg_len;
  VAR_9->msg = ((void*)0);
  FUNC_13(VAR_10);
  FUNC_10(VAR_11);
 }
 VAR_9->res = ((void*)0);

 (void)FUNC_8(&VAR_2->queries, VAR_9->node.key);
 VAR_2->num_async--;
 FUNC_1(VAR_9);
 FUNC_5(&VAR_2->cfglock);

 if(*VAR_5) return 2;
 FUNC_16(*VAR_8);
 return 1;
}
