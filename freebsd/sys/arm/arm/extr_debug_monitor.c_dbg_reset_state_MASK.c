
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 size_t VAR_7 ;
 int FUNC_6 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int FUNC_7 (int ,size_t,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(void)
{
 u_int VAR_11;
 size_t VAR_12;
 int VAR_13;

 VAR_11 = FUNC_0(VAR_11);
 VAR_13 = 0;

 switch (VAR_8) {
 case 131:
 case 130:




  VAR_13 = FUNC_6();
  if (VAR_13 != 0)
   return (VAR_13);
  goto vectr_clr;
 case 129:

  if ((FUNC_3() & VAR_1) == 0)
   VAR_13 = VAR_6;

  if (VAR_13 != 0)
   break;

  if (VAR_9)
   goto vectr_clr;
  break;
 case 128:

  if ((FUNC_1() & VAR_0) != 0)
   VAR_13 = VAR_6;

  break;
 default:
  break;
 }

 if (VAR_13 != 0) {
  FUNC_5("Debug facility locked (CPU%d)\n", VAR_11);
  return (VAR_13);
 }





 if (((VAR_8 & 128) != 0) || VAR_9) {




  FUNC_2(0);
  FUNC_8();
 }

vectr_clr:





 FUNC_4(0);
 FUNC_8();
 for (VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12) {
  FUNC_7(VAR_4, VAR_12, 0);
  FUNC_7(VAR_5, VAR_12, 0);
 }

 for (VAR_12 = 0; VAR_12 < VAR_7; ++VAR_12) {
  FUNC_7(VAR_2, VAR_12, 0);
  FUNC_7(VAR_3, VAR_12, 0);
 }

 return (0);
}
