
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef void* jmp_buf ;


 int FUNC_0 (struct thread*,int) ;
 void* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static void
FUNC_3(struct thread *VAR_0)
{
 jmp_buf VAR_1;
 void *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_2(VAR_1) == 0)
  FUNC_0(VAR_0, -1);
 (void)FUNC_1(VAR_2);
}
