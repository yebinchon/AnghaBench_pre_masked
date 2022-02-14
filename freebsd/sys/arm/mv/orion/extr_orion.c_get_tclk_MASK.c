
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (char*) ;

uint32_t
FUNC_2(void)
{
 uint32_t VAR_7;






 VAR_7 = FUNC_0(VAR_6, VAR_0, VAR_1);
 VAR_7 = (VAR_7 & VAR_4) >> VAR_5;
 switch (VAR_7) {
 case 1:
  return (VAR_2);
 case 2:
  return (VAR_3);
 default:
  FUNC_1("Unknown TCLK settings!");
 }
}
