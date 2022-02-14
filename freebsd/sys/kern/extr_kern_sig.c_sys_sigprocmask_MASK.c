
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sigprocmask_args {int * oset; int how; int * set; } ;
typedef int sigset_t ;
typedef int set ;
typedef int oset ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct thread*,int ,int *,int *,int ) ;

int
FUNC_3(struct thread *VAR_0, struct sigprocmask_args *VAR_1)
{
 sigset_t VAR_2, VAR_3;
 sigset_t *VAR_4, *VAR_5;
 int VAR_6;

 VAR_4 = (VAR_1->set != ((void*)0)) ? &VAR_2 : ((void*)0);
 VAR_5 = (VAR_1->oset != ((void*)0)) ? &VAR_3 : ((void*)0);
 if (VAR_4) {
  VAR_6 = FUNC_0(VAR_1->set, VAR_4, sizeof(VAR_2));
  if (VAR_6)
   return (VAR_6);
 }
 VAR_6 = FUNC_2(VAR_0, VAR_1->how, VAR_4, VAR_5, 0);
 if (VAR_5 && !VAR_6) {
  VAR_6 = FUNC_1(VAR_5, VAR_1->oset, sizeof(VAR_3));
 }
 return (VAR_6);
}
