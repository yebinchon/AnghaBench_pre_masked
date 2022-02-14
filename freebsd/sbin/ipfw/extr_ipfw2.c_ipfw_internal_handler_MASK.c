
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;




 int FUNC_1 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char**) ;
 int FUNC_6 (int ,char*) ;

void
FUNC_7(int VAR_2, char *VAR_3[])
{
 int VAR_4;

 VAR_2--; VAR_3++;
 FUNC_0("internal cmd required");

 if ((VAR_4 = FUNC_6(VAR_1, *VAR_3)) == -1)
  FUNC_1(VAR_0, "invalid internal sub-cmd: %s", *VAR_3);

 switch (VAR_4) {
 case 131:
  FUNC_4();
  break;
 case 129:
  FUNC_3(VAR_2, VAR_3);
  break;
 case 130:
  FUNC_2(VAR_2, VAR_3);
  break;
 case 128:
  FUNC_5(VAR_2, VAR_3);
  break;
 }
}
