
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct vt_window {scalar_t__ vw_pid; TYPE_1__ vw_smode; struct proc* vw_proc; } ;
struct proc {int dummy; } ;


 int FUNC_0 (int,char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct proc* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct vt_window *VAR_4)
{
 struct proc *VAR_5;

 if (VAR_4->vw_smode.mode != VAR_3)
  return (VAR_0);

 if (VAR_4->vw_proc) {
  if ((VAR_5 = FUNC_2(VAR_4->vw_pid)) != ((void*)0))
   FUNC_1(VAR_5);
  if (VAR_4->vw_proc == VAR_5)
   return (VAR_1);
  VAR_4->vw_proc = ((void*)0);
  VAR_4->vw_smode.mode = VAR_2;
  FUNC_0(1, "vt controlling process %d died\n", VAR_4->vw_pid);
  VAR_4->vw_pid = 0;
 }
 return (VAR_0);
}
