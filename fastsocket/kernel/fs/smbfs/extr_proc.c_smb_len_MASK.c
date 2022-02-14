
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u32 ;



__u32
FUNC_0(__u8 * VAR_0)
{
 return ((*(VAR_0+1) & 0x1) << 16L) | (*(VAR_0+2) << 8L) | *(VAR_0+3);
}
