
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint32_t ;
typedef uintptr_t u_long ;
struct thread {int td_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,uintptr_t*) ;
 int FUNC_2 (void*,uintptr_t*) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_2, uintptr_t VAR_3, uintptr_t *VAR_4)
{
 u_long VAR_5;



 int VAR_6;
 {
  VAR_6 = FUNC_1((void *)VAR_3, &VAR_5);
 }
 if (VAR_6 == 0)
  *VAR_4 = VAR_5;
 else
  VAR_6 = VAR_0;
 return (VAR_6);
}
