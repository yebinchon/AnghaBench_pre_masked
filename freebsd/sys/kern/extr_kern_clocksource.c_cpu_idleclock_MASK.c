
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct pcpu_state {int now; int idle; int nextevent; } ;
typedef int sbintime_t ;
struct TYPE_2__ {int et_flags; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,scalar_t__,int,int ) ;
 struct pcpu_state* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct pcpu_state*) ;
 int FUNC_4 (struct pcpu_state*) ;
 int VAR_1 ;
 int FUNC_5 (int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 () ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;

sbintime_t
FUNC_9(void)
{
 sbintime_t VAR_8, VAR_9;
 struct pcpu_state *VAR_10;

 if (VAR_4 || VAR_2 ||
     (VAR_5 && (VAR_6->et_flags & VAR_0))



     )
  return (-1);
 VAR_10 = FUNC_2(VAR_7);
 if (VAR_5)
  VAR_8 = VAR_10->now;
 else
  VAR_8 = FUNC_8();
 FUNC_1(VAR_1, "idle at %d:    now  %d.%08x",
     VAR_3, (int)(VAR_8 >> 32), (u_int)(VAR_8 & 0xffffffff));
 VAR_9 = FUNC_6(1);
 FUNC_3(VAR_10);
 VAR_10->idle = 1;
 VAR_10->nextevent = VAR_9;
 if (!VAR_5)
  FUNC_7(VAR_8, 0);
 FUNC_4(VAR_10);
 return (FUNC_5(VAR_9 - VAR_8, 0));
}
