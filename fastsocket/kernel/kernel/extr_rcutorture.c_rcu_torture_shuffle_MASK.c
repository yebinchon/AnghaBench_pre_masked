
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(void *VAR_2)
{
 FUNC_0("rcu_torture_shuffle task started");
 do {
  FUNC_4(VAR_1 * VAR_0);
  FUNC_2();
  FUNC_3("rcu_torture_shuffle");
 } while (!FUNC_1());
 FUNC_0("rcu_torture_shuffle task stopping");
 return 0;
}
