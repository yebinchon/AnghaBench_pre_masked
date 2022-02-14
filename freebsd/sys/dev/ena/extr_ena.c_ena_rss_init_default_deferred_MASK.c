
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int pdev; } ;
typedef int * devclass_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ena_adapter*) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 struct ena_adapter* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct ena_adapter*) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(void *VAR_2)
{
 struct ena_adapter *VAR_3;
 devclass_t VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2("ena");
 if (FUNC_8(VAR_4 == ((void*)0))) {
  FUNC_7(VAR_0, "No devclass ena\n");
  return;
 }

 VAR_5 = FUNC_3(VAR_4);
 while (VAR_5-- >= 0) {
  VAR_3 = FUNC_4(VAR_4, VAR_5);
  if (VAR_3 != ((void*)0)) {
   VAR_6 = FUNC_6(VAR_3);
   FUNC_1(VAR_1, VAR_3);
   if (FUNC_8(VAR_6 != 0)) {
    FUNC_5(VAR_3->pdev,
        "WARNING: RSS was not properly initialized,"
        " it will affect bandwidth\n");
    FUNC_0(VAR_1, VAR_3);
   }
  }
 }
}
