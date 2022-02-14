
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ub_ctx {int rrpipe_lock; int rr_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ub_ctx*,int *,int ) ;
 int FUNC_4 (int ,int **,int *,int) ;

int
FUNC_5(struct ub_ctx* VAR_2)
{
 int VAR_3;
 uint8_t* VAR_4;
 uint32_t VAR_5;
 while(1) {
  VAR_4 = ((void*)0);
  FUNC_1(&VAR_2->rrpipe_lock);
  VAR_3 = FUNC_4(VAR_2->rr_pipe, &VAR_4, &VAR_5, 1);
  FUNC_2(&VAR_2->rrpipe_lock);
  if(VAR_3 == 0)
   return VAR_1;
  else if(VAR_3 == -1)
   break;
  if(!FUNC_3(VAR_2, VAR_4, VAR_5)) {
   FUNC_0(VAR_4);
   return VAR_1;
  }
  FUNC_0(VAR_4);
 }
 return VAR_0;
}
