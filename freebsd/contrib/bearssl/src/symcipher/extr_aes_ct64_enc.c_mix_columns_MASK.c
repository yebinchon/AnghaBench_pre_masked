
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1(uint64_t *VAR_0)
{
 uint64_t VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 uint64_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_1 = VAR_0[0];
 VAR_2 = VAR_0[1];
 VAR_3 = VAR_0[2];
 VAR_4 = VAR_0[3];
 VAR_5 = VAR_0[4];
 VAR_6 = VAR_0[5];
 VAR_7 = VAR_0[6];
 VAR_8 = VAR_0[7];
 VAR_9 = (VAR_1 >> 16) | (VAR_1 << 48);
 VAR_10 = (VAR_2 >> 16) | (VAR_2 << 48);
 VAR_11 = (VAR_3 >> 16) | (VAR_3 << 48);
 VAR_12 = (VAR_4 >> 16) | (VAR_4 << 48);
 VAR_13 = (VAR_5 >> 16) | (VAR_5 << 48);
 VAR_14 = (VAR_6 >> 16) | (VAR_6 << 48);
 VAR_15 = (VAR_7 >> 16) | (VAR_7 << 48);
 VAR_16 = (VAR_8 >> 16) | (VAR_8 << 48);

 VAR_0[0] = VAR_8 ^ VAR_16 ^ VAR_9 ^ FUNC_0(VAR_1 ^ VAR_9);
 VAR_0[1] = VAR_1 ^ VAR_9 ^ VAR_8 ^ VAR_16 ^ VAR_10 ^ FUNC_0(VAR_2 ^ VAR_10);
 VAR_0[2] = VAR_2 ^ VAR_10 ^ VAR_11 ^ FUNC_0(VAR_3 ^ VAR_11);
 VAR_0[3] = VAR_3 ^ VAR_11 ^ VAR_8 ^ VAR_16 ^ VAR_12 ^ FUNC_0(VAR_4 ^ VAR_12);
 VAR_0[4] = VAR_4 ^ VAR_12 ^ VAR_8 ^ VAR_16 ^ VAR_13 ^ FUNC_0(VAR_5 ^ VAR_13);
 VAR_0[5] = VAR_5 ^ VAR_13 ^ VAR_14 ^ FUNC_0(VAR_6 ^ VAR_14);
 VAR_0[6] = VAR_6 ^ VAR_14 ^ VAR_15 ^ FUNC_0(VAR_7 ^ VAR_15);
 VAR_0[7] = VAR_7 ^ VAR_15 ^ VAR_16 ^ FUNC_0(VAR_8 ^ VAR_16);
}
