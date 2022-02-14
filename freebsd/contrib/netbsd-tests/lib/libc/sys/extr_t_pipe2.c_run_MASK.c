
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(int VAR_9)
{
 int VAR_10[2], VAR_11;

 while ((VAR_11 = FUNC_5("/", VAR_7)) < 3)
  FUNC_0(VAR_11 != -1);




 FUNC_1(FUNC_3(3) != -1, "closefrom failed: %s",
     FUNC_7(VAR_8));


 FUNC_0(FUNC_6(VAR_10, VAR_9) == 0);

 FUNC_0(VAR_10[0] == 3);
 FUNC_0(VAR_10[1] == 4);

 if (VAR_9 & VAR_4) {
  FUNC_0((FUNC_4(VAR_10[0], VAR_1) & VAR_0) != 0);
  FUNC_0((FUNC_4(VAR_10[1], VAR_1) & VAR_0) != 0);
 } else {
  FUNC_0((FUNC_4(VAR_10[0], VAR_1) & VAR_0) == 0);
  FUNC_0((FUNC_4(VAR_10[1], VAR_1) & VAR_0) == 0);
 }

 if (VAR_9 & VAR_5) {
  FUNC_0((FUNC_4(VAR_10[0], VAR_2) & VAR_5) != 0);
  FUNC_0((FUNC_4(VAR_10[1], VAR_2) & VAR_5) != 0);
 } else {
  FUNC_0((FUNC_4(VAR_10[0], VAR_2) & VAR_5) == 0);
  FUNC_0((FUNC_4(VAR_10[1], VAR_2) & VAR_5) == 0);
 }


 if (VAR_9 & VAR_6) {
  FUNC_0(FUNC_4(VAR_10[0], VAR_3) != 0);
  FUNC_0(FUNC_4(VAR_10[1], VAR_3) != 0);
 } else {
  FUNC_0(FUNC_4(VAR_10[0], VAR_3) == 0);
  FUNC_0(FUNC_4(VAR_10[1], VAR_3) == 0);
 }


 FUNC_0(FUNC_2(VAR_10[0]) != -1);
 FUNC_0(FUNC_2(VAR_10[1]) != -1);
}
