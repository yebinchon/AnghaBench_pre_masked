
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_3__ {int hi; unsigned int lo; } ;
typedef TYPE_1__ ntpcal_split ;
typedef int int32_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (int ,unsigned int) ;

ntpcal_split
FUNC_4(
 int32_t VAR_2,
 int *VAR_3
 )
{







 ntpcal_split VAR_4;
 int32_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9;


 VAR_9 = FUNC_0(VAR_2);
 VAR_7 = FUNC_3(FUNC_1(VAR_2), VAR_9);
 VAR_7 = (4u * VAR_7) | 3u;
 VAR_8 = VAR_9 ^ ((VAR_9 ^ VAR_7) / VAR_0);
 VAR_7 = VAR_7 - VAR_8 * VAR_0;
 VAR_5 = FUNC_2(VAR_8);



 VAR_7 |= 3;
 VAR_6 = VAR_7 / VAR_1;
 VAR_7 = VAR_7 % VAR_1;


 VAR_4.hi = VAR_5 * 100 + VAR_6;
 VAR_4.lo = VAR_7 / 4u;







 if (VAR_3)
  *VAR_3 = !((VAR_6+1) & 3)
      && ((VAR_6 != 99) || !((VAR_8+1) & 3));

 return VAR_4;
}
