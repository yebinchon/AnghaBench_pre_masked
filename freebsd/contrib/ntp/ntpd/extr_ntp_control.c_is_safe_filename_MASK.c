
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;
typedef int chclass ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(const char * VAR_2)
{
 static const uint32_t VAR_3[8] = {
  0x00000000, 0x00000000,
  0x28800000, 0x000FFFFF,
  0xFFFFFFFC, 0xC03FFFFF,
  0xFFFFFFFC, 0x003FFFFF
 };

 u_int VAR_4, VAR_5, VAR_6;
 if ( ! (VAR_2 && *VAR_2))
  return VAR_0;

 VAR_6 = 1u;
 while (0 != (VAR_4 = (u_char)*VAR_2++)) {
  VAR_5 = (VAR_4 & 15) << 1;
  VAR_4 = VAR_4 >> 4;
  if (VAR_4 >= sizeof(VAR_3)/sizeof(VAR_3[0]))
   return VAR_0;
  if (0 == ((VAR_3[VAR_4] >> VAR_5) & VAR_6))
   return VAR_0;
  VAR_6 = 2u;
 }
 return VAR_1;
}
