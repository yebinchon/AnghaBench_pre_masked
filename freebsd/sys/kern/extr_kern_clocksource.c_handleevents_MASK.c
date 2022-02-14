
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct trapframe {int dummy; } ;
struct pcpu_state {int nexthard; int nextstat; int nextprof; int nextcallopt; int nextcall; int nextevent; scalar_t__ idle; } ;
typedef int sbintime_t ;
struct TYPE_4__ {struct trapframe* td_intr_frame; } ;
struct TYPE_3__ {int et_flags; } ;


 int FUNC_0 (int ,char*,int ,int,int ) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct pcpu_state*) ;
 int FUNC_3 (struct pcpu_state*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct trapframe*) ;
 int FUNC_5 (struct trapframe*) ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int) ;
 int VAR_6 ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_12(sbintime_t VAR_13, int VAR_14)
{
 sbintime_t VAR_15, *VAR_16;
 struct trapframe *VAR_17;
 struct pcpu_state *VAR_18;
 int VAR_19;
 int VAR_20, VAR_21;

 FUNC_0(VAR_1, "handle at %d:  now  %d.%08x",
     VAR_4, (int)(VAR_13 >> 32), (u_int)(VAR_13 & 0xffffffff));
 VAR_20 = 0;
 if (VAR_14) {
  VAR_17 = ((void*)0);
  VAR_19 = 0;
 } else {
  VAR_17 = VAR_5->td_intr_frame;
  VAR_19 = FUNC_5(VAR_17);
 }

 VAR_18 = FUNC_1(VAR_12);

 VAR_21 = 0;
 while (VAR_13 >= VAR_18->nexthard) {
  VAR_18->nexthard += VAR_10;
  VAR_21++;
 }
 if (VAR_21) {
  VAR_16 = FUNC_1(VAR_6);
  *VAR_16 = VAR_18->nexthard - VAR_10;
  if (VAR_14 < 2) {
   FUNC_8(VAR_21, VAR_19);
   VAR_20 = 1;
  }
 }
 VAR_21 = 0;
 while (VAR_13 >= VAR_18->nextstat) {
  VAR_18->nextstat += VAR_9;
  VAR_21++;
 }
 if (VAR_21 && VAR_14 < 2) {
  FUNC_11(VAR_21, VAR_19);
  VAR_20 = 1;
 }
 if (VAR_7) {
  VAR_21 = 0;
  while (VAR_13 >= VAR_18->nextprof) {
   VAR_18->nextprof += VAR_8;
   VAR_21++;
  }
  if (VAR_21 && !VAR_14) {
   FUNC_10(VAR_21, VAR_19, FUNC_4(VAR_17));
   VAR_20 = 1;
  }
 } else
  VAR_18->nextprof = VAR_18->nextstat;
 if (VAR_13 >= VAR_18->nextcallopt || VAR_13 >= VAR_18->nextcall) {
  VAR_18->nextcall = VAR_18->nextcallopt = VAR_2;
  FUNC_6(VAR_13);
 }

 VAR_15 = FUNC_7(0);
 FUNC_2(VAR_18);
 if (!VAR_3) {
  VAR_18->idle = 0;
  VAR_18->nextevent = VAR_15;
  FUNC_9(VAR_13, (VAR_14 == 2) &&
      (VAR_11->et_flags & VAR_0));
 }
 FUNC_3(VAR_18);
 return (VAR_20);
}
