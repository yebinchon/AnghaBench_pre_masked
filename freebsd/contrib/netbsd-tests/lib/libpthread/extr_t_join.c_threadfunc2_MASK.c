
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_attr_t ;


 int FUNC_0 (int) ;
 uintptr_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *,size_t*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*) ;
 int FUNC_6 () ;

__attribute__((used)) static void *
FUNC_7(void *VAR_2)
{
 static uintptr_t VAR_3 = 0;
 uintptr_t VAR_4;
 pthread_attr_t VAR_5;
 size_t VAR_6;

 VAR_4 = (uintptr_t)VAR_2;




 FUNC_0(FUNC_2(FUNC_6(), &VAR_5) == 0);
 FUNC_0(FUNC_3(&VAR_5, &VAR_6) == 0);
 FUNC_0(VAR_6 == VAR_0 * (VAR_4 + 1));
 FUNC_0(FUNC_1(&VAR_5) == 0);

 if (VAR_3++ == VAR_4)
  VAR_1 = 0;

 FUNC_5((void *)VAR_3);

 return ((void*)0);
}
