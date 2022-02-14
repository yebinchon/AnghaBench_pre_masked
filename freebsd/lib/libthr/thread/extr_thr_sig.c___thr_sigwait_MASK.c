
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;
 int FUNC_4 (int const*,int *) ;

int
FUNC_5(const sigset_t *VAR_1, int *VAR_2)
{
 struct pthread *VAR_3 = FUNC_1();
 sigset_t VAR_4;
 int VAR_5;

 do {
  FUNC_2(VAR_3);
  VAR_5 = FUNC_0(FUNC_4(VAR_1, &VAR_4), VAR_2);
  FUNC_3(VAR_3, (VAR_5 != 0));
 } while (VAR_5 == VAR_0);
 return (VAR_5);
}
