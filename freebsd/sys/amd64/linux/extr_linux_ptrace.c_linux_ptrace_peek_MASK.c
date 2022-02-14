
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; } ;
typedef int pid_t ;
typedef int l_int ;


 int VAR_0 ;
 int FUNC_0 (int*,void*,int) ;
 int FUNC_1 (struct thread*,int ,int ,void*,int ) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_1, pid_t VAR_2, void *VAR_3, void *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, 0);
 if (VAR_5 == 0)
  VAR_5 = FUNC_0(VAR_1->td_retval, VAR_4, sizeof(l_int));
 VAR_1->td_retval[0] = VAR_5;

 return (VAR_5);
}
