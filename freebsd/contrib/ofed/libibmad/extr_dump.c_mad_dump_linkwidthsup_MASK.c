
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (char*) ;

void FUNC_3(char *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4 = *(int *)VAR_2;

 FUNC_0(VAR_0, VAR_1, VAR_4);

 switch (VAR_4) {
 case 1:
 case 3:
 case 7:
 case 11:
 case 15:
 case 17:
 case 19:
 case 23:
 case 27:
 case 31:
  break;

 default:
  if (!(VAR_4 >> 5))
   FUNC_1(VAR_0 + FUNC_2(VAR_0), VAR_1 - FUNC_2(VAR_0),
     " (IBA extension)");
  break;
 }
}
