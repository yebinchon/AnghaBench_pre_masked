
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ curve_params ;


 int VAR_0 ;
__attribute__((used)) static inline const curve_params *
FUNC_0(int VAR_1)
{
 static const curve_params VAR_2[] = {
  { 135, 136, 134, 0x00000001 },
  { 132, 133, 131, 0x00000001 },
  { 129, 130, 128, 0x00000001 }
 };

 return &VAR_2[VAR_1 - VAR_0];
}
