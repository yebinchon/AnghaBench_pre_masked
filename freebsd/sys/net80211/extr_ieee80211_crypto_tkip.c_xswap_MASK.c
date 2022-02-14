
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static __inline u32 FUNC_0(u32 VAR_0)
{
 return ((VAR_0 & 0x00ff00ff) << 8) | ((VAR_0 & 0xff00ff00) >> 8);
}
