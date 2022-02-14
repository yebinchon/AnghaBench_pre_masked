
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int hi; unsigned int lo; } ;
typedef TYPE_1__ ntpcal_split ;
typedef size_t int32_t ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (int ,unsigned int) ;

ntpcal_split
FUNC_4(
 int32_t VAR_1
 )
{




 static const uint16_t VAR_2[4] = { 85, 130, 17, 62 };

 ntpcal_split VAR_3;
 int32_t VAR_4, VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
 VAR_9 = FUNC_0(VAR_1);
 VAR_6 = FUNC_3(FUNC_1(VAR_1), VAR_9);
 VAR_6 = 4u * VAR_6 + 2;
 VAR_8 = VAR_9 ^ ((VAR_9 ^ VAR_6) / VAR_0);
 VAR_6 -= VAR_8 * VAR_0;
 VAR_5 = VAR_8 % 4u;
 VAR_4 = FUNC_2(VAR_8);




 VAR_6 = (VAR_6 / 4u) * 157u + VAR_2[VAR_5];
 VAR_7 = VAR_6 / 8192u;
 VAR_6 = VAR_6 % 8192u;




 VAR_3.hi = 100*VAR_4 + VAR_7;
 VAR_3.lo = VAR_6 / 157u;

 return VAR_3;
}
