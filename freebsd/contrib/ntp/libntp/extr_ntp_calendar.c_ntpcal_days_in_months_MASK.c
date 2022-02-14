
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_3__ {int lo; int hi; } ;
typedef TYPE_1__ ntpcal_split ;
typedef int int32_t ;


 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int* VAR_0 ;
 scalar_t__ FUNC_2 (unsigned int) ;

ntpcal_split
FUNC_3(
 int32_t VAR_1
 )
{
 ntpcal_split VAR_2;


 VAR_2.lo = VAR_1 + 10;
 VAR_2.hi = (VAR_2.lo >= 12);
 if (VAR_2.hi)
  VAR_2.lo -= 12;


 if (VAR_2.lo < 0 || VAR_2.lo >= 12) {
  uint32_t VAR_3, VAR_4, VAR_5;
  VAR_5 = FUNC_0(VAR_2.lo);
  VAR_3 = FUNC_1(VAR_2.lo);
  VAR_4 = VAR_5 ^ ((VAR_5 ^ VAR_3) / 12u);
  VAR_2.hi += FUNC_2(VAR_4);
  VAR_2.lo = VAR_3 - VAR_4 * 12u;
 }


 VAR_2.lo = VAR_0[VAR_2.lo] - 306;

 return VAR_2;
}
