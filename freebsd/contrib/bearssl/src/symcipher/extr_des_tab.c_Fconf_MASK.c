
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static inline uint32_t
FUNC_0(uint32_t VAR_8, uint32_t VAR_9, uint32_t VAR_10)
{
 uint32_t VAR_11;

 VAR_11 = (VAR_8 << 16) | (VAR_8 >> 16);
 return
    VAR_0[((VAR_11 >> 11) ^ (VAR_9 >> 18)) & 0x3F]
  | VAR_1[((VAR_8 >> 23) ^ (VAR_9 >> 12)) & 0x3F]
  | VAR_2[((VAR_8 >> 19) ^ (VAR_9 >> 6)) & 0x3F]
  | VAR_3[((VAR_8 >> 15) ^ (VAR_9 )) & 0x3F]
  | VAR_4[((VAR_8 >> 11) ^ (VAR_10 >> 18)) & 0x3F]
  | VAR_5[((VAR_8 >> 7) ^ (VAR_10 >> 12)) & 0x3F]
  | VAR_6[((VAR_8 >> 3) ^ (VAR_10 >> 6)) & 0x3F]
  | VAR_7[((VAR_11 >> 15) ^ (VAR_10 )) & 0x3F];
}
