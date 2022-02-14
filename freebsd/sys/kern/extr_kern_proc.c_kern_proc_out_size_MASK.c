
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_numthreads; } ;
struct kinfo_proc32 {int dummy; } ;
struct kinfo_proc {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (struct proc*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct proc *VAR_3, int VAR_4)
{
 ssize_t VAR_5 = 0;

 FUNC_0(VAR_3, VAR_2);

 if ((VAR_4 & VAR_1) != 0) {





   VAR_5 += sizeof(struct kinfo_proc);
 } else {





   VAR_5 += sizeof(struct kinfo_proc) * VAR_3->p_numthreads;
 }
 FUNC_1(VAR_3);
 return (VAR_5);
}
