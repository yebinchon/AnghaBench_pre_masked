
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;


 int FUNC_0 (int *) ;
 struct thread* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct thread* FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 (struct thread*) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_8(void)
{
 struct thread *VAR_3, *VAR_4;





 if (!FUNC_0(&VAR_2)) {
  FUNC_4(&VAR_1);
  VAR_3 = FUNC_1(&VAR_2);
  if (VAR_3)
   FUNC_2(&VAR_2);
  FUNC_5(&VAR_1);
  while (VAR_3) {
   VAR_4 = FUNC_3(VAR_3, VAR_0);
   FUNC_6(VAR_3);
   FUNC_7(VAR_3);
   VAR_3 = VAR_4;
  }
 }
}
