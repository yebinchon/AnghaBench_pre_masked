
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct thread {int dummy; } ;
struct proc {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct thread*,struct proc*,int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_1, struct proc *VAR_2, const char *VAR_3, char *VAR_4,
    size_t VAR_5)
{
 ssize_t VAR_6;






 VAR_6 = FUNC_0(VAR_1, VAR_2, (vm_offset_t)VAR_3, VAR_4, VAR_5);
 if (VAR_6 <= 0)
  return (VAR_0);
 return (0);
}
