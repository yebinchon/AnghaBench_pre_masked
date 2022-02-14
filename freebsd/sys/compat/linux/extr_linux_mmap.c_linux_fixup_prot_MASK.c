
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; } ;
struct linux_pemuldata {int persona; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct linux_pemuldata* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_4, int *VAR_5)
{
 struct linux_pemuldata *VAR_6;

 if (FUNC_0(VAR_4->td_proc, VAR_3) && *VAR_5 & VAR_2) {
  VAR_6 = FUNC_1(VAR_4->td_proc);
  if (VAR_6->persona & VAR_0)
   *VAR_5 |= VAR_1;
 }

}
