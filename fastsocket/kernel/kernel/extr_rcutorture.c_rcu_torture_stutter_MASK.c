
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(void *VAR_3)
{
 FUNC_0("rcu_torture_stutter task started");
 do {
  FUNC_3(VAR_1 * VAR_0);
  VAR_2 = 1;
  if (!FUNC_1())
   FUNC_3(VAR_1 * VAR_0);
  VAR_2 = 0;
  FUNC_2("rcu_torture_stutter");
 } while (!FUNC_1());
 FUNC_0("rcu_torture_stutter task stopping");
 return 0;
}
