
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int rr_pipe; int qq_pipe; int bg_pid; int cfglock; int bg_tid; scalar_t__ dothread; } ;
struct libworker {int is_bg_thread; int thread_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct libworker*) ;
 struct libworker* FUNC_4 (struct ub_ctx*,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int (*) (struct libworker*),struct libworker*) ;

int FUNC_10(struct ub_ctx* VAR_3)
{
 struct libworker* VAR_4;

 FUNC_5(&VAR_3->cfglock);
 if(VAR_3->dothread) {
  FUNC_6(&VAR_3->cfglock);
  VAR_4 = FUNC_4(VAR_3, 1, ((void*)0));
  if(!VAR_4) return VAR_2;
  VAR_4->is_bg_thread = 1;



  FUNC_9(&VAR_3->bg_tid, FUNC_3, VAR_4);
 } else {
  FUNC_6(&VAR_3->cfglock);


  return VAR_0;
 }
 return VAR_1;
}
