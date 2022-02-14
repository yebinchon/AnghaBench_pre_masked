
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(int VAR_4, char *VAR_5[])
{
 int VAR_6;

 if ((VAR_3 = FUNC_1()) == 0) {
  VAR_2 = "no U-Boot devices found!?";
  return (VAR_0);
 }

 FUNC_0("U-Boot devices:\n");
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_2(VAR_6);
  FUNC_0("\n");
 }
 return (VAR_1);
}
