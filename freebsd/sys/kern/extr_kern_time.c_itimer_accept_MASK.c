
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc {int dummy; } ;
struct itimer {scalar_t__ it_overrun; scalar_t__ it_overrun_last; } ;
struct TYPE_3__ {scalar_t__ ksi_overrun; } ;
typedef TYPE_1__ ksiginfo_t ;


 int VAR_0 ;
 int FUNC_0 (struct itimer*) ;
 int VAR_1 ;
 int FUNC_1 (struct proc*,int ) ;
 struct itimer* FUNC_2 (struct proc*,int) ;

int
FUNC_3(struct proc *VAR_2, int VAR_3, ksiginfo_t *VAR_4)
{
 struct itimer *VAR_5;

 FUNC_1(VAR_2, VAR_1);
 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5 != ((void*)0)) {
  VAR_4->ksi_overrun = VAR_5->it_overrun;
  VAR_5->it_overrun_last = VAR_5->it_overrun;
  VAR_5->it_overrun = 0;
  FUNC_0(VAR_5);
  return (0);
 }
 return (VAR_0);
}
