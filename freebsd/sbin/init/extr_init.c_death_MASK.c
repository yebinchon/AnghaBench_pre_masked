
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int state_func_t ;
typedef int blocked ;
typedef int block ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int*,size_t*,int*,int) ;

__attribute__((used)) static state_func_t
FUNC_3(void)
{
 int VAR_1, VAR_2;
 size_t VAR_3;


 VAR_3 = sizeof(VAR_2);
 VAR_1 = 1;
 if (FUNC_2("kern.suspend_blocked", &VAR_2, &VAR_3,
     &VAR_1, sizeof(VAR_1)) == -1)
  VAR_2 = 0;







 FUNC_0();


 FUNC_1();


 if (!VAR_2)
  FUNC_2("kern.suspend_blocked", ((void*)0), ((void*)0),
      &VAR_2, sizeof(VAR_2));

 return (state_func_t) VAR_0;
}
