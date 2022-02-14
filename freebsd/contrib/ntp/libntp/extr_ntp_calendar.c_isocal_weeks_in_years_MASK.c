
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;


 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;

int32_t
FUNC_3(
 int32_t VAR_0
 )
{



 static const uint16_t VAR_1[4] = { 157, 449, 597, 889 };

 int32_t VAR_2, VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_0);
 VAR_6 = FUNC_1(VAR_0);


 VAR_4 = VAR_7 ^ ((VAR_7 ^ VAR_6) / 100u);
 VAR_6 -= VAR_4 * 100u;
 VAR_5 = VAR_4 * 3u + 1;
 VAR_2 = FUNC_2(VAR_7 ^ ((VAR_7 ^ VAR_5) / 4u));
 VAR_5 = VAR_5 % 4u;





 VAR_3 = (VAR_6 * 53431u + VAR_1[VAR_5]) / 1024u;

 return FUNC_2(VAR_4) * 5217 + VAR_2 + VAR_3;
}
