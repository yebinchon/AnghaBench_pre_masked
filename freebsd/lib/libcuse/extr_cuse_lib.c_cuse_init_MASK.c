
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutexattr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(void)
{
 pthread_mutexattr_t VAR_8;

 VAR_4 = FUNC_2("/dev/cuse", VAR_2);
 if (VAR_4 < 0) {
  if (FUNC_1("cuse") == 0)
   return (VAR_1);
  else
   return (VAR_0);
 }
 FUNC_4(&VAR_8);
 FUNC_5(&VAR_8, VAR_3);
 FUNC_3(&VAR_7, &VAR_8);

 FUNC_0(&VAR_5);
 FUNC_0(&VAR_6);

 return (0);
}
