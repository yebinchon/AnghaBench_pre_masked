
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(unsigned int VAR_4, uint32_t VAR_5)
{
 switch (VAR_4) {
  case 0:
   FUNC_0(VAR_0, VAR_5);
   break;
  case 1:
   FUNC_0(VAR_1, VAR_5);
   break;
  case 2:
   FUNC_0(VAR_2, VAR_5);
   break;
  case 3:
   FUNC_0(VAR_3, VAR_5);
   break;
  default:
   FUNC_1("Invalid PMC number: %d\n", VAR_4);
 }
}
