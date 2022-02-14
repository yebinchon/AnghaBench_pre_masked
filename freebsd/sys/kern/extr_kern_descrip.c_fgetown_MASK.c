
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigio {int sio_pgid; } ;
typedef int pid_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;

pid_t
FUNC_2(struct sigio **VAR_0)
{
 pid_t VAR_1;

 FUNC_0();
 VAR_1 = (*VAR_0 != ((void*)0)) ? (*VAR_0)->sio_pgid : 0;
 FUNC_1();
 return (VAR_1);
}
