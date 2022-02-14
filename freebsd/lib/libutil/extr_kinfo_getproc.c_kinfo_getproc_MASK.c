
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int ki_structsize; int ki_pid; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kinfo_proc*) ;
 struct kinfo_proc* FUNC_1 (size_t) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*,int ,struct kinfo_proc*,size_t*,int *,int ) ;

struct kinfo_proc *
FUNC_4(pid_t VAR_3)
{
 struct kinfo_proc *VAR_4;
 int VAR_5[4];
 size_t VAR_6;

 VAR_6 = 0;
 VAR_5[0] = VAR_0;
 VAR_5[1] = VAR_1;
 VAR_5[2] = VAR_2;
 VAR_5[3] = VAR_3;
 if (FUNC_3(VAR_5, FUNC_2(VAR_5), ((void*)0), &VAR_6, ((void*)0), 0) < 0)
  return (((void*)0));

 VAR_4 = FUNC_1(VAR_6);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 if (FUNC_3(VAR_5, FUNC_2(VAR_5), VAR_4, &VAR_6, ((void*)0), 0) < 0)
  goto bad;
 if (VAR_6 != sizeof(*VAR_4))
  goto bad;
 if (VAR_4->ki_structsize != sizeof(*VAR_4))
  goto bad;
 if (VAR_4->ki_pid != VAR_3)
  goto bad;
 return (VAR_4);
bad:
 FUNC_0(VAR_4);
 return (((void*)0));
}
