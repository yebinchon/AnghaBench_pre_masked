
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef unsigned int u_int ;
typedef enum dbg_t { ____Placeholder_dbg_t } dbg_t ;
typedef int db_expr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (char*) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static u_int
FUNC_2(enum dbg_t VAR_7, db_expr_t VAR_8)
{
 uint32_t VAR_9, VAR_10;
 u_int VAR_11, VAR_12;

 switch(VAR_7) {
 case 129:
  VAR_11 = VAR_5;
  VAR_9 = VAR_1;
  VAR_10 = VAR_0;
  break;
 case 128:
  VAR_11 = VAR_6;
  VAR_9 = VAR_3;
  VAR_10 = VAR_2;
  break;
 default:
  FUNC_0("Unsupported debug type\n");
  return (~0U);
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  if ((FUNC_1(VAR_9, VAR_12) == VAR_8) &&
      ((FUNC_1(VAR_10, VAR_12) & VAR_4) != 0))
   return (VAR_12);
 }

 return (~0U);
}
