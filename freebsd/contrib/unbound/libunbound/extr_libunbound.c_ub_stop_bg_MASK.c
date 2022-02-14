
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct ub_ctx {int cfglock; int bg_pid; int bg_tid; scalar_t__ dothread; int rrpipe_lock; int rr_pipe; int qqpipe_lock; int qq_pipe; scalar_t__ created_bg; } ;
typedef int cmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int **,scalar_t__*,int ) ;
 int FUNC_7 (int ,int *,scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_10(struct ub_ctx* VAR_3)
{

 FUNC_2(&VAR_3->cfglock);
 if(VAR_3->created_bg) {
  uint8_t* VAR_4;
  uint32_t VAR_5;
  uint32_t VAR_6 = VAR_0;
  FUNC_3(&VAR_3->cfglock);
  FUNC_2(&VAR_3->qqpipe_lock);
  (void)FUNC_7(VAR_3->qq_pipe, (uint8_t*)&VAR_6,
   (uint32_t)sizeof(VAR_6), 0);
  FUNC_3(&VAR_3->qqpipe_lock);
  FUNC_2(&VAR_3->rrpipe_lock);
  while(FUNC_6(VAR_3->rr_pipe, &VAR_4, &VAR_5, 0)) {

   if(FUNC_0(VAR_4, VAR_5) == VAR_0) {
    FUNC_1(VAR_4);
    break;
   }
   FUNC_1(VAR_4);
  }
  FUNC_3(&VAR_3->rrpipe_lock);



  FUNC_2(&VAR_3->cfglock);
  if(VAR_3->dothread) {
   FUNC_3(&VAR_3->cfglock);
   FUNC_8(VAR_3->bg_tid);
  } else {
   FUNC_3(&VAR_3->cfglock);

   if(FUNC_9(VAR_3->bg_pid, ((void*)0), 0) == -1) {
    if(VAR_2 > 2)
     FUNC_4("waitpid: %s", FUNC_5(VAR_1));
   }

  }
 }
 else {
  FUNC_3(&VAR_3->cfglock);
 }
}
