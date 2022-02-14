
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subprocess_info {char* path; int wait; int retval; int * complete; int work; TYPE_1__* cred; } ;
typedef enum umh_wait { ____Placeholder_umh_wait } umh_wait ;
struct TYPE_2__ {int usage; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct subprocess_info*) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int **,int *) ;

int FUNC_11(struct subprocess_info *VAR_6,
        enum umh_wait VAR_7)
{
 FUNC_1(VAR_3);
 int VAR_8 = 0;

 FUNC_0(FUNC_2(&VAR_6->cred->usage) != 1);
 FUNC_7(VAR_6->cred);

 FUNC_4();
 if (VAR_6->path[0] == '\0')
  goto out;

 if (!VAR_4 || VAR_5) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_6->complete = &VAR_3;
 VAR_6->wait = VAR_7;

 FUNC_6(VAR_4, &VAR_6->work);
 if (VAR_7 == VAR_2)
  goto unlock;

 if (VAR_7 & VAR_1) {
  VAR_8 = FUNC_9(&VAR_3);
  if (!VAR_8)
   goto wait_done;


  if (FUNC_10(&VAR_6->complete, ((void*)0)))
   goto unlock;

 }

 FUNC_8(&VAR_3);
wait_done:
 VAR_8 = VAR_6->retval;
out:
 FUNC_3(VAR_6);
unlock:
 FUNC_5();
 return VAR_8;
}
