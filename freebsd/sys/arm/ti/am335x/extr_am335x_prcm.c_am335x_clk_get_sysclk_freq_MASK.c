
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_clock_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct ti_clock_dev *VAR_2, unsigned int *VAR_3)
{
 uint32_t VAR_4;


 if (FUNC_0(VAR_1, &VAR_4))
  return (VAR_0);

 switch ((VAR_4>>22) & 0x3) {
 case 0x0:

  *VAR_3 = 19200000;
  break;
 case 0x1:

  *VAR_3 = 24000000;
  break;
 case 0x2:

  *VAR_3 = 25000000;
  break;
 case 0x3:

  *VAR_3 = 26000000;
  break;
 }

 return (0);
}
