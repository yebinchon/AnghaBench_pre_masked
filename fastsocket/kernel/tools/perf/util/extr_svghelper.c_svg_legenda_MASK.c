
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*) ;
 int VAR_0 ;

void FUNC_1(void)
{
 if (!VAR_0)
  return;

 FUNC_0(0, "Running", "sample");
 FUNC_0(100, "Idle","c1");
 FUNC_0(200, "Deeper Idle", "c3");
 FUNC_0(350, "Deepest Idle", "c6");
 FUNC_0(550, "Sleeping", "process2");
 FUNC_0(650, "Waiting for cpu", "waiting");
 FUNC_0(800, "Blocked on IO", "blocked");
}
