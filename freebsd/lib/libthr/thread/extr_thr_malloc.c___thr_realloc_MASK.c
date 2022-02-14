
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;


 void* FUNC_0 (void*,size_t) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*) ;

void *
FUNC_4(void *VAR_0, size_t VAR_1)
{
 struct pthread *VAR_2;
 void *VAR_3;

 VAR_2 = FUNC_1();
 FUNC_2(VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_3(VAR_2);
 return (VAR_3);
}
