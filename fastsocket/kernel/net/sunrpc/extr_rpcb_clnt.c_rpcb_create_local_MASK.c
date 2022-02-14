
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DEFINE_MUTEX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

int FUNC_5(void)
{
 static DEFINE_MUTEX(VAR_0);
 int VAR_1 = 0;

 if (FUNC_4())
  return VAR_1;

 FUNC_0(&VAR_0);
 if (FUNC_4())
  goto out;

 if (FUNC_3() != 0)
  VAR_1 = FUNC_2();

out:
 FUNC_1(&VAR_0);
 return VAR_1;
}
