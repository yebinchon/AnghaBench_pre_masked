
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {int dummy; } ;
struct rlimit {scalar_t__ rlim_max; scalar_t__ rlim_cur; } ;
struct linux_getrlimit_args {size_t resource; int rlim; } ;
struct l_rlimit {void* rlim_max; void* rlim_cur; } ;
typedef int rlim ;
typedef void* l_ulong ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct l_rlimit*,int ,int) ;
 int FUNC_1 (struct thread*,int,struct rlimit*) ;
 int* VAR_2 ;

int
FUNC_2(struct thread *VAR_3, struct linux_getrlimit_args *VAR_4)
{
 struct l_rlimit VAR_5;
 struct rlimit VAR_6;
 u_int VAR_7;

 if (VAR_4->resource >= VAR_1)
  return (VAR_0);

 VAR_7 = VAR_2[VAR_4->resource];
 if (VAR_7 == -1)
  return (VAR_0);

 FUNC_1(VAR_3, VAR_7, &VAR_6);

 VAR_5.rlim_cur = (l_ulong)VAR_6.rlim_cur;
 VAR_5.rlim_max = (l_ulong)VAR_6.rlim_max;
 return (FUNC_0(&VAR_5, VAR_4->rlim, sizeof(VAR_5)));
}
