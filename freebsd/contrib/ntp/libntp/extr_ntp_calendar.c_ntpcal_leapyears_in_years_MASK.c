
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int int32_t ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;

int32_t
FUNC_3(
 int32_t VAR_0
 )
{






 uint32_t VAR_1, VAR_2, VAR_3;

 VAR_1 = FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_0);
 VAR_3 ^= VAR_1;

 VAR_2 = (VAR_3 /= 4u);
 VAR_2 -= (VAR_3 /= 25u);
 VAR_2 += (VAR_3 /= 4u);







 return FUNC_2(VAR_1 ^ VAR_2);
}
