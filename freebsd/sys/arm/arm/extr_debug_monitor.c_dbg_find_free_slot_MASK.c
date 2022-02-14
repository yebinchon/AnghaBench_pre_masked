
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int ;
typedef enum dbg_t { ____Placeholder_dbg_t } dbg_t ;




 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int,unsigned int) ;
 unsigned int VAR_1 ;

__attribute__((used)) static u_int
FUNC_2(enum dbg_t VAR_2)
{
 u_int VAR_3, VAR_4;

 switch(VAR_2) {
 case 129:
  VAR_3 = VAR_0;
  break;
 case 128:
  VAR_3 = VAR_1;
  break;
 default:
  FUNC_0("Unsupported debug type\n");
  return (~0U);
 }

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (FUNC_1(VAR_2, VAR_4))
   return (VAR_4);
 }

 return (~0U);
}
