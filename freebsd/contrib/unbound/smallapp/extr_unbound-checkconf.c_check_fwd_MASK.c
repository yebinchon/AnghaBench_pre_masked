
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_forwards {int dummy; } ;
struct config_file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct iter_forwards*,struct config_file*) ;
 struct iter_forwards* FUNC_2 () ;
 int FUNC_3 (struct iter_forwards*) ;

__attribute__((used)) static void
FUNC_4(struct config_file* VAR_0)
{
 struct iter_forwards* VAR_1 = FUNC_2();
 if(!VAR_1 || !FUNC_1(VAR_1, VAR_0)) {
  FUNC_0("Could not set forward zones");
 }
 FUNC_3(VAR_1);
}
