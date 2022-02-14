
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int * joiner; } ;


 int FUNC_0 (struct pthread*,struct pthread*) ;
 int FUNC_1 (struct pthread*,struct pthread*) ;
 struct pthread* FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct pthread *VAR_1 = (struct pthread *)VAR_0;
 struct pthread *VAR_2 = FUNC_2();

 FUNC_0(VAR_2, VAR_1);
 VAR_1->joiner = ((void*)0);
 FUNC_1(VAR_2, VAR_1);
}
