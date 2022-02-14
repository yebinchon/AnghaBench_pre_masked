
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int*) ;
 int FUNC_2 () ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(int *VAR_1)
{
 pthread_t VAR_2 = FUNC_2();
 if (FUNC_1(&VAR_2, ((void*)0), VAR_0, VAR_1) != 0)
  FUNC_0(1, "pthread_create");
}
