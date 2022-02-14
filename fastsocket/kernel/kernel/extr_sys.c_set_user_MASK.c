
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct user_struct {int processes; } ;
struct cred {struct user_struct* user; int uid; } ;
struct TYPE_7__ {TYPE_2__* signal; } ;
struct TYPE_6__ {TYPE_1__* rlim; } ;
struct TYPE_5__ {scalar_t__ rlim_cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct user_struct* VAR_2 ;
 size_t VAR_3 ;
 struct user_struct* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (struct user_struct*) ;
 int FUNC_4 (struct user_struct*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct cred *VAR_5)
{
 struct user_struct *VAR_6;

 VAR_6 = FUNC_0(FUNC_2(), VAR_5->uid);
 if (!VAR_6)
  return -VAR_0;

 if (!FUNC_4(VAR_6, VAR_4)) {
  FUNC_3(VAR_6);
  return -VAR_1;
 }

 if (FUNC_1(&VAR_6->processes) >=
    VAR_4->signal->rlim[VAR_3].rlim_cur &&
   VAR_6 != VAR_2) {
  FUNC_3(VAR_6);
  return -VAR_0;
 }

 FUNC_3(VAR_5->user);
 VAR_5->user = VAR_6;
 return 0;
}
