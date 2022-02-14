
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,...) ;

void FUNC_1(char *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4 = *(int *)VAR_2;

 switch (VAR_4) {
 case 0:
  FUNC_0(VAR_0, VAR_1, "NoChange");
  break;
 case 1:
  FUNC_0(VAR_0, VAR_1, "Sleep");
  break;
 case 2:
  FUNC_0(VAR_0, VAR_1, "Polling");
  break;
 case 3:
  FUNC_0(VAR_0, VAR_1, "Disabled");
  break;
 case 4:
  FUNC_0(VAR_0, VAR_1, "PortConfigurationTraining");
  break;
 case 5:
  FUNC_0(VAR_0, VAR_1, "LinkUp");
  break;
 case 6:
  FUNC_0(VAR_0, VAR_1, "LinkErrorRecovery");
  break;
 case 7:
  FUNC_0(VAR_0, VAR_1, "PhyTest");
  break;
 default:
  FUNC_0(VAR_0, VAR_1, "?(%d)", VAR_4);
 }
}
