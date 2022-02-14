
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
typedef int pc ;
typedef int db_expr_t ;
typedef int db_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

void
FUNC_11(void)
{
 db_expr_t VAR_7;
 db_addr_t VAR_8, VAR_9;
 uint32_t VAR_10;
 u_int VAR_11;

 if (!FUNC_3())
  return;






 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_10 = FUNC_5(VAR_2, VAR_11);
  if ((VAR_10 & VAR_3) != 0) {
   FUNC_6(VAR_2, VAR_11,
       (VAR_10 & ~VAR_3));
  }
 }

 VAR_8 = FUNC_0();

 VAR_7 = FUNC_2(VAR_8, sizeof(VAR_8), VAR_4);
 if (FUNC_7(VAR_7) || FUNC_8(VAR_7) || FUNC_9(VAR_7)) {
  VAR_9 = FUNC_1(VAR_7, VAR_8);
  FUNC_4(VAR_9, VAR_5, VAR_1);
 }
 VAR_8 = FUNC_10(VAR_8, 0);
 FUNC_4(VAR_8, VAR_5, VAR_0);
}
