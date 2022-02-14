
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gsched_unregparm {int gup_error; struct g_gsched* gup_gsp; } ;
struct g_gsched {int gs_name; } ;
typedef int module_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;


 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct g_gsched*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,struct g_gsched_unregparm*,int ,int *) ;

int
FUNC_5(module_t VAR_4, int VAR_5, void *VAR_6)
{
 struct g_gsched *VAR_7 = VAR_6;
 struct g_gsched_unregparm VAR_8;
 int VAR_9;

 FUNC_0(0, "Modevent %d.", VAR_5);






 FUNC_1();

 VAR_9 = VAR_0;
 switch (VAR_5) {
 case 129:
  VAR_9 = FUNC_2(VAR_7);
  FUNC_0(0, "Loaded module %s error %d.",
      VAR_7->gs_name, VAR_9);
  if (VAR_9 == 0)
   FUNC_3(&VAR_3);
  break;

 case 128:
  VAR_8.gup_gsp = VAR_7;
  VAR_8.gup_error = 0;

  VAR_9 = FUNC_4(VAR_2,
      &VAR_8, VAR_1, ((void*)0));
  if (VAR_9 == 0)
   VAR_9 = VAR_8.gup_error;
  FUNC_0(0, "Unloaded module %s error %d.",
      VAR_7->gs_name, VAR_9);
  break;
 }

 return (VAR_9);
}
