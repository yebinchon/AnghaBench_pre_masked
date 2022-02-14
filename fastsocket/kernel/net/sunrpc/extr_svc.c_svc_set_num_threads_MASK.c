
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct task_struct* rq_task; } ;
struct svc_serv {int sv_nrthreads; int sv_nrpools; int sv_module; int sv_name; int sv_function; } ;
struct svc_rqst {struct svc_rqst* rq_task; } ;
struct svc_pool {int sp_id; int sp_lock; scalar_t__ sp_nrthreads; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct svc_pool* FUNC_3 (struct svc_serv*,struct svc_pool*,unsigned int*) ;
 struct task_struct* FUNC_4 (struct svc_serv*,struct svc_pool*,unsigned int*) ;
 struct task_struct* FUNC_5 (int ,struct task_struct*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct task_struct*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct task_struct*,int ) ;
 struct task_struct* FUNC_12 (struct svc_serv*,struct svc_pool*) ;
 int FUNC_13 (struct svc_serv*) ;
 int FUNC_14 (struct task_struct*) ;

int
FUNC_15(struct svc_serv *VAR_1, struct svc_pool *VAR_2, int VAR_3)
{
 struct svc_rqst *VAR_4;
 struct task_struct *VAR_5;
 struct svc_pool *VAR_6;
 int VAR_7 = 0;
 unsigned int VAR_8 = VAR_1->sv_nrthreads-1;

 if (VAR_2 == ((void*)0)) {

  VAR_3 -= (VAR_1->sv_nrthreads-1);
 } else {
  FUNC_8(&VAR_2->sp_lock);
  VAR_3 -= VAR_2->sp_nrthreads;
  FUNC_9(&VAR_2->sp_lock);
 }


 while (VAR_3 > 0) {
  VAR_3--;
  VAR_6 = FUNC_3(VAR_1, VAR_2, &VAR_8);

  VAR_4 = FUNC_12(VAR_1, VAR_6);
  if (FUNC_0(VAR_4)) {
   VAR_7 = FUNC_1(VAR_4);
   break;
  }

  FUNC_2(VAR_1->sv_module);
  VAR_5 = FUNC_5(VAR_1->sv_function, VAR_4, VAR_1->sv_name);
  if (FUNC_0(VAR_5)) {
   VAR_7 = FUNC_1(VAR_5);
   FUNC_6(VAR_1->sv_module);
   FUNC_10(VAR_4);
   break;
  }

  VAR_4->rq_task = VAR_5;
  if (VAR_1->sv_nrpools > 1)
   FUNC_11(VAR_5, VAR_6->sp_id);

  FUNC_13(VAR_1);
  FUNC_14(VAR_5);
 }

 while (VAR_3 < 0 &&
        (VAR_5 = FUNC_4(VAR_1, VAR_2, &VAR_8)) != ((void*)0)) {
  FUNC_7(VAR_0, VAR_5, 1);
  VAR_3++;
 }

 return VAR_7;
}
