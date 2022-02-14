
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;
typedef int pthread_t ;


 int FUNC_0 (struct pthread*,int ) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*,int ,int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(pthread_t VAR_0)
{
 struct pthread *VAR_1 = FUNC_1();
 int VAR_2;


 if ((VAR_2 = FUNC_2(VAR_1, VAR_0, 0)) == 0) {

  FUNC_3(VAR_0);
  FUNC_0(VAR_1, VAR_0);
 }
 return (VAR_2);
}
