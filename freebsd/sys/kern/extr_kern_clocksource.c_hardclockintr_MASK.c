
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct pcpu_state {int now; } ;
typedef int sbintime_t ;


 int FUNC_0 (int ,char*,int ,int,int ) ;
 struct pcpu_state* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int VAR_5 ;

int
FUNC_4(void)
{
 sbintime_t VAR_6;
 struct pcpu_state *VAR_7;
 int VAR_8;

 if (FUNC_2() || VAR_3)
  return (VAR_0);
 VAR_7 = FUNC_1(VAR_5);
 VAR_6 = VAR_7->now;
 FUNC_0(VAR_2, "ipi  at %d:    now  %d.%08x",
     VAR_4, (int)(VAR_6 >> 32), (u_int)(VAR_6 & 0xffffffff));
 VAR_8 = FUNC_3(VAR_6, 0);
 return (VAR_8 ? VAR_0 : VAR_1);
}
