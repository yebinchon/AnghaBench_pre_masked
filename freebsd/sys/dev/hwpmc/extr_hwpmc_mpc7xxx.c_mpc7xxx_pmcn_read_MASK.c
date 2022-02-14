
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pmc_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static pmc_value_t
FUNC_2(unsigned int VAR_6)
{
 switch (VAR_6) {
  case 0:
   return FUNC_0(VAR_0);
   break;
  case 1:
   return FUNC_0(VAR_1);
   break;
  case 2:
   return FUNC_0(VAR_2);
   break;
  case 3:
   return FUNC_0(VAR_3);
   break;
  case 4:
   return FUNC_0(VAR_4);
   break;
  case 5:
   return FUNC_0(VAR_5);
  default:
   FUNC_1("Invalid PMC number: %d\n", VAR_6);
 }
}
