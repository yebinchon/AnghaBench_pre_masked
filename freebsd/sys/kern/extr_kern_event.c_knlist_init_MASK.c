
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knlist {void (* kl_lock ) (void*) ;void (* kl_unlock ) (void*) ;void (* kl_assert_locked ) (void*) ;void (* kl_assert_unlocked ) (void*) ;int kl_list; scalar_t__ kl_autodestroy; int * kl_lockarg; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 void FUNC_1 (void*) ;
 void FUNC_2 (void*) ;
 void FUNC_3 (void*) ;
 void FUNC_4 (void*) ;

void
FUNC_5(struct knlist *VAR_1, void *VAR_2, void (*VAR_3)(void *),
    void (*VAR_4)(void *),
    void (*VAR_5)(void *), void (*VAR_6)(void *))
{

 if (VAR_2 == ((void*)0))
  VAR_1->kl_lockarg = &VAR_0;
 else
  VAR_1->kl_lockarg = VAR_2;

 if (VAR_3 == ((void*)0))
  VAR_1->kl_lock = FUNC_3;
 else
  VAR_1->kl_lock = VAR_3;
 if (VAR_4 == ((void*)0))
  VAR_1->kl_unlock = FUNC_4;
 else
  VAR_1->kl_unlock = VAR_4;
 if (VAR_5 == ((void*)0))
  VAR_1->kl_assert_locked = FUNC_1;
 else
  VAR_1->kl_assert_locked = VAR_5;
 if (VAR_6 == ((void*)0))
  VAR_1->kl_assert_unlocked = FUNC_2;
 else
  VAR_1->kl_assert_unlocked = VAR_6;

 VAR_1->kl_autodestroy = 0;
 FUNC_0(&VAR_1->kl_list);
}
