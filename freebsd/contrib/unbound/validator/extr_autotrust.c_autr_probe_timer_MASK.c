
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct trust_anchor {int dummy; } ;
struct module_env {int scratch; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct module_env*,struct trust_anchor*) ;
 int FUNC_1 (int ) ;
 struct trust_anchor* FUNC_2 (struct module_env*,int*) ;
 int FUNC_3 (int ,char*,...) ;

time_t
FUNC_4(struct module_env* VAR_2)
{
 struct trust_anchor* VAR_3;
 time_t VAR_4 = 3600;
 int VAR_5 = 0;
 if(VAR_1) VAR_4 = 1;
 FUNC_3(VAR_0, "autotrust probe timer callback");

 while( (VAR_3 = FUNC_2(VAR_2, &VAR_4)) ) {

  FUNC_0(VAR_2, VAR_3);
  VAR_5++;
 }
 FUNC_1(VAR_2->scratch);
 if(VAR_4 == 0)
  return 0;
 FUNC_3(VAR_0, "autotrust probe timer %d callbacks done", VAR_5);
 return VAR_4;
}
