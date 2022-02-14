
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(const unsigned char *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = VAR_1[0];
 VAR_2 = (VAR_2 << 2) ^ VAR_1[1];
 VAR_2 = (VAR_2 << 2) ^ VAR_1[2];
 VAR_2 = (VAR_2 << 2) ^ VAR_1[3];
 VAR_2 = (VAR_2 << 2) ^ VAR_1[4];
 VAR_2 = (VAR_2 << 2) ^ VAR_1[5];

 VAR_2 ^= VAR_2 >> 8;

 return VAR_2 & (VAR_0 - 1);
}
