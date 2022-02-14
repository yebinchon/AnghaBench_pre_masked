
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline void
FUNC_2(uint8_t VAR_0)
{

 switch (FUNC_0(VAR_0)) {
 case 0:
  FUNC_1("RSVD\n");
  break;
 case 1:
  FUNC_1("Master Abort\n");
  break;
 case 2:
  FUNC_1("Target Abort\n");
  break;
 case 3:
  FUNC_1("Data Err\n");
  break;
 default:
  break;
 }
}
