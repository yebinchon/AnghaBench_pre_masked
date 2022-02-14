
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct reg {int dummy; } ;
struct linux_pt_reg {int dummy; } ;
typedef int pid_t ;
typedef int l_reg ;


 int VAR_0 ;
 int FUNC_0 (void*,struct linux_pt_reg*,int) ;
 int FUNC_1 (struct thread*,int ,int ,struct reg*,int ) ;
 int FUNC_2 (struct reg*,struct linux_pt_reg*) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_1, pid_t VAR_2, void *VAR_3)
{
 struct reg VAR_4;
 struct linux_pt_reg VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, &VAR_5, sizeof(VAR_5));
 if (VAR_6 != 0)
  return (VAR_6);
 FUNC_2(&VAR_4, &VAR_5);
 VAR_6 = FUNC_1(VAR_1, VAR_0, VAR_2, &VAR_4, 0);
 return (VAR_6);
}
