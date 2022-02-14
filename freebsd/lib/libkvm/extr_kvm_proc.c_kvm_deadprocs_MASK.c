
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct proc {int dummy; } ;
struct kinfo_proc {int dummy; } ;
struct TYPE_6__ {int program; struct kinfo_proc* procbase; } ;
typedef TYPE_1__ kvm_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,struct proc**) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int,int,struct proc*,struct kinfo_proc*,int) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_0, int VAR_1, int VAR_2, u_long VAR_3,
    u_long VAR_4, int VAR_5)
{
 struct kinfo_proc *VAR_6 = VAR_0->procbase;
 int VAR_7, VAR_8 = 0;
 struct proc *VAR_9;

 if (FUNC_0(VAR_0, VAR_3, &VAR_9)) {
  FUNC_1(VAR_0, VAR_0->program, "cannot read allproc");
  return (-1);
 }
 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_9, VAR_6, VAR_5);
 if (VAR_7 < 0)
  return (VAR_7);

 if (VAR_4 != 0) {
  if (FUNC_0(VAR_0, VAR_4, &VAR_9)) {
   FUNC_1(VAR_0, VAR_0->program, "cannot read zombproc");
   return (-1);
  }
  VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_9, VAR_6 + VAR_7, VAR_5 - VAR_7);
  if (VAR_8 < 0)
   VAR_8 = 0;
 }

 return (VAR_7 + VAR_8);
}
