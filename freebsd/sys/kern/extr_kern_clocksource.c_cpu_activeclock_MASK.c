
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {int td_intr_nesting_level; } ;
struct pcpu_state {scalar_t__ idle; int now; } ;
typedef int sbintime_t ;


 int FUNC_0 (int ,char*,int ,int,int ) ;
 struct pcpu_state* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct thread* VAR_3 ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_5 ;

void
FUNC_6(void)
{
 sbintime_t VAR_6;
 struct pcpu_state *VAR_7;
 struct thread *VAR_8;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7->idle == 0 || VAR_1)
  return;
 if (VAR_4)
  VAR_6 = VAR_7->now;
 else
  VAR_6 = FUNC_3();
 FUNC_0(VAR_0, "active at %d:  now  %d.%08x",
     VAR_2, (int)(VAR_6 >> 32), (u_int)(VAR_6 & 0xffffffff));
 FUNC_4();
 VAR_8 = VAR_3;
 VAR_8->td_intr_nesting_level++;
 FUNC_2(VAR_6, 1);
 VAR_8->td_intr_nesting_level--;
 FUNC_5();
}
