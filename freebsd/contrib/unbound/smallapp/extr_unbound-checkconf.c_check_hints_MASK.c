
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_hints {int dummy; } ;
struct config_file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct iter_hints*,struct config_file*) ;
 struct iter_hints* FUNC_2 () ;
 int FUNC_3 (struct iter_hints*) ;

__attribute__((used)) static void
FUNC_4(struct config_file* VAR_0)
{
 struct iter_hints* VAR_1 = FUNC_2();
 if(!VAR_1 || !FUNC_1(VAR_1, VAR_0)) {
  FUNC_0("Could not set root or stub hints");
 }
 FUNC_3(VAR_1);
}
