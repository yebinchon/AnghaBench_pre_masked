
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct rlimit {int rlim_cur; } ;
typedef int rlim_t ;


 int FUNC_0 (struct thread*,int,struct rlimit*) ;

rlim_t
(FUNC_1)(struct thread *VAR_0, int VAR_1)
{
 struct rlimit VAR_2;

 FUNC_0(VAR_0, VAR_1, &VAR_2);
 return (VAR_2.rlim_cur);
}
