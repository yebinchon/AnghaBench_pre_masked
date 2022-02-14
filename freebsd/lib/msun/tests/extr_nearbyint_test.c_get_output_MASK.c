
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* out; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static float
FUNC_0(int VAR_1, int VAR_2, int VAR_3)
{
 double VAR_4;

 if (VAR_3) {
  if (VAR_2 == 1)
   VAR_2 = 2;
  else if (VAR_2 == 2)
   VAR_2 = 1;
 }
 if (VAR_2 == 3)
  VAR_2 = 1;
 VAR_4 = VAR_0[VAR_1].out[VAR_2];
 return (VAR_3 ? -VAR_4 : VAR_4);
}
