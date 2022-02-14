
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 int VAR_3;
 u_int VAR_4;

 VAR_3 = FUNC_0();
 if (VAR_3 != 128 &&
     VAR_3 != 129) {
  return;
 }

 switch (VAR_3) {
 case 128:
  VAR_4 =VAR_1;
  break;
 case 129:
  VAR_4 = VAR_0;
  break;
 default:
  VAR_4 = FUNC_1();
  break;
 }

 if (FUNC_1() != VAR_4) {
  FUNC_2(VAR_4);
 }
}
