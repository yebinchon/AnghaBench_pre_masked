
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int32_t
FUNC_3(
 int32_t VAR_3[3],
 int32_t VAR_4
 )
{




 uint32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_9 = FUNC_0(VAR_4);
 VAR_5 = FUNC_1(VAR_4);

 VAR_6 = (VAR_9 ^ VAR_5) / VAR_2;
 VAR_7 = VAR_6 / VAR_1;
 VAR_8 = VAR_7 / VAR_0;

 VAR_6 ^= VAR_9;
 VAR_7 ^= VAR_9;
 VAR_8 ^= VAR_9;

 VAR_3[0] = (int32_t)(VAR_7 - VAR_8 * VAR_0 );
 VAR_3[1] = (int32_t)(VAR_6 - VAR_7 * VAR_1 );
 VAR_3[2] = (int32_t)(VAR_5 - VAR_6 * VAR_2);

 return FUNC_2(VAR_8);
}
