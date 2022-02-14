
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int low; int high; } ;
typedef TYPE_1__ double_int ;


 TYPE_1__ FUNC_0 (unsigned int) ;

double_int
FUNC_1 (double_int VAR_0, unsigned VAR_1)
{
  double_int VAR_2 = FUNC_0 (VAR_1);
  double_int VAR_3;

  VAR_3.low = VAR_0.low & VAR_2.low;
  VAR_3.high = VAR_0.high & VAR_2.high;

  return VAR_3;
}
