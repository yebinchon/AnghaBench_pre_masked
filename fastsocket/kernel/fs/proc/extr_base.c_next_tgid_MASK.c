
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgid_iter {int tgid; int * task; } ;
struct pid_namespace {int dummy; } ;
struct pid {int dummy; } ;


 int VAR_0 ;
 struct pid* FUNC_0 (int,struct pid_namespace*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pid*,struct pid_namespace*) ;
 int * FUNC_4 (struct pid*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static struct tgid_iter FUNC_8(struct pid_namespace *VAR_1, struct tgid_iter VAR_2)
{
 struct pid *VAR_3;

 if (VAR_2.task)
  FUNC_5(VAR_2.task);
 FUNC_6();
retry:
 VAR_2.task = ((void*)0);
 VAR_3 = FUNC_0(VAR_2.tgid, VAR_1);
 if (VAR_3) {
  VAR_2.tgid = FUNC_3(VAR_3, VAR_1);
  VAR_2.task = FUNC_4(VAR_3, VAR_0);
  if (!VAR_2.task || !FUNC_2(VAR_2.task)) {
   VAR_2.tgid += 1;
   goto retry;
  }
  FUNC_1(VAR_2.task);
 }
 FUNC_7();
 return VAR_2;
}
