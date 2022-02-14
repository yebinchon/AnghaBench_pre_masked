
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*) ;

int
FUNC_5(int VAR_1, char *VAR_2[])
{
 if (VAR_1 < 2)
  FUNC_1();

 if (FUNC_4(VAR_2[1], "total") == 0) {
  FUNC_3();
 } else if (FUNC_4(VAR_2[1], "list") == 0) {
  if (VAR_1 == 2)
   FUNC_2(0);
  else if (VAR_1 == 3)
   FUNC_2(FUNC_0(VAR_2[2]));
  else
   FUNC_1();
 } else
  FUNC_1();

 return VAR_0;
}
