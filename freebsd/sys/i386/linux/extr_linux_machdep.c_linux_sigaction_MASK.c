
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct thread {int dummy; } ;
struct linux_sigaction_args {int * osa; int * nsa; int sig; } ;
struct TYPE_10__ {int __mask; } ;
struct TYPE_8__ {TYPE_7__ lsa_mask; int lsa_restorer; int lsa_flags; int lsa_handler; } ;
typedef TYPE_1__ l_sigaction_t ;
struct TYPE_9__ {int lsa_mask; int lsa_restorer; int lsa_flags; int lsa_handler; } ;
typedef TYPE_2__ l_osigaction_t ;


 int FUNC_0 (TYPE_7__) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;
 int FUNC_3 (struct thread*,int ,TYPE_1__*,TYPE_1__*) ;

int
FUNC_4(struct thread *VAR_0, struct linux_sigaction_args *VAR_1)
{
 l_osigaction_t VAR_2;
 l_sigaction_t VAR_3, VAR_4;
 int VAR_5;

 if (VAR_1->nsa != ((void*)0)) {
  VAR_5 = FUNC_1(VAR_1->nsa, &VAR_2, sizeof(l_osigaction_t));
  if (VAR_5)
   return (VAR_5);
  VAR_3.lsa_handler = VAR_2.lsa_handler;
  VAR_3.lsa_flags = VAR_2.lsa_flags;
  VAR_3.lsa_restorer = VAR_2.lsa_restorer;
  FUNC_0(VAR_3.lsa_mask);
  VAR_3.lsa_mask.__mask = VAR_2.lsa_mask;
 }

 VAR_5 = FUNC_3(VAR_0, VAR_1->sig, VAR_1->nsa ? &VAR_3 : ((void*)0),
     VAR_1->osa ? &VAR_4 : ((void*)0));

 if (VAR_1->osa != ((void*)0) && !VAR_5) {
  VAR_2.lsa_handler = VAR_4.lsa_handler;
  VAR_2.lsa_flags = VAR_4.lsa_flags;
  VAR_2.lsa_restorer = VAR_4.lsa_restorer;
  VAR_2.lsa_mask = VAR_4.lsa_mask.__mask;
  VAR_5 = FUNC_2(&VAR_2, VAR_1->osa, sizeof(l_osigaction_t));
 }

 return (VAR_5);
}
