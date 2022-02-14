
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static inline uint32_t FUNC_0( const void *VAR_0 )
{



  const uint8_t *VAR_1 = ( uint8_t * )VAR_0;
  uint32_t VAR_2 = *VAR_1++;
  VAR_2 |= ( uint32_t )( *VAR_1++ ) << 8;
  VAR_2 |= ( uint32_t )( *VAR_1++ ) << 16;
  VAR_2 |= ( uint32_t )( *VAR_1++ ) << 24;
  return VAR_2;

}
