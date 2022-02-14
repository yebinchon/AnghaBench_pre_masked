
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int sigset_t ;


 int VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_0 (struct thread*,int ,int *,int *,int ) ;

void
FUNC_1(struct thread *VAR_2, sigset_t *VAR_3)
{
 if (VAR_2 == ((void*)0))
  VAR_2 = VAR_1;
 FUNC_0(VAR_2, VAR_0, VAR_3, ((void*)0), 0);
}
