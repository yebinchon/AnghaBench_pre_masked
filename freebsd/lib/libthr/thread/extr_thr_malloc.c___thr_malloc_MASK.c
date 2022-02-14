
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;


 void* FUNC_0 (size_t) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*) ;

void *
FUNC_4(size_t VAR_0)
{
 struct pthread *VAR_1;
 void *VAR_2;

 VAR_1 = FUNC_1();
 FUNC_2(VAR_1);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_3(VAR_1);
 return (VAR_2);
}
