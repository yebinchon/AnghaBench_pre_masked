
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int (* ub_callback_type ) (void*,int,struct ub_result*) ;
struct ub_result {int dummy; } ;
struct ub_ctx {scalar_t__ num_async; int rrpipe_lock; int rr_pipe; int cfglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ub_ctx*,int *,int ,int (*) (void*,int,struct ub_result*),void**,int*,struct ub_result**) ;
 int FUNC_4 (void*,int,struct ub_result*) ;
 int FUNC_5 (int ,int **,int *,int) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct ub_ctx* VAR_2)
{
 int VAR_3;
 ub_callback_type VAR_4;
 void* VAR_5;
 struct ub_result* VAR_6;
 int VAR_7;
 uint8_t* VAR_8;
 uint32_t VAR_9;


 while(1) {
  FUNC_1(&VAR_2->rrpipe_lock);
  FUNC_1(&VAR_2->cfglock);
  if(VAR_2->num_async == 0) {
   FUNC_2(&VAR_2->cfglock);
   FUNC_2(&VAR_2->rrpipe_lock);
   break;
  }
  FUNC_2(&VAR_2->cfglock);







  VAR_7 = FUNC_6(VAR_2->rr_pipe);
  if(VAR_7) {
   VAR_7 = FUNC_5(VAR_2->rr_pipe, &VAR_8, &VAR_9, 1);
   if(VAR_7 == 0) {
    FUNC_2(&VAR_2->rrpipe_lock);
    return VAR_1;
   }
   if(VAR_7 == -1) {
    FUNC_2(&VAR_2->rrpipe_lock);
    continue;
   }
   VAR_7 = FUNC_3(VAR_2, VAR_8, VAR_9,
    &VAR_4, &VAR_5, &VAR_3, &VAR_6);
   FUNC_2(&VAR_2->rrpipe_lock);
   FUNC_0(VAR_8);
   if(VAR_7 == 0)
    return VAR_1;
   if(VAR_7 == 2)
    (*VAR_4)(VAR_5, VAR_3, VAR_6);
  } else {
   FUNC_2(&VAR_2->rrpipe_lock);
  }
 }
 return VAR_0;
}
