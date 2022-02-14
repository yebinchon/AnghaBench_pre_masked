
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_0)
{
 uint32_t VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_1 = VAR_0[0];
 VAR_2 = VAR_0[1];
 VAR_3 = VAR_0[2];
 VAR_4 = VAR_0[3];
 VAR_5 = VAR_0[4];
 VAR_6 = VAR_0[5];
 VAR_7 = VAR_0[6];
 VAR_8 = VAR_0[7];
 VAR_9 = (VAR_1 >> 8) | (VAR_1 << 24);
 VAR_10 = (VAR_2 >> 8) | (VAR_2 << 24);
 VAR_11 = (VAR_3 >> 8) | (VAR_3 << 24);
 VAR_12 = (VAR_4 >> 8) | (VAR_4 << 24);
 VAR_13 = (VAR_5 >> 8) | (VAR_5 << 24);
 VAR_14 = (VAR_6 >> 8) | (VAR_6 << 24);
 VAR_15 = (VAR_7 >> 8) | (VAR_7 << 24);
 VAR_16 = (VAR_8 >> 8) | (VAR_8 << 24);

 VAR_0[0] = VAR_6 ^ VAR_7 ^ VAR_8 ^ VAR_9 ^ VAR_14 ^ VAR_16 ^ FUNC_0(VAR_1 ^ VAR_6 ^ VAR_7 ^ VAR_9 ^ VAR_14);
 VAR_0[1] = VAR_1 ^ VAR_6 ^ VAR_9 ^ VAR_10 ^ VAR_14 ^ VAR_15 ^ VAR_16 ^ FUNC_0(VAR_2 ^ VAR_6 ^ VAR_8 ^ VAR_10 ^ VAR_14 ^ VAR_15);
 VAR_0[2] = VAR_1 ^ VAR_2 ^ VAR_7 ^ VAR_10 ^ VAR_11 ^ VAR_15 ^ VAR_16 ^ FUNC_0(VAR_1 ^ VAR_3 ^ VAR_7 ^ VAR_11 ^ VAR_15 ^ VAR_16);
 VAR_0[3] = VAR_1 ^ VAR_2 ^ VAR_3 ^ VAR_6 ^ VAR_7 ^ VAR_9 ^ VAR_11 ^ VAR_12 ^ VAR_14 ^ FUNC_0(VAR_1 ^ VAR_2 ^ VAR_4 ^ VAR_6 ^ VAR_7 ^ VAR_8 ^ VAR_9 ^ VAR_12 ^ VAR_14 ^ VAR_16);
 VAR_0[4] = VAR_2 ^ VAR_3 ^ VAR_4 ^ VAR_6 ^ VAR_10 ^ VAR_12 ^ VAR_13 ^ VAR_14 ^ VAR_15 ^ VAR_16 ^ FUNC_0(VAR_2 ^ VAR_3 ^ VAR_5 ^ VAR_6 ^ VAR_8 ^ VAR_10 ^ VAR_13 ^ VAR_14 ^ VAR_15);
 VAR_0[5] = VAR_3 ^ VAR_4 ^ VAR_5 ^ VAR_7 ^ VAR_11 ^ VAR_13 ^ VAR_14 ^ VAR_15 ^ VAR_16 ^ FUNC_0(VAR_3 ^ VAR_4 ^ VAR_6 ^ VAR_7 ^ VAR_11 ^ VAR_14 ^ VAR_15 ^ VAR_16);
 VAR_0[6] = VAR_4 ^ VAR_5 ^ VAR_6 ^ VAR_8 ^ VAR_12 ^ VAR_14 ^ VAR_15 ^ VAR_16 ^ FUNC_0(VAR_4 ^ VAR_5 ^ VAR_7 ^ VAR_8 ^ VAR_12 ^ VAR_15 ^ VAR_16);
 VAR_0[7] = VAR_5 ^ VAR_6 ^ VAR_7 ^ VAR_13 ^ VAR_15 ^ VAR_16 ^ FUNC_0(VAR_5 ^ VAR_6 ^ VAR_8 ^ VAR_13 ^ VAR_16);
}
