
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct views {int dummy; } ;
struct respip_set {int dummy; } ;
struct config_file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct respip_set*,struct config_file*) ;
 struct respip_set* FUNC_2 () ;
 int FUNC_3 (struct respip_set*) ;
 int FUNC_4 (struct views*,struct config_file*,int*) ;
 int FUNC_5 (struct views*,struct config_file*) ;
 struct views* FUNC_6 () ;
 int FUNC_7 (struct views*) ;

__attribute__((used)) static void
FUNC_8(struct config_file* VAR_0)
{
 struct views* VAR_1 = ((void*)0);
 struct respip_set* VAR_2 = ((void*)0);
 int VAR_3 = 0;
 if(!(VAR_1 = FUNC_6()))
  FUNC_0("Could not create views: out of memory");
 if(!(VAR_2 = FUNC_2()))
  FUNC_0("Could not create respip set: out of memory");
 if(!FUNC_5(VAR_1, VAR_0))
  FUNC_0("Could not set up views");
 if(!FUNC_1(VAR_2, VAR_0))
  FUNC_0("Could not setup respip set");
 if(!FUNC_4(VAR_1, VAR_0, &VAR_3))
  FUNC_0("Could not setup per-view respip sets");
 FUNC_7(VAR_1);
 FUNC_3(VAR_2);
}
