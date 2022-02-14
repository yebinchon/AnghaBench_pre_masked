
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10hdmiaudio_chinfo {int blocksize; } ;
typedef int kobj_t ;



__attribute__((used)) static uint32_t
FUNC_0(kobj_t VAR_0, void *VAR_1, uint32_t VAR_2)
{
 struct a10hdmiaudio_chinfo *VAR_3 = VAR_1;

 VAR_3->blocksize = VAR_2 & ~3;

 return (VAR_3->blocksize);
}
