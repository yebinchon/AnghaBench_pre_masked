
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ,...) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 int VAR_13;





 FUNC_6(VAR_10);
 if ((VAR_13 = FUNC_5(VAR_10, VAR_5 | VAR_4)) != -1) {
  (void)FUNC_3(VAR_13, VAR_1, FUNC_3(VAR_13, VAR_0) & ~VAR_4);
  if (FUNC_4(VAR_13) == 0)
   return;
  FUNC_1(VAR_13);
 }


 if ((VAR_13 = FUNC_5(VAR_11, VAR_5)) == -1) {
  FUNC_7("cannot open null device.");
  FUNC_0(1);
 }
 if (VAR_13 != VAR_8) {
  FUNC_2(VAR_13, VAR_8);
  FUNC_1(VAR_13);
 }
 VAR_13 = FUNC_5(VAR_12, VAR_6 | VAR_2 | VAR_3, 0644);
 if (VAR_13 == -1)
  FUNC_2(VAR_8, VAR_9);
 else if (VAR_13 != VAR_9) {
  FUNC_2(VAR_13, VAR_9);
  FUNC_1(VAR_13);
 }
 FUNC_2(VAR_9, VAR_7);
}
