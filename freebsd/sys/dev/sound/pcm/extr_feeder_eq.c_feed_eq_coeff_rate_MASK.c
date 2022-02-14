
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct feed_eq_coeff {int dummy; } ;
struct TYPE_2__ {scalar_t__ rate; struct feed_eq_coeff* coeff; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static struct feed_eq_coeff *
FUNC_0(uint32_t VAR_5)
{
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 if (VAR_5 < VAR_1 || VAR_5 > VAR_0)
  return (((void*)0));





 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_6 = VAR_3[VAR_8].rate;
  VAR_7 = VAR_6 + ((VAR_8 < (VAR_2 - 1) &&
      VAR_3[VAR_8 + 1].rate > VAR_6) ?
      ((VAR_3[VAR_8 + 1].rate - VAR_6) >> 1) : 0);
  if (VAR_5 == VAR_6 ||
      (VAR_4 == 0 && VAR_5 <= VAR_7))
   return (VAR_3[VAR_8].coeff);
 }

 return (((void*)0));
}
