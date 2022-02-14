
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spinlock_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(spinlock_t *VAR_0)
{
 int VAR_1 = FUNC_3();
 int VAR_2 = 0;

 FUNC_2(VAR_0);

 if (FUNC_5(VAR_0) || VAR_1) {
  FUNC_6(VAR_0);
  if (VAR_1)
   FUNC_0();
  else
   FUNC_1();
  VAR_2 = 1;
  FUNC_4(VAR_0);
 }
 return VAR_2;
}
