
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct pcpu_state {int nextcallopt; int nextcall; int nextevent; int handle; } ;
typedef int sbintime_t ;
struct TYPE_2__ {int et_flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,int,int ,int,int ) ;
 struct pcpu_state* FUNC_2 (int,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct pcpu_state*) ;
 int FUNC_4 (struct pcpu_state*) ;
 int VAR_1 ;
 int FUNC_5 (int,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 () ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;

void
FUNC_9(int VAR_8, sbintime_t VAR_9, sbintime_t VAR_10)
{
 struct pcpu_state *VAR_11;


 if (VAR_3)
  return;
 FUNC_1(VAR_2, "new co at %d:    on %d at %d.%08x - %d.%08x",
     VAR_4, VAR_8, (int)(VAR_10 >> 32), (u_int)(VAR_10 & 0xffffffff),
     (int)(VAR_9 >> 32), (u_int)(VAR_9 & 0xffffffff));

 FUNC_5(!FUNC_0(VAR_8), ("Absent CPU %d", VAR_8));
 VAR_11 = FUNC_2(VAR_8, VAR_7);
 FUNC_3(VAR_11);
 VAR_11->nextcallopt = VAR_10;
 if (VAR_9 >= VAR_11->nextcall)
  goto done;
 VAR_11->nextcall = VAR_9;

 if (VAR_9 >= VAR_11->nextevent)
  goto done;
 VAR_11->nextevent = VAR_9;

 if (VAR_5)
  goto done;

 if ((VAR_6->et_flags & VAR_0) == 0 || VAR_8 == VAR_4) {
  FUNC_7(FUNC_8(), 0);
done:
  FUNC_4(VAR_11);
  return;
 }

 VAR_11->handle = 1;
 FUNC_4(VAR_11);



}
