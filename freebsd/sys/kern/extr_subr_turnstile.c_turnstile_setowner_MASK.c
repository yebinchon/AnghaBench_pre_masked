
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct turnstile {struct thread* ts_owner; } ;
struct thread {int td_contested; TYPE_1__* td_proc; } ;
struct TYPE_2__ {scalar_t__ p_magic; } ;


 int FUNC_0 (int *,struct turnstile*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct turnstile *VAR_4, struct thread *VAR_5)
{

 FUNC_2(&VAR_2, VAR_0);
 FUNC_1(VAR_4->ts_owner == ((void*)0));


 if (VAR_5 == ((void*)0))
  return;

 FUNC_1(VAR_5->td_proc->p_magic == VAR_1);
 VAR_4->ts_owner = VAR_5;
 FUNC_0(&VAR_5->td_contested, VAR_4, VAR_3);
}
