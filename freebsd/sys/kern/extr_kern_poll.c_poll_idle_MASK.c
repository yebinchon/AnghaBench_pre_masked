
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; } ;
struct rtprio {int type; int prio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct thread* VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (struct rtprio*,struct thread*) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 (int*,int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct thread *VAR_9 = VAR_3;
 struct rtprio VAR_10;

 VAR_10.prio = VAR_1;
 VAR_10.type = VAR_0;
 FUNC_0(VAR_9->td_proc);
 FUNC_4(&VAR_10, VAR_9);
 FUNC_1(VAR_9->td_proc);

 for (;;) {
  if (VAR_8 && VAR_7 > 0) {
   VAR_5 = 0;
   FUNC_2(VAR_6);
   FUNC_5(VAR_9);
   FUNC_3(VAR_2, ((void*)0));
   FUNC_6(VAR_9);
  } else {
   VAR_5 = 1;
   FUNC_7(&VAR_5, 0, "pollid", VAR_4 * 3);
  }
 }
}
