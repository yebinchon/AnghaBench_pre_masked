
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t
FUNC_0(uint32_t VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2, VAR_3, VAR_4, VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_2 = VAR_0 & (uint32_t)0x11111111;
 VAR_3 = VAR_0 & (uint32_t)0x22222222;
 VAR_4 = VAR_0 & (uint32_t)0x44444444;
 VAR_5 = VAR_0 & (uint32_t)0x88888888;
 VAR_6 = VAR_1 & (uint32_t)0x11111111;
 VAR_7 = VAR_1 & (uint32_t)0x22222222;
 VAR_8 = VAR_1 & (uint32_t)0x44444444;
 VAR_9 = VAR_1 & (uint32_t)0x88888888;
 VAR_10 = (VAR_2 * VAR_6) ^ (VAR_3 * VAR_9) ^ (VAR_4 * VAR_8) ^ (VAR_5 * VAR_7);
 VAR_11 = (VAR_2 * VAR_7) ^ (VAR_3 * VAR_6) ^ (VAR_4 * VAR_9) ^ (VAR_5 * VAR_8);
 VAR_12 = (VAR_2 * VAR_8) ^ (VAR_3 * VAR_7) ^ (VAR_4 * VAR_6) ^ (VAR_5 * VAR_9);
 VAR_13 = (VAR_2 * VAR_9) ^ (VAR_3 * VAR_8) ^ (VAR_4 * VAR_7) ^ (VAR_5 * VAR_6);
 VAR_10 &= (uint32_t)0x11111111;
 VAR_11 &= (uint32_t)0x22222222;
 VAR_12 &= (uint32_t)0x44444444;
 VAR_13 &= (uint32_t)0x88888888;
 return VAR_10 | VAR_11 | VAR_12 | VAR_13;
}
