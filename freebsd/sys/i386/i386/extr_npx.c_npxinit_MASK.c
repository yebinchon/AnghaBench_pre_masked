
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union savefpu {int dummy; } savefpu ;
typedef int u_short ;
typedef int u_int ;
typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (union savefpu*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

void
FUNC_14(bool VAR_7)
{
 static union savefpu VAR_8;
 register_t VAR_9;
 u_int VAR_10;
 u_short VAR_11;

 if (VAR_7) {
  if (!FUNC_8())
   return;
  FUNC_9();
 }

 if (VAR_5) {
  FUNC_6(FUNC_11() | VAR_0);
  FUNC_7(VAR_1, VAR_6);
 }




 if (VAR_7)
  FUNC_10();
 VAR_9 = FUNC_3();
 FUNC_13();
 if (VAR_4)
  FUNC_1();
 else
  FUNC_2(&VAR_8);
 VAR_11 = VAR_3;
 FUNC_0(VAR_11);
 if (VAR_4) {
  VAR_10 = VAR_2;
  FUNC_5(VAR_10);
 }
 FUNC_12();
 FUNC_4(VAR_9);
}
