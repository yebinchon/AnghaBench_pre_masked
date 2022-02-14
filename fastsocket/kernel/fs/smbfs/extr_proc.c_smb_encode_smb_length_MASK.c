
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u32 ;



__attribute__((used)) static __u8 *
FUNC_0(__u8 * VAR_0, __u32 VAR_1)
{
 *VAR_0 = 0;
 *(VAR_0+1) = 0;
 *(VAR_0+2) = (VAR_1 & 0xFF00) >> 8;
 *(VAR_0+3) = (VAR_1 & 0xFF);
 if (VAR_1 > 0xFFFF)
 {
  *(VAR_0+1) = 1;
 }
 return VAR_0 + 4;
}
