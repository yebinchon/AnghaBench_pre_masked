
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(u32 VAR_0)
{
 u32 VAR_1 = VAR_0&0xFF;
 if (VAR_0&0x8000)
  VAR_1 += 256;
 return VAR_1;
}
