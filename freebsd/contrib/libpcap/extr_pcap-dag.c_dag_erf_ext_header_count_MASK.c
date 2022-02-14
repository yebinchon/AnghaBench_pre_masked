
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static unsigned int
FUNC_0(uint8_t * VAR_0, size_t VAR_1)
{
 uint32_t VAR_2 = 0;
 uint8_t VAR_3;


 if ( VAR_0 == ((void*)0) )
  return 0;
 if ( VAR_1 < 16 )
  return 0;


 if ( (VAR_0[8] & 0x80) == 0x00 )
  return 0;


 do {


  if ( VAR_1 < (24 + (VAR_2 * 8)) )
   return VAR_2;


  VAR_3 = VAR_0[(16 + (VAR_2 * 8))];
  VAR_2++;

 } while ( VAR_3 & 0x80 );

 return VAR_2;
}
