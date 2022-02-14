
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* left_levels; int* right_levels; } ;


 int VAR_0 ;







 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{
 if (VAR_2 > 31)
  return -VAR_0;

 switch (VAR_2) {
 case 128:
 case 130:
 case 133:
 case 134:
 case 132:

 case 131:
 case 129:

  return (VAR_1.left_levels[VAR_2] >> 8) * 100 / 0xff |
   (((VAR_1.right_levels[VAR_2] >> 8) * 100 / 0xff) << 8);
 default:
  return 0;
 }
}
