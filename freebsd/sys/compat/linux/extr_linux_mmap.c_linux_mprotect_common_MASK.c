
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct thread*,uintptr_t,size_t,int) ;
 int FUNC_1 (struct thread*,int*) ;

int
FUNC_2(struct thread *VAR_6, uintptr_t VAR_7, size_t VAR_8, int VAR_9)
{


 VAR_9 &= ~(VAR_1 | VAR_2);
 if ((VAR_9 & ~(VAR_4 | VAR_5 | VAR_3)) != 0)
  return (VAR_0);


 FUNC_1(VAR_6, &VAR_9);

 return (FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9));
}
