
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct siphash {char const c; int v3; int v0; int v2; int v1; int * buf; int * p; } ;


 int FUNC_0 (struct siphash*,int) ;

__attribute__((used)) static uint64_t FUNC_1(struct siphash *VAR_0) {
 const char VAR_1 = (char)(VAR_0->p - VAR_0->buf);
 uint64_t VAR_2 = (VAR_0->c + VAR_1) << 56;

 switch (VAR_1) {
 case 7: VAR_2 |= (uint64_t)VAR_0->buf[6] << 48;

 case 6: VAR_2 |= (uint64_t)VAR_0->buf[5] << 40;

 case 5: VAR_2 |= (uint64_t)VAR_0->buf[4] << 32;

 case 4: VAR_2 |= (uint64_t)VAR_0->buf[3] << 24;

 case 3: VAR_2 |= (uint64_t)VAR_0->buf[2] << 16;

 case 2: VAR_2 |= (uint64_t)VAR_0->buf[1] << 8;

 case 1: VAR_2 |= (uint64_t)VAR_0->buf[0] << 0;

 case 0: break;
 }

 VAR_0->v3 ^= VAR_2;
 FUNC_0(VAR_0, 2);
 VAR_0->v0 ^= VAR_2;
 VAR_0->v2 ^= 0xff;
 FUNC_0(VAR_0, 4);

 return VAR_0->v0 ^ VAR_0->v1 ^ VAR_0->v2 ^ VAR_0->v3;
}
