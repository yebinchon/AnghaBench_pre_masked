
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ub_thread_type ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (void*) ;

void
FUNC_6(ub_thread_type* VAR_1, void* (*VAR_2)(void*), void* VAR_3)
{
 pid_t VAR_4 = FUNC_2();
 switch(VAR_4) {
 default:
   *VAR_1 = (ub_thread_type)VAR_4;
   return;
 case 0:
   *VAR_1 = (ub_thread_type)FUNC_3();
   (void)(*VAR_2)(VAR_3);
   FUNC_0(0);
 case -1:
   FUNC_1("could not fork: %s", FUNC_4(VAR_0));
 }
}
