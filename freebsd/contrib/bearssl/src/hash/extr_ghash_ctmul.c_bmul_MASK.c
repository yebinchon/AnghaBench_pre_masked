
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline void
FUNC_1(uint32_t *VAR_0, uint32_t *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
 uint64_t VAR_12, VAR_13, VAR_14, VAR_15;
 uint64_t VAR_16;

 VAR_4 = VAR_2 & (uint32_t)0x11111111;
 VAR_5 = VAR_2 & (uint32_t)0x22222222;
 VAR_6 = VAR_2 & (uint32_t)0x44444444;
 VAR_7 = VAR_2 & (uint32_t)0x88888888;
 VAR_8 = VAR_3 & (uint32_t)0x11111111;
 VAR_9 = VAR_3 & (uint32_t)0x22222222;
 VAR_10 = VAR_3 & (uint32_t)0x44444444;
 VAR_11 = VAR_3 & (uint32_t)0x88888888;
 VAR_12 = FUNC_0(VAR_4, VAR_8) ^ FUNC_0(VAR_5, VAR_11) ^ FUNC_0(VAR_6, VAR_10) ^ FUNC_0(VAR_7, VAR_9);
 VAR_13 = FUNC_0(VAR_4, VAR_9) ^ FUNC_0(VAR_5, VAR_8) ^ FUNC_0(VAR_6, VAR_11) ^ FUNC_0(VAR_7, VAR_10);
 VAR_14 = FUNC_0(VAR_4, VAR_10) ^ FUNC_0(VAR_5, VAR_9) ^ FUNC_0(VAR_6, VAR_8) ^ FUNC_0(VAR_7, VAR_11);
 VAR_15 = FUNC_0(VAR_4, VAR_11) ^ FUNC_0(VAR_5, VAR_10) ^ FUNC_0(VAR_6, VAR_9) ^ FUNC_0(VAR_7, VAR_8);
 VAR_12 &= (uint64_t)0x1111111111111111;
 VAR_13 &= (uint64_t)0x2222222222222222;
 VAR_14 &= (uint64_t)0x4444444444444444;
 VAR_15 &= (uint64_t)0x8888888888888888;
 VAR_16 = VAR_12 | VAR_13 | VAR_14 | VAR_15;
 *VAR_1 = (uint32_t)VAR_16;
 *VAR_0 = (uint32_t)(VAR_16 >> 32);
}
