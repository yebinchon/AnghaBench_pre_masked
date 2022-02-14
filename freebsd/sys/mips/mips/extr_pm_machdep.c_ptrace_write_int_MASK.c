
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
struct thread {int td_proc; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,uintptr_t,int*,int) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_1, uintptr_t VAR_2, int VAR_3)
{

 if (FUNC_0(VAR_1, VAR_1->td_proc, VAR_2, &VAR_3, sizeof(VAR_3)) != sizeof(VAR_3))
  return (VAR_0);
 return (0);
}
