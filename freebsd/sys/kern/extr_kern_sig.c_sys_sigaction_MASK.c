
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sigaction_args {int * oact; int sig; int * act; } ;
struct sigaction {int dummy; } ;
typedef int oact ;
typedef int act ;


 int FUNC_0 (int *,struct sigaction*,int) ;
 int FUNC_1 (struct sigaction*,int *,int) ;
 int FUNC_2 (struct thread*,int ,struct sigaction*,struct sigaction*,int ) ;

int
FUNC_3(struct thread *VAR_0, struct sigaction_args *VAR_1)
{
 struct sigaction VAR_2, VAR_3;
 struct sigaction *VAR_4, *VAR_5;
 int VAR_6;

 VAR_4 = (VAR_1->act != ((void*)0)) ? &VAR_2 : ((void*)0);
 VAR_5 = (VAR_1->oact != ((void*)0)) ? &VAR_3 : ((void*)0);
 if (VAR_4) {
  VAR_6 = FUNC_0(VAR_1->act, VAR_4, sizeof(VAR_2));
  if (VAR_6)
   return (VAR_6);
 }
 VAR_6 = FUNC_2(VAR_0, VAR_1->sig, VAR_4, VAR_5, 0);
 if (VAR_5 && !VAR_6)
  VAR_6 = FUNC_1(VAR_5, VAR_1->oact, sizeof(VAR_3));
 return (VAR_6);
}
